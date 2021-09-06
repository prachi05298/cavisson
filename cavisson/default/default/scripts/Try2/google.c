/*-----------------------------------------------------------------------------
    Name: google
    Recorded By: cavisson
    Date of recording: 08/20/2021 09:53:14
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void google()
{

    ns_start_transaction("index");
    ns_browser("index",
        "url=https://www.google.com/",
        "browserurl=https://www.google.com",
        "action=Home",
        "title=Google",
        "Snapshots=webpage_1629433289224.png");
    ns_end_transaction("index", NS_AUTO_STATUS);

    ns_page_think_time(7.44);



    ns_start_transaction("index_2");
    ns_button("index_2",
        "url=https://www.google.com/",
        "action=click",
        attributes=["name=btnI","data-ved=0ahUKEwjgkNqB4L7yAhWLqZUCHcNiBgQQ19QECAw","value=I'm Feeling Lucky","class=RNmpXc","jsaction=trigger.kWlxhc","aria-label=I'm Feeling Lucky","type=submit"],
        "class=RNmpXc",
        "csspath=html > body > div.L3eUgb > div.o3j99.ikrT4e.om7nvf > form > div:nth-child(1) > div.A8SBwf > div.FPdoLc.lJ9FBc > center > input.RNmpXc",
        "xpath=HTML/BODY[1]/DIV[1]/DIV[3]/FORM[1]/DIV[1]/DIV[1]/DIV[3]/CENTER[1]/INPUT[2]",
        "tagName=INPUT",
        "Snapshots=webpage_1629433296665.png");
    ns_end_transaction("index_2", NS_AUTO_STATUS);

    ns_page_think_time(33.86);



    ns_start_transaction("doodles");
    ns_link("doodles",
        "url=https://www.google.com/doodles",
        "content=India Independence Day 2021",
        "type=LINK",
        "csspath=ul#archive-list > li.doodle-thumb.hide-card > div.thumb-container > div.info > div.title > a",
        "xpath=//*[@id=\"archive-list\"]/LI[11]/DIV[1]/DIV[2]/DIV[2]/A[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[1]/DIV[2]/UL[1]/LI[11]/DIV[1]/DIV[2]/DIV[2]/A[1]",
        "action=click",
        attributes=["href=/doodles/india-independence-day-2021","title=India Independence Day 2021"],
        "tagName=A",
        "Snapshots=webpage_1629433330526.png");
    ns_end_transaction("doodles", NS_AUTO_STATUS);

    ns_page_think_time(19.169);



    ns_start_transaction("india_independence_day_2021");
    ns_edit_field("india_independence_day_2021",
        "url=https://www.google.com/doodles/india-independence-day-2021",
        "action=change",
        attributes=["name=q","id=searchinput","placeholder=Search Doodles","type=text","class=maximize"],
        "ID=searchinput",
        "class=maximize",
        "csspath=input#searchinput",
        "xpath=//*[@id=\"searchinput\"]",
        "xpath1=//*[@id=\"searchform\"]/DIV[1]/INPUT[1]",
        "xpath2=HTML/BODY[1]/DIV[1]/DIV[1]/UL[1]/LI[4]/FORM[1]/DIV[1]/INPUT[1]",
        "tagName=INPUT",
        "value=happy",
        "Snapshots=webpage_1629433349693.png");
    ns_end_transaction("india_independence_day_2021", NS_AUTO_STATUS);

    ns_page_think_time(0.107);



    ns_start_transaction("india_independence_day_2021_2");
    ns_key_event("india_independence_day_2021_2",
        "url=https://www.google.com/doodles/india-independence-day-2021",
        "type=TEXT",
        "ID=searchinput",
        "class=maximize",
        "xpath=//*[@id=\"searchinput\"]",
        "xpath1=//*[@id=\"searchform\"]/DIV[1]/INPUT[1]",
        "xpath2=HTML/BODY[1]/DIV[1]/DIV[1]/UL[1]/LI[4]/FORM[1]/DIV[1]/INPUT[1]",
        "action=click",
        attributes=["name=q","id=searchinput","placeholder=Search Doodles","type=text","class=minimize"],
        "tagName=INPUT",
        "value=53",
        "Snapshots=webpage_1629433351301.png");
    ns_end_transaction("india_independence_day_2021_2", NS_AUTO_STATUS);

    ns_page_think_time(31.732);



    ns_start_transaction("doodles_2");
    ns_link("doodles_2",
        "url=https://www.google.com/doodles?q=happy",
        "content=Dr. Govindappa Venkataswamy's 100th Birthday",
        "type=LINK",
        "csspath=ul#archive-list > li.doodle-thumb.hide-card > div.thumb-container > div.info > div.title > a",
        "xpath=//*[@id=\"archive-list\"]/LI[38]/DIV[1]/DIV[2]/DIV[2]/A[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[1]/DIV[2]/UL[1]/LI[38]/DIV[1]/DIV[2]/DIV[2]/A[1]",
        "action=click",
        attributes=["href=/doodles/dr-govindappa-venkataswamys-100th-birthday","title=Dr. Govindappa Venkataswamy's 100th Birthday"],
        "tagName=A",
        "Snapshots=webpage_1629433381533.png");
    ns_end_transaction("doodles_2", NS_AUTO_STATUS);

    ns_page_think_time(12.722);


}
