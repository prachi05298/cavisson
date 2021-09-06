/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 09/01/2021 02:47:09
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=http://10.10.30.58:9013/tours/index.html",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(11.698);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.58:9013/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username={usnm}&password={pass}&login.x=71&login.y=13&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwliaW5ldm9sdmUDY29tAAABAAEAACkQAAAAAAAAUgAMAE4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwliaW5ldm9sdmUDY29tAAAcAAEAACkQAAAAAAAAUgAMAE4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(3.181);

    //Page Auto split for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.58:9013/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(8.689);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?depart=London&departDate=09-02-2021&arrive=Zurich&returnDate=09-03-2021&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=33&findFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(5.037);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?hidden_outboundFlight_button0=290%7C133%7C09-02-2021&hidden_outboundFlight_button1=291%7C121%7C09-02-2021&outboundFlight=button2&hidden_outboundFlight_button2=292%7C127%7C09-02-2021&hidden_outboundFlight_button3=293%7C108%7C09-02-2021&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=62&reserveFlights.y=8",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(18.324);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard={credit}&expDate=07%2F22&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=292%7C127%7C09-02-2021&advanceDiscount=&buyFlights.x=59&buyFlights.y=14&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/bookanother.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://update.googleapis.com/service/update2/json?cup2key=10:1676736165&cup2hreq=4773b19563d939b8da719ef0c55d62c6ee10e94274686500b48049accbb53c52", "METHOD=POST", "HEADER=X-Goog-Update-AppId:gcmjkmgdlgnkkcocmoeiminaijmmjnii,llkgjffcdpffmhiakmfcdcblohccpfmo,giekcmmlnklenlaomppkphknjmnnpneh,hfnkpimlhhgieaddgfemjhofmfblmnib,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,pdafiollngonhoadbmdoemagnfpdphbe,khaoiebndkojlmppeemjhbpbandiljpe,ggkkehgbnfjpeggfpleeakpidbkibbmn,obedbbhbpmojnkanicioggnmelmoomoc,oimompecagnajdejgnnjijobebaeigek,cmahhnpholdijhjokonmfdjbfmklppij,aemomkdncapdnfajjbbcbdebjljbpmpj,jflookgnkcckhobaglndicnbbgbonegd,eeigpngbgcognadeebkilcpcaedhellh", "HEADER=X-Goog-Update-Interactivity:bg", "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93", "HEADER=Content-Type:application/json", "HEADER=Sec-Fetch-Site:none", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty",
            BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:","cohorthint":"M54ToM99","cohortname":"M54ToM99","enabled":true,"packages":{"package":[{"fp":"1.b45fc5f3479dc7b07e8e5822a11785819b7f1c249c9b47dcffcb28edbbc2d706"}]},"ping":{"ping_freshness":"{debc5bc8-e6a9-4bc8-b732-3a12ca45bb61}","rd":5356},"updatecheck":{},"version":"9.29.4"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"ping":{"ping_freshness":"{2981a9a5-1a94-437b-bdfb-58bed9e17fc4}","rd":5356},"updatecheck":{},"version":"0.0.0.0"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{3b5a7fb6-c253-48ee-9b3b-dea7372f5fd6}","rd":5356},"updatecheck":{},"version":"7"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.14f73e1a7c2cda11c73ef6ad56407ca320aca23afd205c786f6d7b7f815509a8"}]},"ping":{"ping_freshness":"{38eb5a26-d87b-4bd9-be52-cf1103b13d05}","rd":5356},"updatecheck":{},"version":"6825"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.f68488b90fd8d1e06d10086ffa627609306365aea06606536872b1bd0fe49b8b"}]},"ping":{"ping_freshness":"{be262413-bf68-4e19-91a8-b1bf9e5796b2}","rd":5356},"updatecheck":{},"version":"95.0.4628.0"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{f732693c-29ee-4dd9-b35e-165b98c55d74}","rd":5356},"updatecheck":{},"version":"1"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a"}]},"ping":{"ping_freshness":"{b2d3c47c-d315-408a-b85d-066b6e6359fb}","rd":5356},"updatecheck":{},"version":"2021.8.17.1300"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4"}]},"ping":{"ping_freshness":"{95e76dd6-893b-446b-98dc-1c543e2c70f4}","rd":5356},"updatecheck":{},"version":"43"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.0dc23b37d1fa49e00e0a208bfcb91839be99b9e85162814b05987c2eba1b3701"}]},"ping":{"ping_freshness":"{27ec09f8-3790-422e-8d4e-998e8aa361d8}","rd":5356},"updatecheck":{},"version":"2021.8.23.1140"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.47b2ab949538dd83ed2b59a3f3feffafb559b55d62a1cd377895a03024c68641"}]},"ping":{"ping_freshness":"{b17129eb-2275-4cfd-93cc-ea6b64f6f0b2}","rd":5356},"updatecheck":{},"version":"20210817.392344495"},{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.60341eb69770633861e303657417e6a30c6948742291dd2e1478ca2c2c510d49"}]},"ping":{"ping_freshness":"{7ac3a4f1-36e3-4fce-ab79-9ce71016aee2}","rd":5356},"updatecheck":{},"version":"4.10.2209.0"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{19d81439-ae2a-45aa-8884-74b32d958b37}","rd":5356},"updatecheck":{},"version":"1.0.6"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{7948767a-a36a-46a6-9764-2096e109d4fa}","rd":5356},"updatecheck":{},"version":"1.0.6.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.87a7864f0923c4a98c227e49dff236f257e13f8e046b3fba6c6338ce6439f043"}]},"ping":{"ping_freshness":"{f7f92625-8ae6-4481-918b-c525ba034322}","rd":5356},"updatecheck":{},"version":"2687"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{d5bde898-42cd-44d5-9ba6-399fe0ae6256}","rd":5356},"updatecheck":{},"version":"2020.11.2.164946"}],"arch":"x86","dedup":"cr","domainjoined":false,"hw":{"physmemory":16},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{bf8090af-e04c-4304-80c6-65a45d81a8a9}","sessionid":"{0c43efb8-503a-49f7-b684-e39ff7c01ca2}","updaterversion":"90.0.4430.93","wow64":true}}",
        BODY_END,
             END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAHAABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(3.466);

    //Page Auto split for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.58:9013/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(4.963);

}
