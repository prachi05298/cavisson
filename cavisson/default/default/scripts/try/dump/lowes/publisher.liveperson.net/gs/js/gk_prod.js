// START - AB Testing
function saveSegment(segment) {
  var savedSegment = parseInt(segment);
  lpTag.sdes = lpTag.sdes||[];
  lpTag.sdes.push(
    {
        "type": "mrktInfo",
            "info": {
            "affiliate": savedSegment
            }
   });
}

function getSegment() {
  if (typeof window.lpABTestSegment != "undefined") {
    saveSegment(window.lpABTestSegment);
  } else {
    setTimeout(function() {
      if (typeof window.lpABTestSegment != "undefined") {
        saveSegment(window.lpABTestSegment);
      } else {
        saveSegment("99999");
      }
    }, 3000);
  }
}

function setSegment() {
  try {
    var lpSegment = localStorage.getItem('abSegment');

    if (lpSegment) {
      localStorage.removeItem('abSegment');
    }

    getSegment();

  } catch(e) {console.info(e)}
}

setSegment();
// END - AB Testing

function gkfunct2(){
  if(localStorage.getItem('lct')===null){} else{
      let tk = localStorage.getItem('lct').split("-");
      if(Date.now()-tk[0]>7200000){ 
          tk[1]=0;
          localStorage.setItem('lct', Date.now()+"-0");
      }
      if(tk[1]>4){ 
          document.getElementById("liveperson-persist-button").setAttribute("id", "lpbtnDiv");
      }
  }
} 
gkfunct2();

lpTag.events.bind("LP_OFFERS","OFFER_CLICK",function(){
  if(localStorage.getItem('lct')===null){
      localStorage.setItem('lct', Date.now()+"-0");
  } else {
      let tk = localStorage.getItem('lct').split("-");
      if(Date.now()-tk[0]<90000){ tk[1]=parseInt(tk[1])+1;}
      if(Date.now()-tk[0]>180000){ tk[1]=0;}

      localStorage.setItem('lct', Date.now()+"-"+tk[1]);
      if(tk[1]>4){ 
          document.getElementById("liveperson-persist-button").setAttribute("id", "lpbtnDiv");
          var e = document.getElementById("lpbtnDiv");
          var child = e.lastElementChild;  
          while (child) { 
              e.removeChild(child); 
              child = e.lastElementChild; 
          } 
      }
  }
});

// START - Code for Minimized button (supports multitab)

document.getElementById("liveperson-persist-button").style.display="none";

function minimizeButton() {
  var lpcebtn = document.getElementById("chat-shutdown");
  if (lpcebtn != null) {
  try {
      lpcebtn.addEventListener("click", function(){
          minimizeIncumbent();

          localStorage.lpMini = "true";
          localStorage.sid = lpTag.taglets.lp_monitoringSDK.getSid();
      })

      //if persisting mini version (if mini flag is true and we are in the same session as when the flag was set)
      if(localStorage.lpMini === "true" && localStorage.sid == lpTag.taglets.lp_monitoringSDK.getSid() ){ 
          minimizeIncumbent();
      }

      //mini is true but this is a new session -> reset flag and set new session id
      if(localStorage.lpMini === "true" && localStorage.sid!=lpTag.taglets.lp_monitoringSDK.getSid()){ 
          localStorage.lpMini = "false";
          localStorage.sid = lpTag.taglets.lp_monitoringSDK.getSid();
      }
  } catch(e) {console.log(e);}
}
  //if element is hidden -> unhide because all processing is complete
  document.getElementById("liveperson-persist-button").style.display="block";  
};

lpTag.events.bind("LP_OFFERS","OFFER_IMPRESSION", minimizeButton);

// END - Code for Minimized button (persistent over multitab)

// START - Helper Functions for Minimized Button

////// --- Experience 0 (incumbent for segment 0 & "99999")

function minimizeIncumbent() {
  document.getElementById("chat_container").style.display="none";
  document.getElementById("chat_container").children[0].src="https://liveperson-liveengage.s3.amazonaws.com/le-images/lowes/2021-07/NewMinimizedInvite+(07-22-2021).png";
  document.getElementById("chat_container").children[0].setAttribute("height", "60px")
  document.getElementById("chat_container").children[0].setAttribute("width", "60px")
  
  document.getElementById("chat_container").style.right="0px";
  document.getElementById("chat_container").style.bottom="0px";
  document.getElementById("chat_container").style.padding="20px";
  document.getElementById("chat_container").style.overflow="hidden";
  document.getElementById("chat_container").style.display="block";
  document.getElementById("chat-shutdown").style.display="none";
}

// END - Helper Functions for Minimized Button

// START - Code to hide engagement during minimized chatting state.

lpTag.events.bind("lpUnifiedWindow", "state", function(a, b) {
  if (a.state == "chatting") {
     document.getElementById("chat_container").style.display="none"
  } 
});

// END - Code to hide engagement during minimized chatting state.
