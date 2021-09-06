/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 08/24/2021 10:44:11
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

    ns_start_transaction("index");
    ns_browser("index",
        "url=https://www.lowes.com/",
        "browserurl=https://www.lowes.com",
        "action=Home",
        "title=Lowe's Home Improvement",
        "Snapshots=webpage_1629781873357.png");
    ns_end_transaction("index", NS_AUTO_STATUS);

    ns_page_think_time(16.57);



    ns_start_transaction("index_2");
    ns_span("index_2",
        "url=https://www.lowes.com/",
        "type=SPAN",
        "action=click",
        attributes=["class=label link-label bold"],
        "class=label link-label bold",
        "csspath=a#navlink_3 > span",
        "xpath=//*[@id=\"navlink_3\"]/SPAN[1]",
        "xpath1=HTML/BODY[1]/DIV[3]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/HEADER[1]/DIV[4]/DIV[1]/DIV[1]/NAV[1]/A[2]/SPAN[1]",
        "tagName=SPAN",
        "content=Services",
        "Snapshots=webpage_1629781889926.png");
    ns_end_transaction("index_2", NS_AUTO_STATUS);

    ns_page_think_time(48.282);



    ns_start_transaction("lowes_home_services_html");
    ns_span("lowes_home_services_html",
        "url=https://www.lowes.com/l/lowes-home-services.html",
        "type=SPAN",
        "action=click",
        attributes=["class=label link-label bold"],
        "class=label link-label bold",
        "csspath=a#navlink_4 > span",
        "xpath=//*[@id=\"navlink_4\"]/SPAN[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/HEADER[1]/DIV[4]/DIV[1]/DIV[1]/NAV[1]/A[3]/SPAN[1]",
        "tagName=SPAN",
        "content=Ideas",
        "Snapshots=webpage_1629781938208.png");
    ns_end_transaction("lowes_home_services_html", NS_AUTO_STATUS);

    ns_page_think_time(37.181);



    ns_start_transaction("diy_projects_and_ideas");
    ns_link("diy_projects_and_ideas",
        "url=https://www.lowes.com/diy-projects-and-ideas",
        "type=ELEMENT",
        "action=click",
        attributes=["class=btn btn-grey js-dropdown align-center text-titlecase"],
        "class=btn btn-grey js-dropdown align-center text-titlecase",
        "tagName=DIV",
        "csspath=div#main > div.grid-container > div > article > div.grid-parent.grid-100 > div > div.npcsubmenu.parbase > div.npc-submenu.grid-100.no-padding.v-spacing-large > div.grid-25.tablet-grid-25.no-padding > div > div.btn.btn-grey.js-dropdown.align-center.text-titlecase",
        "xpath=//*[@id=\"main\"]/DIV[3]/DIV[1]/ARTICLE[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/DIV[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[1]/DIV[3]/DIV[1]/ARTICLE[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/DIV[1]",
        "Snapshot=webpage_1629781975390.png");
    ns_end_transaction("diy_projects_and_ideas", NS_AUTO_STATUS);

    ns_page_think_time(4.255);



    ns_start_transaction("diy_projects_and_ideas_2");
    ns_link("diy_projects_and_ideas_2",
        "url=https://www.lowes.com/diy-projects-and-ideas",
        "content=Fencing & Gates",
        "type=LINK",
        "csspath=div#main > div.grid-container > div > article > div.grid-parent.grid-100 > div > div.npcsubmenu.parbase > div.npc-submenu.grid-100.no-padding.v-spacing-large > div.grid-25.tablet-grid-25.no-padding > div > div.dropdown-menu.background-white > div > div.panel-body.no-padding > div > div.grid-20.tablet-grid-20.no-padding.js-npcsubmenu > ul > li:nth-child(1) > a",
        "xpath=//*[@id=\"main\"]/DIV[3]/DIV[1]/ARTICLE[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/UL[1]/LI[1]/A[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[1]/DIV[3]/DIV[1]/ARTICLE[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/UL[1]/LI[1]/A[1]",
        "action=click",
        attributes=["href=/nl/diy-projects-and-ideas/buying-guide/fencing-gates"],
        "tagName=A",
        "Snapshots=webpage_1629781979645.png");
    ns_end_transaction("diy_projects_and_ideas_2", NS_AUTO_STATUS);

    ns_page_think_time(18.877);



    ns_start_transaction("fencing_gates");
    ns_span("fencing_gates",
        "url=https://www.lowes.com/nl/diy-projects-and-ideas/buying-guide/fencing-gates",
        "type=SPAN",
        "action=click",
        attributes=["class=label btn-label"],
        "class=label btn-label",
        "csspath=button#navlink_1 > span",
        "xpath=//*[@id=\"navlink_1\"]/SPAN[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/HEADER[1]/DIV[4]/DIV[1]/DIV[1]/NAV[1]/BUTTON[1]/SPAN[1]",
        "tagName=SPAN",
        "content=Shop",
        "Snapshots=webpage_1629781998521.png");
    ns_end_transaction("fencing_gates", NS_AUTO_STATUS);

    ns_page_think_time(4.212);



    ns_start_transaction("fencing_gates_2");
    ns_span("fencing_gates_2",
        "url=https://www.lowes.com/nl/diy-projects-and-ideas/buying-guide/fencing-gates",
        "type=SPAN",
        "action=click",
        attributes=[],
        "csspath=li#flyout_Section_2_Item_1 > button > span > span",
        "xpath=//*[@id=\"flyout_Section_2_Item_1\"]/BUTTON[1]/SPAN[1]/SPAN[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/NAV[1]/DIV[2]/UL[2]/LI[1]/BUTTON[1]/SPAN[1]/SPAN[1]",
        "tagName=SPAN",
        "content=Hardware",
        "Snapshots=webpage_1629782002736.png");
    ns_end_transaction("fencing_gates_2", NS_AUTO_STATUS);

    ns_page_think_time(2.771);



    ns_start_transaction("fencing_gates_3");
    ns_span("fencing_gates_3",
        "url=https://www.lowes.com/nl/diy-projects-and-ideas/buying-guide/fencing-gates",
        "type=SPAN",
        "action=click",
        attributes=["class=label link-label bold"],
        "class=label link-label bold",
        "csspath=li#flyout_Section_2_Item_2 > a > span",
        "xpath=//*[@id=\"flyout_Section_2_Item_2\"]/A[1]/SPAN[1]",
        "xpath1=HTML/BODY[1]/DIV[2]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/NAV[1]/DIV[2]/UL[2]/LI[2]/A[1]/SPAN[1]",
        "tagName=SPAN",
        "content=Nails",
        "Snapshots=webpage_1629782005504.png");
    ns_end_transaction("fencing_gates_3", NS_AUTO_STATUS);

    ns_page_think_time(15.524);



    ns_start_transaction("X294710887");
    ns_link("X294710887",
        "url=https://www.lowes.com/pl/Nails-Fasteners-Hardware/4294710887",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=P",
        "csspath=section#main > div > div:nth-child(3) > div.visual-navigation-container.mb-36-60 > div > div > div > div > div:nth-child(2) > div > a > p",
        "xpath=//*[@id=\"main\"]/DIV[1]/DIV[2]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "xpath1=HTML/BODY[1]/DIV[4]/SECTION[1]/DIV[1]/DIV[2]/DIV[2]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "Snapshot=webpage_1629782021029.png");
    ns_end_transaction("X294710887", NS_AUTO_STATUS);

    ns_page_think_time(7.354);



    ns_start_transaction("X36545200");
    ns_link("X36545200",
        "url=https://www.lowes.com/pl/Framing-nails-Nails-Fasteners-Hardware/536545200",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=P",
        "csspath=section#main > div > div:nth-child(3) > div.visual-filter-container.mb-36-60 > div > div > div > div > div:nth-child(2) > div > a > p",
        "xpath=//*[@id=\"main\"]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "xpath1=HTML/BODY[1]/DIV[4]/SECTION[1]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "Snapshot=webpage_1629782028382.png");
    ns_end_transaction("X36545200", NS_AUTO_STATUS);

    ns_page_think_time(8.477);



    ns_start_transaction("X36545200_2");
    ns_link("X36545200_2",
        "url=https://www.lowes.com/pl/Framing-nails--Framing-nails-Nails-Fasteners-Hardware/536545200?refinement=3741872482",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=P",
        "csspath=section#main > div > div:nth-child(3) > div.visual-filter-container.mb-36-60 > div > div > div > div > div:nth-child(2) > div > a > p",
        "xpath=//*[@id=\"main\"]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "xpath1=HTML/BODY[1]/DIV[4]/SECTION[1]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "Snapshot=webpage_1629782036859.png");
    ns_end_transaction("X36545200_2", NS_AUTO_STATUS);

    ns_page_think_time(4.331);



    ns_start_transaction("X36545200_3");
    ns_link("X36545200_3",
        "url=https://www.lowes.com/pl/Framing-nails-Nails-Fasteners-Hardware/536545200",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=P",
        "csspath=section#main > div > div:nth-child(3) > div.visual-filter-container.mb-36-60 > div > div > div > div > div:nth-child(2) > div > a > p",
        "xpath=//*[@id=\"main\"]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "xpath1=HTML/BODY[1]/DIV[4]/SECTION[1]/DIV[1]/DIV[2]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "Snapshot=webpage_1629782041191.png");
    ns_end_transaction("X36545200_3", NS_AUTO_STATUS);

    ns_page_think_time(0.52);



    ns_start_transaction("X36545200_4");
    ns_link("X36545200_4",
        "url=https://www.lowes.com/pl/Framing-nails-Nails-Fasteners-Hardware/536545200",
        "type=ELEMENT",
        "action=click",
        attributes=[],
        "tagName=P",
        "csspath=section#main > div > div:nth-child(3) > div.visual-filter-container.mb-36-60 > div > div > div > div > div:nth-child(2) > div > a > p",
        "xpath=//*[@id=\"main\"]/DIV[1]/DIV[3]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "xpath1=HTML/BODY[1]/DIV[4]/SECTION[1]/DIV[1]/DIV[3]/DIV[3]/DIV[1]/DIV[1]/DIV[1]/DIV[1]/DIV[2]/DIV[1]/A[1]/P[1]",
        "Snapshot=webpage_1629782041710.png");
    ns_end_transaction("X36545200_4", NS_AUTO_STATUS);

    ns_page_think_time(9.919);


}
