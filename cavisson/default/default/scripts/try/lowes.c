/*-----------------------------------------------------------------------------
    Name: lowes
    Recorded By: cavisson
    Date of recording: 08/11/2021 11:01:51
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void lowes()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://www.lowes.com/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.lowescdn.com/scaffold-themes/1.4.5/lowes/fonts/lowes-icons/lowes-icons.woff", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/scaffold/1.2.0/fonts/din/din-next.woff", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:font", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//appliance-special-values-fds-dp18-326692-dt?scl=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//appliances-special-financing-dp18-320480-dt?scl=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//deals-of-the-day-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//grills-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//patio-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//outdoor-power-equiptment-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/home-web-app/2.104.0/react.845c9bca.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/home-web-app/2.104.0/vendors.90b32161.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/home-web-app/2.104.0/client.7681209b.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/launch-a30f5aebfe36.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/akam/11/4d4d65fc", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;akaalb_prod_dual", END_INLINE,
            "URL=https://s.go-mpulse.net/boomerang/W8H5V-D6KN9-TTLED-Y3VKD-B2SQA", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagservices.com/tag/js/gpt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/googleadmanagerlibrary/V1.01.38-B11/gamlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;akaalb_prod_dual", END_INLINE,
            "URL=https://www.lowescdn.com/gauge/1.4.0/js/index.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/p13n/V2.4.0-B24/clientlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("id");
    ns_web_url ("id",
        "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1628659840",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("id", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("XGZyw");
    ns_web_url ("XGZyw",
        "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;akaalb_prod_dual;ak_bmsc;_abck;bm_sz",
        BODY_BEGIN,
            "{"sensor_data":"7a74G7m23Vrp0o5c9276101.7-1,2,-94,-100,Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36,uaend,12147,20030107,en-US,Gecko,0,0,0,0,400727,9840316,1288,636,1360,663,1288,501,1288,,cpen:0,i1:0,dm:0,cwen:0,non:1,opc:0,fc:0,sc:0,wrc:1,isc:0,vib:1,bat:1,x11:0,x12:1,7556,0.13752713368,814329920158,0,loc:-1,2,-94,-101,do_en,dm_en,t_en-1,2,-94,-105,0,0,0,0,1241,1038,0;-1,2,-94,-102,0,0,0,0,1241,1038,0;-1,2,-94,-108,-1,2,-94,-110,-1,2,-94,-117,-1,2,-94,-111,-1,2,-94,-109,-1,2,-94,-114,-1,2,-94,-103,-1,2,-94,-112,https://www.lowes.com/-1,2,-94,-115,1,32,32,0,0,0,0,2,0,1628659840316,-999999,17422,0,0,2903,0,0,4,0,0,60EED5F365C9E9A4B1813AF1DB1118C9~-1~YAAQbHIsMXbtTJ16AQAABPWwMwbKzhhrvWhLqMx5Sk7uE3muWh7sfoMub+absXJZegpAkaUUiQdQpPGutyZYRIs6fEnW77CyBlIyc0pE2SMZvPwYqY3WLNZeEwcuHFsT0SNKy0qFR/7akHZ5uLYCFGv/9cWJMl382USTpQWEEIuf+L5Z3Q+nWp4kgEi3XV25DSVQVM2Fdv/ZehClzAXAsPd9Q5IZ3tKCJKI8iYHEFzvMHOALJbVjJUKSBbd2OyjzFd6z9bX+9TJwAKj87UAlFGP5aU/WYLb0WEhqN44uTyLyY6X4GCkeZUJ3LE8n/1ZP/+B2XSrDjy6iXljKixdbovBaB7uQmv7f6HVgSovV4A3+A0JXU6FuA9WF~-1~-1~-1,34364,-1,-1,30261689,PiZtE,22380,96,0,-1-1,2,-94,-106,0,0-1,2,-94,-119,-1-1,2,-94,-122,0,0,0,0,1,0,0-1,2,-94,-123,-1,2,-94,-124,-1,2,-94,-126,-1,2,-94,-127,8-1,2,-94,-70,-1-1,2,-94,-80,94-1,2,-94,-116,147604605-1,2,-94,-118,80776-1,2,-94,-129,-1,2,-94,-121,;9;-1;0"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://lda.lowes.com/is/image/Lowes//lawn-and-garden-equiptment-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//lighting-and-ceiling-fans-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//appliances-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//bath-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//kitchen-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//paint-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//tools-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//beat-the-heat-popcat?wid=260", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//credit-dp18-3222226-dt?scl=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//100-hometowns-dp18-326692-dt?scl=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/global-header-footer/5.281.0/header-v2.ce2d64e7.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/global-header-footer/5.281.0/footer-v2.19c12c66.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/notice?domain=lowes.com&c=teconsent&pn=1&text=true&pcookie&gtm=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/atc/0.7.1-alpha.688/atc.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/exp-target/2.0.11/exp.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/recs/micro-app/1.4.29/recommendations.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lowes15841z.btttag.com/btt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/scaffold/1.2.0/fonts/din/din-next.woff", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/scaffold-themes/1.4.5/lowes/fonts/lowes-icons/lowes-icons.woff", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("XGZyw", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xc4d60e8_af11_4882_8069_1167");
    ns_web_url ("Xc4d60e8_af11_4882_8069_1167",
        "URL=https://www.lowes.com/p13n/audiences/dbid/0c4d60e8-af11-4882-8069-11671292895b",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;akaalb_prod_dual;ak_bmsc;_abck;bm_sz",
        INLINE_URLS,
            "URL=https://lda.lowes.com/is/image/Lowes//showroom-styles-dp18-326692-dt?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//deals-of-the-day-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//grills-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//patio-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//outdoor-power-equiptment-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//lawn-and-garden-equiptment-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//lighting-and-ceiling-fans-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//appliances-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//bath-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//kitchen-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//paint-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//tools-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//beat-the-heat-popcat?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//ceiling-fans-decor-lighting-dp18-326692?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//stainmaster-carper-dp18-326692?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;_abck;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//perfect-paint-color-dp18-326692?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//its-who-we-are-dp18-326692-tabv2?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//free-store-pickup?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//free-shipping?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//lowes-app?wid=40", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes//safety-unites-us-dt?wid=40&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck", END_INLINE
    );

    ns_end_transaction("Xc4d60e8_af11_4882_8069_1167", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("getIdentityid");
    ns_web_url ("getIdentityid",
        "URL=https://www.lowes.com/u/login/getIdentityid",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;akaalb_prod_dual;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck"
    );

    ns_end_transaction("getIdentityid", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("XGZyw_2");
    ns_web_url ("XGZyw_2",
        "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;_abck;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"sensor_data":"7a74G7m23Vrp0o5c9276101.7-1,2,-94,-100,Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36,uaend,12147,20030107,en-US,Gecko,0,0,0,0,400727,9840316,1288,636,1360,663,1288,501,1288,,cpen:0,i1:0,dm:0,cwen:0,non:1,opc:0,fc:0,sc:0,wrc:1,isc:0,vib:1,bat:1,x11:0,x12:1,7556,0.19002319395,814329920158,0,loc:-1,2,-94,-101,do_en,dm_en,t_en-1,2,-94,-105,0,0,0,0,1241,1038,0;-1,2,-94,-102,0,0,0,0,1241,1038,0;-1,2,-94,-108,-1,2,-94,-110,-1,2,-94,-117,-1,2,-94,-111,-1,2,-94,-109,-1,2,-94,-114,-1,2,-94,-103,-1,2,-94,-112,https://www.lowes.com/-1,2,-94,-115,1,32,32,0,0,0,0,1330,0,1628659840316,20,17422,0,0,2903,0,0,1336,0,0,60EED5F365C9E9A4B1813AF1DB1118C9~-1~YAAQbHIsMa7tTJ16AQAA/PmwMwZpNsLIps9TiKQGVdsGVHPf6Vohdpwdz2m8vCUIQPO6vslDX5N/7HvtL03KUUEhCGjCc6qHD6tlfCRlRoK6rxbRnqYGgaR6xXOAzM+vr+zxm0L2S2wi5b1AdeyU9+a0q4vLXFCq0rYwF3Zyukwu+a/bKCJd9doQsciZ3deGrAf8cis04CLXC5kicQSS9xYIEZITKxYv4EuGRowmBhjCApyPQ9wFJ+MGsyYuuWaHl+6ugppFMvytJN5UMc+gRSlMY3ZkGRjT3sN2FV5kfly/kuauXd2m2aAgFHTxy8YPxU9qBVWLzmmrgNTuddVcIHTfjvfCP3HuVK88cBtp6L2KWZBRN3jJI+To8PAcxMHAaH4U1ACftiw=~-1~-1~-1,36930,488,-1820806838,30261689,PiZtE,15831,92,0,-1-1,2,-94,-106,9,1-1,2,-94,-119,163,125,64,50,77,86,1064,54,54,47,50,3005,1682,292,-1,2,-94,-122,0,0,0,0,1,0,0-1,2,-94,-123,-1,2,-94,-124,-1,2,-94,-126,-1,2,-94,-127,00300044040300043020-1,2,-94,-70,-1127778619;-563023189;dis;;true;true;true;300;true;24;24;true;false;-1-1,2,-94,-80,5383-1,2,-94,-116,147604605-1,2,-94,-118,87279-1,2,-94,-129,98f7979f11c93279c5ea09beec21055d155a5331e783f9bfe9e4a1a482531594,1,0,Google Inc.,Google SwiftShader,3c84d65d49fb3b8d03ed2f26bf53630900f726ac7aa573f0a715315b02e21805,27-1,2,-94,-121,;135;13;0"}",
        BODY_END
    );

    ns_end_transaction("XGZyw_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("id_2");
    ns_web_url ("id_2",
        "URL=https://dpm.demdex.net/id?d_visid_ver=5.0.0&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_nsid=0&d_mid=71747673865418841840298191736677393887&d_blob=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&ts=1628659841910",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=demdex",
        INLINE_URLS,
            "URL=https://edge.fullstory.com/s/fs.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("id_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery");
    ns_web_url ("delivery",
        "URL=https://lowes.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"1119e8dee7114416bf6892a34d030705","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/","referringUrl":""}},"id":{"marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"0155C9DBFC519237-3E44A7C1CD1C5A05"}},"execute":{"pageLoad":{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"hp","user.categoryId":"hp","entity.id":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"hp","siteSectionTwo":"hp","siteSectionThree":"hp","siteSectionFour":"hp"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"","zip":"","searchTerm":""}}},"prefetch":{"views":[{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"hp","user.categoryId":"hp","entity.id":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"hp","siteSectionTwo":"hp","siteSectionThree":"hp","siteSectionFour":"hp"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"","zip":"","searchTerm":""}}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("delivery", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_2");
    ns_web_url ("delivery_2",
        "URL=https://lowes.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"079309dca2ff454889f94861691da8e8","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/","referringUrl":""}},"id":{"marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"0155C9DBFC519237-3E44A7C1CD1C5A05"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"hp","user.categoryId":"hp","entity.id":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"hp","siteSectionTwo":"hp","siteSectionThree":"hp","siteSectionFour":"hp"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"","zip":"","searchTerm":""},"index":0,"name":"lwscom_global"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_3");
    ns_web_url ("delivery_3",
        "URL=https://lowes.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"76cf9d09ad21466285770070a4967e89","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/","referringUrl":""}},"id":{"marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"0155C9DBFC519237-3E44A7C1CD1C5A05"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"hp","user.categoryId":"hp","entity.id":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"hp","siteSectionTwo":"hp","siteSectionThree":"hp","siteSectionFour":"hp"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"","zip":"","searchTerm":""},"index":0,"name":"lwscom_hp"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("pixel_4d4d65fc");
    ns_web_url ("pixel_4d4d65fc",
        "URL=https://www.lowes.com/akam/11/pixel_4d4d65fc",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;ak_bmsc;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;akaalb_prod_dual;bm_sv;_abck",
        BODY_BEGIN,
            "ap=true&bt=%7B%22charging%22%3Atrue%2C%22chargingTime%22%3A%22Infinity%22%2C%22dischargingTime%22%3A%22Infinity%22%2C%22level%22%3A0.98%2C%22onchargingchange%22%3Anull%2C%22onchargingtimechange%22%3Anull%2C%22ondischargingtimechange%22%3Anull%2C%22onlevelchange%22%3Anull%7D&fonts=26%2C32%2C33%2C34%2C35%2C37%2C38%2C39%2C43%2C44%2C45%2C65&fh=ecea6b53c4117353b3acac3efd9c18d5abe7acae&timing=%7B%221%22%3A178%2C%222%22%3A860%2C%22profile%22%3A%7B%22bp%22%3A0%2C%22sr%22%3A11%2C%22dp%22%3A0%2C%22lt%22%3A0%2C%22ps%22%3A0%2C%22cv%22%3A137%2C%22fp%22%3A1%2C%22sp%22%3A0%2C%22br%22%3A1%2C%22ieps%22%3A0%2C%22av%22%3A1%2C%22z1%22%3A20%2C%22jsv%22%3A1%2C%22nav%22%3A3%2C%22nap%22%3A1%2C%22crc%22%3A0%2C%22z2%22%3A2%2C%22fonts%22%3A548%7D%2C%22main%22%3A1443%2C%22compute%22%3A178%2C%22send%22%3A1408%7D&bp=&sr=%7B%22inner%22%3A%5B1288%2C501%5D%2C%22outer%22%3A%5B1288%2C501%5D%2C%22screen%22%3A%5B72%2C142%5D%2C%22pageOffset%22%3A%5B0%2C0%5D%2C%22avail%22%3A%5B1288%2C636%5D%2C%22size%22%3A%5B1360%2C663%5D%2C%22client%22%3A%5B1273%2C2644%5D%2C%22colorDepth%22%3A24%2C%22pixelDepth%22%3A24%7D&dp=%7B%22XDomainRequest%22%3A0%2C%22createPopup%22%3A0%2C%22removeEventListener%22%3A1%2C%22globalStorage%22%3A0%2C%22openDatabase%22%3A1%2C%22indexedDB%22%3A1%2C%22attachEvent%22%3A0%2C%22ActiveXObject%22%3A0%2C%22dispatchEvent%22%3A1%2C%22addBehavior%22%3A0%2C%22addEventListener%22%3A1%2C%22detachEvent%22%3A0%2C%22fireEvent%22%3A0%2C%22MutationObserver%22%3A1%2C%22HTMLMenuItemElement%22%3A0%2C%22Int8Array%22%3A1%2C%22postMessage%22%3A1%2C%22querySelector%22%3A1%2C%22getElementsByClassName%22%3A1%2C%22images%22%3A1%2C%22compatMode%22%3A%22CSS1Compat%22%2C%22documentMode%22%3A0%2C%22all%22%3A1%2C%22now%22%3A1%2C%22contextMenu%22%3A0%7D&lt=1628659841239-5&ps=true%2Ctrue&cv=3c410e989ddca88222eee673af9586f59704269a&fp=false&sp=false&br=Chrome&ieps=false&av=false&z=%7B%22a%22%3A1296917517%2C%22b%22%3A1%2C%22c%22%3A0%7D&zh=&jsv=1.7&nav=%7B%22userAgent%22%3A%22Mozilla%2F5.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F90.0.4430.61%20Safari%2F537.36%22%2C%22appName%22%3A%22Netscape%22%2C%22appCodeName%22%3A%22Mozilla%22%2C%22appVersion%22%3A%225.0%20(X11%3B%20Linux%20x86_64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F90.0.4430.61%20Safari%2F537.36%22%2C%22appMinorVersion%22%3A0%2C%22product%22%3A%22Gecko%22%2C%22productSub%22%3A%2220030107%22%2C%22vendor%22%3A%22Google%20Inc.%22%2C%22vendorSub%22%3A%22%22%2C%22buildID%22%3A0%2C%22platform%22%3A%22Linux%20x86_64%22%2C%22oscpu%22%3A0%2C%22hardwareConcurrency%22%3A2%2C%22language%22%3A%22en-US%22%2C%22languages%22%3A%5B%22en-US%22%2C%22en%22%5D%2C%22systemLanguage%22%3A0%2C%22userLanguage%22%3A0%2C%22doNotTrack%22%3Anull%2C%22msDoNotTrack%22%3A0%2C%22cookieEnabled%22%3Atrue%2C%22geolocation%22%3A1%2C%22vibrate%22%3A1%2C%22maxTouchPoints%22%3A0%2C%22webdriver%22%3Afalse%2C%22plugins%22%3A%5B%5D%7D&crc=%7B%22window.chrome%22%3A%7B%22app%22%3A%7B%22isInstalled%22%3Afalse%2C%22InstallState%22%3A%7B%22DISABLED%22%3A%22disabled%22%2C%22INSTALLED%22%3A%22installed%22%2C%22NOT_INSTALLED%22%3A%22not_installed%22%7D%2C%22RunningState%22%3A%7B%22CANNOT_RUN%22%3A%22cannot_run%22%2C%22READY_TO_RUN%22%3A%22ready_to_run%22%2C%22RUNNING%22%3A%22running%22%7D%7D%2C%22runtime%22%3A%7B%22OnInstalledReason%22%3A%7B%22CHROME_UPDATE%22%3A%22chrome_update%22%2C%22INSTALL%22%3A%22install%22%2C%22SHARED_MODULE_UPDATE%22%3A%22shared_module_update%22%2C%22UPDATE%22%3A%22update%22%7D%2C%22OnRestartRequiredReason%22%3A%7B%22APP_UPDATE%22%3A%22app_update%22%2C%22OS_UPDATE%22%3A%22os_update%22%2C%22PERIODIC%22%3A%22periodic%22%7D%2C%22PlatformArch%22%3A%7B%22ARM%22%3A%22arm%22%2C%22ARM64%22%3A%22arm64%22%2C%22MIPS%22%3A%22mips%22%2C%22MIPS64%22%3A%22mips64%22%2C%22X86_32%22%3A%22x86-32%22%2C%22X86_64%22%3A%22x86-64%22%7D%2C%22PlatformNaclArch%22%3A%7B%22ARM%22%3A%22arm%22%2C%22MIPS%22%3A%22mips%22%2C%22MIPS64%22%3A%22mips64%22%2C%22X86_32%22%3A%22x86-32%22%2C%22X86_64%22%3A%22x86-64%22%7D%2C%22PlatformOs%22%3A%7B%22ANDROID%22%3A%22android%22%2C%22CROS%22%3A%22cros%22%2C%22LINUX%22%3A%22linux%22%2C%22MAC%22%3A%22mac%22%2C%22OPENBSD%22%3A%22openbsd%22%2C%22WIN%22%3A%22win%22%7D%2C%22RequestUpdateCheckStatus%22%3A%7B%22NO_UPDATE%22%3A%22no_update%22%2C%22THROTTLED%22%3A%22throttled%22%2C%22UPDATE_AVAILABLE%22%3A%22update_available%22%7D%7D%7D%7D&t=71e2037f0c221db5d17344300a90cf687bc56e1a&u=fb980cce3ac15f998a04f170a3c8a81b&fc=true",
        BODY_END
    );

    ns_end_transaction("pixel_4d4d65fc", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("loc_json");
    ns_web_url ("loc_json",
        "URL=https://www.lowes.com/client-services/loc.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;akaalb_prod_dual;bm_sv;_abck;ak_bmsc"
    );

    ns_end_transaction("loc_json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("v2_0");
    ns_web_url ("v2_0",
        "URL=https://www.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;akaalb_prod_dual;bm_sv;_abck;ak_bmsc"
    );

    ns_end_transaction("v2_0", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("en_us_masthead_json");
    ns_web_url ("en_us_masthead_json",
        "URL=https://www.lowes.com/content/lowes/en_us.masthead.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;akaalb_prod_dual;bm_sv;_abck;ak_bmsc",
        INLINE_URLS,
            "URL=https://securepubads.g.doubleclick.net/gpt/pubads_impl_2021080501.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("en_us_masthead_json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("lws_hp_recommendations_above");
    ns_web_url ("lws_hp_recommendations_above",
        "URL=https://www.lowes.com/recs/v1/location/lws_hp_recommendations_aboveimage_1?channel=desktop&dbid=0c4d60e8-af11-4882-8069-11671292895b&domain=www.lowes.com",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;_abck;ak_bmsc;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("lws_hp_recommendations_above", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("en_us_footer_json");
    ns_web_url ("en_us_footer_json",
        "URL=https://www.lowes.com/content/lowes/en_us.footer.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;_abck;ak_bmsc;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("en_us_footer_json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("lws_hp_personalization_2");
    ns_web_url ("lws_hp_personalization_2",
        "URL=https://www.lowes.com/recs/v1/location/lws_hp_personalization_2?channel=desktop&dbid=0c4d60e8-af11-4882-8069-11671292895b&domain=www.lowes.com",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;_abck;ak_bmsc;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("lws_hp_personalization_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("lws_hp_personalization_1");
    ns_web_url ("lws_hp_personalization_1",
        "URL=https://www.lowes.com/recs/v1/location/lws_hp_personalization_1?channel=desktop&dbid=0c4d60e8-af11-4882-8069-11671292895b&domain=www.lowes.com&pageType=hp&promoCategory=default",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;mbox;_abck;ak_bmsc;akaalb_prod_dual;bm_sv;p13n",
        INLINE_URLS,
            "URL=https://lowescompaniesinc.demdex.net/dest5.html?d_nsid=0#https%3A%2F%2Fwww.lowes.com", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=demdex", END_INLINE,
            "URL=https://cm.everesttech.net/cm/dd?d_uuid=75585395299652916281105585907935456939", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://dpm.demdex.net/ibs:dpid=411&dpuuid=YRNggwAAAL9ULAPw", END_INLINE
    );

    ns_end_transaction("lws_hp_personalization_1", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("lws_hp_recommendations_below");
    ns_web_url ("lws_hp_recommendations_below",
        "URL=https://www.lowes.com/recs/v1/location/lws_hp_recommendations_belowheroimage_1?channel=desktop&dbid=0c4d60e8-af11-4882-8069-11671292895b&domain=www.lowes.com&pageType=hp&promoCategory=default",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;akaalb_prod_dual;p13n;bm_sv;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster"
    );

    ns_end_transaction("lws_hp_recommendations_below", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("experiments");
    ns_web_url ("experiments",
        "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;akaalb_prod_dual;p13n;bm_sv;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster"
    );

    ns_end_transaction("experiments", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("search_2");
    ns_web_url ("search_2",
        "URL=https://www.lowes.com/store/api/search?maxResults=1&searchTerm=18.98,72.83&responseGroup=large",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;akavpau_default;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;akaalb_prod_dual;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;bm_sv"
    );

    ns_end_transaction("search_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xc4d60e8_af11_4882_8069_1167_2");
    ns_web_url ("Xc4d60e8_af11_4882_8069_1167_2",
        "URL=https://www.lowes.com/p13n/audiences/dbid/0c4d60e8-af11-4882-8069-11671292895b",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;akaalb_prod_dual;bm_sv;sn"
    );

    ns_end_transaction("Xc4d60e8_af11_4882_8069_1167_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("autoZipSuccess");
    ns_web_url ("autoZipSuccess",
        "URL=https://www.lowes.com/gauge/link/autoZipSuccess",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;akaalb_prod_dual;bm_sv;_lgsid",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:44.120Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}}}},"track":{},"path":"/link/autoZipSuccess","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("autoZipSuccess", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("page");
    ns_web_url ("page",
        "URL=https://rs.fullstory.com/rec/page",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"OrgId":"Q8RZE","UserId":"","Url":"https://www.lowes.com/","Base":"https://www.lowes.com/","Width":1273,"Height":501,"ScreenWidth":1360,"ScreenHeight":663,"Referrer":"","Preroll":6265,"Doctype":"<!DOCTYPE html>","CompiledVersion":"11e53d809a","CompiledTimestamp":1628185160}",
        BODY_END,
        INLINE_URLS,
            "URL=https://dpm.demdex.net/ibs:dpid=411&dpuuid=YRNggwAAAL9ULAPw", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=demdex", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js?v=3.42&client=gme-loweshomecenters", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("page", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X491c344_6731_43df_81a0_3252");
    ns_web_url ("X491c344_6731_43df_81a0_3252",
        "URL=https://www.lowes.com/baymax/content/6491c344-6731-43df-81a0-32524f03cc4f?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("X491c344_6731_43df_81a0_3252", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xa00580d_ddba_4334_ba46_df27");
    ns_web_url ("Xa00580d_ddba_4334_ba46_df27",
        "URL=https://www.lowes.com/baymax/content/0a00580d-ddba-4334-ba46-df270d927293?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("Xa00580d_ddba_4334_ba46_df27", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("d55f0191_4e9c_41e8_a79a_59ec");
    ns_web_url ("d55f0191_4e9c_41e8_a79a_59ec",
        "URL=https://www.lowes.com/baymax/content/d55f0191-4e9c-41e8-a79a-59ec06dba439?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("d55f0191_4e9c_41e8_a79a_59ec", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X02a512e_74ef_43dc_a3bb_e59a");
    ns_web_url ("X02a512e_74ef_43dc_a3bb_e59a",
        "URL=https://www.lowes.com/baymax/content/202a512e-74ef-43dc-a3bb-e59ab7541cf8?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("X02a512e_74ef_43dc_a3bb_e59a", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e1f4d7bd_9a2b_4611_86d0_d11d");
    ns_web_url ("e1f4d7bd_9a2b_4611_86d0_d11d",
        "URL=https://www.lowes.com/baymax/content/e1f4d7bd-9a2b-4611-86d0-d11dc250b78e?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("e1f4d7bd_9a2b_4611_86d0_d11d", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X62c48ab_cd97_44b4_8c23_2ecb");
    ns_web_url ("X62c48ab_cd97_44b4_8c23_2ecb",
        "URL=https://www.lowes.com/baymax/content/562c48ab-cd97-44b4-8c23-2ecb1d8511af?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("X62c48ab_cd97_44b4_8c23_2ecb", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e794234e_8f18_4f22_9df3_309c");
    ns_web_url ("e794234e_8f18_4f22_9df3_309c",
        "URL=https://www.lowes.com/baymax/content/e794234e-8f18-4f22-9df3-309ca853acf2?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n"
    );

    ns_end_transaction("e794234e_8f18_4f22_9df3_309c", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("config_json");
    ns_web_url ("config_json",
        "URL=https://c.go-mpulse.net/api/config.json?key=W8H5V-D6KN9-TTLED-Y3VKD-B2SQA&d=www.lowes.com&t=5428866&v=1.720.0&sl=0&si=90bf0cf5-ca59-403b-954e-4a9e7f3b0df8-qxntz2&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,History,Angular,Backbone,Ember,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,Early,EventTiming,LOGN&acao=&ak.ai=299019",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("config_json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxImpression");
    ns_web_url ("mboxImpression",
        "URL=https://www.lowes.com/gauge/link/mboxImpression",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;akaalb_prod_dual;bm_sv;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.235Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}}}},"track":{"recommendations":[{"algorithm":"Recommended Searches For You","ids":["000","001","002","003","004","005","006","007","008","009","0010","0011"]}],"name":"recommended_searches_for_you","location":"non_pdp"},"path":"/link/mboxImpression","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.lowescdn.com/node/recs/node-app/1.3.3/images/we_think_youll_like_these_items_lg.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/d1f75814-13ff-4381-ba3a-5e1cb168aef1/08271412.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/77f401dd-390b-4ca2-9b08-a04d954d4c23/05381789.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/ecee2958-025d-4486-91ca-f8866873d032/04437317.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/ae6ee8ea-c0ed-4918-8617-4242cb783fbf/05219394.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/aba1e76d-95a1-4e11-8a4e-687fe19d69b5/14495881.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/92759c30-befe-4309-bf07-f5bf3c5af493/09845953.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/03b190d1-64b1-49f1-8259-090af19947c7/03181804.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/ac25d199-d316-4103-9a96-6d51356d353d/08746238.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/6d4d2c46-f75a-4897-8be8-3f4ffdd2ca28/11150639.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/2aede453-2b9d-4724-903f-18c69f9fe64c/11066253.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/e42304e0-e1ad-482d-866e-9ec65bbadca0/05374591.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/1aceb07a-f997-44e0-9364-1962cd4fa432/08464920.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://cdn.krxd.net/partnerjs/xdi/proxy.3d2100fd7107262ecb55ce6847f01fa5.html#!kxcid=r0usxrln4&kxt=https%3A%2F%2Fwww.lowes.com&kxcl=cdn&kxp=", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/cc2b1ae8-4807-415f-ac9f-03667b076165/10396972.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/026494ff-7aa1-4af1-a52e-b75ff7becb58/41437124.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv", END_INLINE
    );

    ns_end_transaction("mboxImpression", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax");
    ns_web_url ("baymax",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"2","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.853Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}}}},"track":{"baymaxId":"BYM-295:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_2");
    ns_web_url ("baymax_2",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"3","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.867Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-215:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://mobileimages.lowes.com/productimages/1e83d098-e85e-4e02-ace4-da087d8fe01a/04437312.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;bm_sv;fs_uid", END_INLINE
    );

    ns_end_transaction("baymax_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_3");
    ns_web_url ("baymax_3",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"4","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.888Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-311:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_4");
    ns_web_url ("baymax_4",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.917Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-309:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxLoad");
    ns_web_url ("mboxLoad",
        "URL=https://www.lowes.com/gauge/link/mboxLoad",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:46.162Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"}]}},"track":{"mboxes":"lwscom_hp,lwscom_global"},"path":"/link/mboxLoad","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("mboxLoad", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_5");
    ns_web_url ("baymax_5",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:45.960Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-334:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("baymax_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle");
    ns_web_url ("bundle",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=4967064212119552&Seq=1&PageStart=1628659844916&PrevBundleTime=0&LastActivity=2208&IsNewSession=true",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_main_url_1_1628659912472.body",
        BODY_END
    );

    ns_end_transaction("bundle", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_6");
    ns_web_url ("baymax_6",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:46.023Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"}]}},"track":{"baymaxId":"BYM-307:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_6", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_7");
    ns_web_url ("baymax_7",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;akaalb_prod_dual;bm_sv;fs_uid;namOgoo;discover-exp-2;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:46.182Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"90bf0cf5-ca59-403b-954e-4a9e7f3b0df8","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-347:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", END_INLINE
    );

    ns_end_transaction("baymax_7", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("homepage");
    ns_web_url ("homepage",
        "URL=https://www.lowes.com/gauge/pageview/homepage",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;akaalb_prod_dual;RT;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"2","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"1","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:30:47.019Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.4.0","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"4bac4c6c-1bf7-46f4-9f22-c2227d466909","pageName":"Lowe's Home Improvement | Hardware Store","siteID":"desktop","contentPageURL":"home","contentPath":"/content/lowes/en_us/homepage","destinationURL":"https://www.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","globalweb-footer-stable"]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"platform":1,"content":"tesla","framework":1,"helix":true}},"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{"identityID":""}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_hp","lwscom_global"],"tnta":[]},"recommendations":{"offers":{}},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-295","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{},"path":"/pageview/homepage","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC72d2ec0cab6f4408838d32aa7124111c-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=google", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_nid=krux_digital&google_cm&google_hm=T1MwZ3J0cm0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://match.adsrvr.org/track/cmf/generic?ttd_pid=krux&ttd_tpi=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://idsync.rlcdn.com/379708.gif?partner_uid=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://stags.bluekai.com/site/26357?id=OS0grtrm&redir=https://beacon.krxd.net/usermatch.gif?_kuid%3DOS0grtrm%26partner%3Dbluekai%26bk_uuid%3D%24_BK_UUID", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?_kuid=OS0grtrm&partner=bluekai&bk_uuid=Klf4m99999O0OCBC", END_INLINE,
            "URL=https://beacon.krxd.net/optout_check?callback=Krux.ns.lowes.kxjsonp_optOutCheck", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cdn.krxd.net/userdata/get?pub=e30196c7-5053-416c-94a4-c1acfb09b619&technographics=1&callback=Krux.ns.lowes.kxjsonp_userdata", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://dpm.demdex.net/ibs:dpid=66757&&dpuuid=OS0grtrm&redir=https%3A%2F%2Fbeacon.krxd.net%2Fusermatch.gif%3Fpartner%3Dadobe%26partner_uid%3D$%7BDD_UUID%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=demdex;dpm", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?partner=adobe&partner_uid=75585395299652916281105585907935456939", END_INLINE,
            "URL=https://servedby.flashtalking.com/map/?key=ad919e4f211cr5452615&url=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=[%FT_GUID%]", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=4971A57BD143B2", END_INLINE,
            "URL=https://aa.agkn.com/adscores/g.js?sid=9212244187&_kdpid=2111c0af-fc3a-446f-ab07-63aa74fbde8e", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://aa.agkn.com/adscores/g.pixel?sid=9212303288&_kdpid=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://p.rfihub.com/cm?in=1&pub=6919", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?partner_id=rfuel&partner_user_id=1991787310418494494", END_INLINE
    );

    ns_end_transaction("homepage", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_8");
    ns_web_url ("baymax_8",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_9");
    ns_web_url ("baymax_9",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_10");
    ns_web_url ("baymax_10",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("flyouts_json");
    ns_web_url ("flyouts_json",
        "URL=https://www.lowes.com/content/lowes/desktop/en_us/fragments/flyouts.json?v=1628659847031",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;prodNumber;RT;akaalb_prod_dual;bm_sv",
        INLINE_URLS,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=adobe&partner_uid=75585395299652916281105585907935456939", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://assets.revlifter.io/0l554347-da15-447f-9091-6e8941024cdc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC1c11ce2c7e414c61b1d616140e23f97f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("flyouts_json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_2");
    ns_web_url ("index_2",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://beacon.krxd.net/pixel.gif?source=smarttag&fired=report&confid=r0usxrln4&_kpid=e30196c7-5053-416c-94a4-c1acfb09b619&_kcp_s=Lowes&_kcp_d=www.lowes.com&_knifr=2&_kua_kx_tz=300&geo_country=in&geo_region=or&_kua_kx_lang=en-us&_kua_kx_tech_browser_language=en-us&_kua_lowes_profile.user.CurrentStore.zip=99701&_kua_lowes_profile.user.storeNumber=1985&_kua_userType=diy&_kua_kx_whistle=0&_kua_kx_tech_browser=Chrome%209&_kua_kx_tech_manufacturer=Other&_kua_kx_tech_device=Computer&_kua_kx_tech_os=Linux&_kua_kx_geo_country=in&_kua_kx_geo_region=or&_kpa_domain=lowes.com&_kpa_lowes_page.pageType=hp&_kpa_lowes_page.sysEnv=https%3A%2F%2Fwww.lowes.com%2F&_kpa_lowes_page.siteSection=hp&_kpa_lowes_page.siteSectionTwo=hp&_kpa_lowes_page.siteSectionThree=hp&_kpa_lowes_page.siteSectionFour=hp&t_navigation_type=0&t_dns=261&t_tcp=558&t_http_request=-1&t_http_response=72&t_content_ready=2334&t_window_load=9021&t_redirect=0&interchange_ran=false&userdata_was_requested=true&userdata_did_respond=true&store_user_after=wkiiqd06g&_kurl_=https%3A%2F%2Fwww.lowes.com&userdata_user=OS0grtrm%2Cwkiiqd06g&sview=1&kplt0=32022&kplt1=35845&kplt2=31609&kplt3=32302&kplt4=32892&kplt5=32365&kplt6=32880&kplt7=45511&kplt8=46780&kplt9=46851&kplt10=47456&jsonp_requests=https%3A%2F%2Fconsumer.krxd.net%2Fconsent%2Fget%2Fe30196c7-5053-416c-94a4-c1acfb09b619%2C807%2Chttps%3A%2F%2Fbeacon.krxd.net%2Foptout_check%2CNaN%2Chttps%3A%2F%2Fcdn.krxd.net%2Fuserdata%2Fget%2C386", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3f2f71a5d0404175929be845aae79016-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCce86c7e82e1c4d68a5fc6fba2fe4d928-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3a17c74de0ca481cb77cb434c4b501fc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC420597ffe0644954993e7b551468eebb-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://match.adsrvr.org/track/cmb/generic?ttd_pid=krux&ttd_tpi=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=TDID;TDCPM", END_INLINE,
            "URL=https://fdz.flashtalking.com/services/lowes/FBI-2422_segment/?&U1=&U2=&U3=1985&U4=99701&U5=&U6=&U7=&U8=&U9=&U10=&U11=&U14=&U15=hp&U16=hp&U17=hp&U19=&U20=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.impactradius-event.com/A2490986-6272-4119-80d2-3e11fba8509a1.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_nid=krux_digital&google_cm=&google_hm=T1MwZ3J0cm0&google_tc=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=test_cookie", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC61df4c46e1804f5885d1d9487d3249f5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?_kuid=OS0grtrm&partner=bluekai&bk_uuid=Klf4m99999O0OCBC", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCacde2c6c5c9848b490f9b665b2b5750f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=ttd&partner_uid=f13a2308-d19b-4261-8f70-1932ca95e8ae", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?google_gid=CAESEEEQPOvzeuViHUrVYT3CLvc&google_cver=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://d.turn.com/r/dd/id/L2NzaWQvMS9jaWQvMjg0OTE3NDgvdC8y/dpuid/OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC40e28284239f4944be946816c3ebdee8-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/data.gif?_kdpid=2111c0af-fc3a-446f-ab07-63aa74fbde8e&_kua_seg=000&_kua_zip=&_kua_age=&_kua_gender=&_k_adadvisor_key=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=neustar&partner_uid=1kAM48Nq47yowvgBx3scMh8J%2BxD4k3lLPqmISYjX2i0%3D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC17e89cc9a97f49c6bef6e0b05a50ba6b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api.official-deals.co.uk/v1/pixel?c=%7B%22w%22:%220l554347-da15-447f-9091-6e8941024cdc%22,%22u%22:%222264cea9-561b-4391-a2cf-df49e5250cf2%22,%22s%22:%229b790476-7d0d-4673-841d-7cd3601cfc6b%22,%22se%22:1631251848%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC048b00ad01764079b31c72e0fae5fc9e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC2ec50c6f7acb4c3c8388ac4d697347fa-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC39ed03d9a7c54207bfd191d1940d916b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC289cf6dc3ebe40ecb8586a89a037dd31-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=4971A57BD143B2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tpx_cb=twttr.conversion.loadPixels&tw_document_href=https%3A%2F%2Fwww.lowes.com%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://t.co/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tw_document_href=https%3A%2F%2Fwww.lowes.com%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_user_id=OS0grtrm&p_id=10623", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=22554410", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://p.adsymptotic.com/d/px/?_pid=15571&_psign=fbab9de3673937603cddeab03f31b899&_puuid=OS0grtrm&_redirect=https:%2F%2Fbeacon.krxd.net%2Fusermatch.gif%3Fpartner%3Ddrawbridge%26partner_uid%3D%24%7BUUID%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=teadspartner&gdpr=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://sync.crwdcntrl.net/map/c=9164/TP=KRUX/tpid=OS0grtrm?https://beacon.krxd.net/usermatch.gif?partner=lotame&partner_uid=${profile_id}", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://match.rundsp.com/match.gif?partner=krux", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_cm&google_nid=krux_digital&google_hm=T1MwZ3J0cm0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://krux2waycm.netmng.com/cm/", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC59d4420b823e47f1910c7b3645160666-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb493cf1ad0b54f20b2e824242e38a4d2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC54531dfbcb804f1e946f0fe9300aaa29-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.agkn.com/pixel/9458/?che=1363075958360343&mcvsid=71747673865418841840298191736677393887", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=ab", END_INLINE,
            "URL=https://login.dotomi.com/ucm/UCMController?dtm_com=28&dtm_cid=2621&dtm_cmagic=cc7090&dtm_format=5&dtm_fid=101&cli_promo_id=hp&dtmc_loc=https%3A%2F%2Fwww.lowes.com%2F&canonical_url=https%3A%2F%2Fwww.lowes.com%2F", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb3ad2a2bd3ca47dfbdb42be185649f14-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner_id=rfuel&partner_user_id=1991787310418494494", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://track.eyeviewads.com/sync/krux", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fei.pro-market.net/engine?mimetype=img&du=88&csync=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://client.perimeterx.net/PX61WVsvi8/main.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC87fa49f39baf4b19b54be6ddb7c365d5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://sync.teads.tv/sf/sync?partner_uid=OS0grtrm&gdpr=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/625799750871183?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC09e58aea1af04c45a4533887a790c5e4-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?google_gid=CAESEEEQPOvzeuViHUrVYT3CLvc&google_cver=1", END_INLINE,
            "URL=https://sync.crwdcntrl.net/map/ct=y/c=9164/TP=KRUX/tpid=OS0grtrm?https://beacon.krxd.net/usermatch.gif?partner=lotame&partner_uid=${profile_id}", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_cc_cc", END_INLINE,
            "URL=https://1060694.collect.igodigital.com/collect.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC8f22bc63cd284f6184d59595847bd553-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api.official-coupons.com/v1/pixel?r=1&c=%7B%22w%22%3A%220l554347-da15-447f-9091-6e8941024cdc%22%2C%22u%22%3A%222264cea9-561b-4391-a2cf-df49e5250cf2%22%2C%22s%22%3A%229b790476-7d0d-4673-841d-7cd3601cfc6b%22%2C%22se%22%3A1631251848%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC65aa80b0ba084b2c96fc825c1ccec785-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=lotame&partner_uid=b52db760f55f603ec5ba6a6488e41682", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCffc5f8f812ee4f5f9292cf88c51613cc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC270015e98019439f833fc3d6ef7f5877-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-6450450&l=googleDataLayer", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=teadspartner&partner_uid=043548c650a0d2566bd277ed854cb7ed8ebaf981", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("index_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector");
    ns_web_url ("collector",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqCgIHEB4QVhAISRBiagsDEAgDAQQCHhBiagsAEAgEBAEeEGJqAAQLEAgDAAoKHhBiagAFAhAIBAEEHhBiagMKBBAIAwAKCh4QYmoDCgcQCAcCAx4QYmoAAQAQCAMACgoeEGJqAAEDEAgHAgMeEGJqCwIKEAgQBgsEA1MKVAIfVFMEBx8DA1dQH1BUBVMfAQsHAwVUUwQHBAMKEB4QYmoLAgsQCBAGCwQDVgICAh9UUwQHHwMDV1AfUFQFUx8BCwcDBVRTBAcEAwoQHhBiagsLBBAIEFFRAVcGUAZREB4QYmoKCwAQCEZAR1ceEGJqCwUHEAgDCwoKHhBiagMCAwIQCBBTUBAeEGJqCwMCEAgQBgsEAwEBUQIfVFMEBx8DA1dQH1BUBVMfAQsHAwVUUwQHBAMKEB4QYmoLAgUQCBADHAEcAQoHBBAeEGJqCwMKEAgQBgcHCwQDBQEEChAeEGJqCgACEAgQYmoKAwQQHhBiagsBAhAIXEdeXh4QYmoHBxAIEBAeEGJqCgcCEAgCHhBiagoHAxAIAwMGCgAeEGJqAwIHBBAIAwQACgQHCwoGCwYLAh4QYmoDAgEKEAgQBgsHC1ALUAIfVFMEBx8DA1dQH1ALCgUfC1BUBVZXAQYLBQpTEB4QYmoBBQMQCFRTXkFXHhBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHRBPTx5JEEYQCBBiagAQHhBWEAhJEGJqCwQQCBBaRkZCQQgdHUVFRRxeXUVXQRxRXV8dEB4QYmoEARAIEH5bXEdKEkoKBG0EBhAeEGJqAwsDEAgCHhBiagoHAhAIAx4QYmoKBwMQCAMDBgsHHhBiagMCAgoQCAEEAgIeEGJqAwIHBxAIAwQACgQHCwoGCwYHAx4QYmoDAgcEEAgDBAAKBAcLCgYLBgsDHhBiagMCAQoQCBAGCwcLUAtQAh9UUwQHHwMDV1AfUAsKBR8LUFQFVlcBBgsFClMQHhBiagEFAxAIVFNeQVdPT28="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "4959b9b0-fa65-11eb-b987-9bf7de34978a"
, key: "ft"
value: "226"
, key: "seq"
value: "0"
, key: "en"
value: "NTA"
, key: "pc"
value: "6332355972200071"
, key: "rsc"
value: "1"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://connect.facebook.net/signals/config/1128484153951961?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.btttag.com/analytics.rcv?pgNm=Home&trSeg=eCommerce-www.lowes.com&navStart=1628659837995", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.89cd5bf4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://idsync.rlcdn.com/398696.gif?partner_uid=-3554711467509004542", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=rlas3;pxrc", END_INLINE,
            "URL=https://wkxppshj-qx.global.ssl.fastly.net/nrse.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nova.collect.igodigital.com/c2/1060694/track_page_view?payload=%7B%22title%22%3A%22Lowe%27s%20Home%20Improvement%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22referrer%22%3A%22%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%22%22%2C%22known_state%22%3A%22%22%7D%7D%2C%22child_ids%22%3A%5B%221370143%22%5D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2F&rl=&if=false&ts=1628659850313&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659848826&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2F&rl=&if=false&ts=1628659850317&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659848826&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collector", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("index_3");
    ns_web_url ("index_3",
        "URL=https://ct.pinterest.com/user/?tid=2615619520270&pd=%7B%22page%22%3A%22hp%22%7D&cb=1628659850323",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://ct.pinterest.com/v3/?tid=2615619520270&pd=%7B%22page%22%3A%22hp%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22ref%22%3A%22%22%2C%22if%22%3Afalse%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659850327", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-1031919983&l=googleDataLayer&cx=c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC5dd8352b39404066b56280cc4aa704de-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("LLODOWS854_json");
    ns_web_url ("LLODOWS854_json",
        "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LLODOWS854.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://colres.sitelabweb.com/referrer", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://colrep.sitelabweb.com/rp/?d=qpyHEzJ~v2a2XVd_mvev1FPGZka-kjwHNA_T37J340iUM3ZyqhcH11P9MN7j~nY6N1tE0HOTaDJ2C0iYBmVmNhc_N9UfV~PXgsZX2mtZBEZ2BLMjKzsIQCYTSpMHdmfEZIATwyOFkvuYl5bW7LZ2XssTZxnWvnYpd9WQ9WE1xUOGf0aZZ3dj37Mjr3hTZlnjInMml5MyN~ATY3Mms2eEkOOTD6OVJmxXECeWRtapysadUECjnvMFfydzhrNTHxMI3lfkBPmWNoeWVyPTgM8lS3NFwldVBVdHE2ZmPlrltspCljR1VzQ84F8inzMFtLj0RgUCX8QEFyfHxsm2lXM1CHbhN7Ny2mMmNDs2JDcWXxM0J5fD4zXjhnMHBuQvE17jVUYZkhuYk3NkaDMFOuf~YpmGXkRqi0bh5FMWTvPWMmvIV7_D36MKJ3fHI8ZjSsYMN3byRzJTZlM5Q1fHMLPDHEM27xgDZ0mWhwZXZ1QvQNJT-mMpVkqHQK_GP6MV4lr~g4_WljMHZ1PPc2OHrAMVkouYV4QWkCdZyzcUNEVTa1JmKGgFdL6mFwd5gzcYNDcSX8R~K0sXd-aWQYaqOJeyZ1J3kmZGDmpHxH_SbvYk-9f~FoZDliN1OhQSR-8Gr3OZVie~N0N2IxM2B0fnVkZjWYYMFzSeMDKTj2MWjzpER2ZzUyN-XirkQ0jjeTZmKkQPJ1JTryLmYxokA4Z28EanBziYNoo3eabM5lPvMF7Wn1NWQ2dpEK_GPCZ-J5rnI3Y2_kYpVybPQEKWY3MVfydkEMNjjEN--3fEIoZ0eBQGVyP9MDKTj2MWjzpER2ZzUyN-XirkQ0jjeTZmKkQPJ1JTryLmYxokA3NjP7N-WxhUA3ZjhnJ4yzSiREPWnncqY9v2JL_Sb4c3J9fDZ-kXTgc5R9MzJ5ATYa&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCbd6afff198e94e748b5e2fd73f28d207-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC07fa4ad32f7b406b8c9c37863504f784-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("LLODOWS854_json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("analytics_rcv");
    ns_web_url ("analytics_rcv",
        "URL=https://d.btttag.com/analytics.rcv?pgNm=Home&trSeg=eCommerce-www.lowes.com&navStart=1628659837995",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "eyJ0aGlzVVJMIjoiaHR0cHM6Ly93d3cubG93ZXMuY29tLyIsInBhZ2VOYW1lIjoiSG9tZSIsIm5zdCI6IjE2Mjg2NTk4Mzc5OTUiLCJ1bmxvYWRFdmVudFN0YXJ0IjoiMCIsInJlZGlyZWN0U3RhcnQiOiIwIiwiY19jb3VudCI6IjAiLCJjb19jb3VudCI6IjAiLCJ0b3RSRCI6IjAiLCJmZXRjaFN0YXJ0IjoiMTYyODY1OTgzODAzMCIsImRvbWFpbkxvb2t1cFN0YXJ0IjoiMTYyODY1OTgzODA4OSIsImNvbm5lY3RTdGFydCI6IjE2Mjg2NTk4MzgzNTAiLCJzZWN1cmVDb25uZWN0aW9uU3RhcnQiOiIxNjI4NjU5ODM4NTI3IiwicmVxdWVzdFN0YXJ0IjoiMTYyODY1OTgzODkxMSIsInJlc3BvbnNlU3RhcnQiOiIxNjI4NjU5ODM5Nzg0IiwiUkVFIjoiMTYyODY1OTgzOTg1NiIsIkJQVCI6IjcyIiwiZG9tTG9hZGluZyI6IjE2Mjg2NTk4Mzk4MDUiLCJkb21JbnRlcmFjdGl2ZSI6IjE2Mjg2NTk4NDAzMjkiLCJkb21Db250ZW50TG9hZGVkU3RhcnQiOiIxNjI4NjU5ODQzMTgwIiwiZG9tQ29udGVudExvYWRlZEVuZCI6IjE2Mjg2NTk4NDMxODYiLCJsb2FkRXZlbnRTdGFydCI6IjE2Mjg2NTk4NDcwMTYiLCJuYXZpZ2F0aW9uVHlwZSI6IjEiLCJyZWRpcmVjdENvdW50IjoiMCIsInBhZ2VUeXBlIjoiR0NQIEhvbWVwYWdlIEhlbGl4IC0gVGVzbGEgLSBBIiwicGFnZVZhbHVlIjoiMCIsInBnVG0iOiI5MDIxIiwiZG5zIjoiMjYxIiwidGNwIjoiNTU4IiwiZG9tIjoiNzIxMCIsImZCeXRlIjoiODczIiwic3NsIjoiMzg0IiwiZmlyc3RQYWludCI6IjIxNzYiLCJmQ1BudCI6IjIxNzYiLCJmbXAiOiIwIiwidHRpIjoiOTc4NyIsImx0X3R0aSI6IjAiLCJmcHNfdHRpIjoiOTc4NyIsImZwcyI6IjAiLCJGSURzIjoiMCIsIkZJRGQiOiIwIiwiTENQIjoiMzQ3MyIsIkNMU2UiOiI2MTY5IiwiQ0xTIjoiMC4xMjYxMTE1MzQ3Mjk2OTE0IiwiVEJUIjoiMTM2NSIsIlNjcm5IIjoiNjYzIiwiU2NyblciOiIxMzYwIiwicFdTeiI6IjQyODgxMSIsInBTeiI6IjE2NTgyODUiLCJJTUFHRV9TSVpFIjoiMCIsIkpTX1NJWkUiOiIyOTc0ODEiLCJlbGVtZW50Q291bnQiOiIxNzAiLCJjYXJ0VmFsdWUiOiIwIiwiT051bUJyIjoiMCIsIm9yZGVyVE5EIjoiMCIsImVUIjoiNSIsInNpdGVJRCI6Imxvd2VzMTU4NDF6IiwidHhuTmFtZSI6ImVDb21tZXJjZS13d3cubG93ZXMuY29tIiwiY2FtcGFpZ24iOiIiLCJBQiI6IkRlZmF1bHQiLCJEQ1RSIjoiZWFzdCIsInRvcCI6Ii0xNjI4NjU5ODQ3MDgyIiwiYnYiOiIwIiwiYnZ6biI6IkNocm9tZS05MCIsInR1bCI6IjAiLCJFVU9TIjoiTGludXgiLCJjdXJyZW5jeUNvZGUiOiIiLCJzSUQiOiIzMTcyMzU2NzY1ODE2NTEzNjkiLCJnSUQiOiIzMTcyMzU2NzY1ODE2NTEzNjkiLCJTSGkiOiI2NjMiLCJTV2kiOiIxMzYwIiwiQ1NJRCI6IjAiLCJDVjEiOiIwYzRkNjBlOC1hZjExLTQ4ODItODA2OS0xMTY3MTI5Mjg5NWIiLCJDVjIiOiIwIiwiQ1YzIjoiMCIsIkNWNCI6IjAiLCJDVjUiOiIwIiwiQ1Y2Ijoic3RhYmxlIiwiQ1Y3IjoiQ29va2llIFByZXNlbnQiLCJDVjgiOiJaaXBwZWQiLCJDVjkiOiJ1bmRlZmluZWQiLCJDVjEwIjoiTmFtb2dvbyBPbiIsIkNWMTEiOiIwIiwiQ1YxMiI6IjAiLCJDVjEzIjoiMCIsIkNWMTQiOiIwIiwiQ1YxNSI6IjAiLCJDTjEiOiIwIiwiQ04yIjoiMCIsIkNOMyI6IjAiLCJDTjQiOiIwIiwiQ041IjoiMCIsIkNONiI6IjAiLCJDTjciOiIwIiwiQ044IjoiMCIsIkNOOSI6IjAiLCJDTjEwIjoiMCIsIkNOMTEiOiIwIiwiQ04xMiI6IjAiLCJDTjEzIjoiMCIsIkNOMTQiOiIwIiwiQ04xNSI6IjAiLCJDTjE2IjoiMCIsIkNOMTciOiIwIiwiQ04xOCI6IjAiLCJDTjE5IjoiMCIsIkNOMjAiOiIwIiwid2NkIjoiMCIsIkxUTSI6IjE2Mjg2NTk4NDM4NjMiLCJXQ0R0dCI6ImMiLCJOVlNUUiI6IjAiLCJSViI6IjAiLCJjb2xsZWN0QXQiOiIxMDAiLCJDbXBTIjoiRGlyZWN0IiwiQ21wTSI6Ik5vbmUiLCJDbXBOIjoiIiwiUmVmVVJMIjoiIn0=",
        BODY_END
    );

    ns_end_transaction("analytics_rcv", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("XGZyw_3");
    ns_web_url ("XGZyw_3",
        "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;prodNumber;RT;akaalb_prod_dual;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp",
        BODY_BEGIN,
            "{"sensor_data":"7a74G7m23Vrp0o5c9276101.7-1,2,-94,-100,Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36,uaend,12147,20030107,en-US,Gecko,0,0,0,0,400727,9840316,1288,636,1360,663,1288,501,1288,,cpen:0,i1:0,dm:0,cwen:0,non:1,opc:0,fc:0,sc:0,wrc:1,isc:0,vib:1,bat:1,x11:0,x12:1,7556,0.739875510369,814329920158,0,loc:-1,2,-94,-101,do_en,dm_en,t_en-1,2,-94,-105,0,0,0,0,1241,1038,0;-1,2,-94,-102,0,0,0,0,1241,1038,0;0,-1,0,0,1125,520,0;0,-1,0,0,1355,339,0;-1,2,-94,-108,-1,2,-94,-110,0,1,4283,479,147;1,1,4488,383,158;2,1,4737,326,139;3,1,4888,261,133;4,1,4915,257,133;5,1,5264,250,117;6,1,5397,371,137;7,1,5527,353,167;8,1,5654,249,133;9,1,5822,176,139;10,1,5938,176,140;11,1,6251,188,144;12,1,6322,368,168;13,1,6350,405,169;14,1,6375,420,169;15,1,6384,427,170;16,1,6400,428,170;17,1,6418,429,171;18,1,6434,430,171;19,1,6450,430,173;20,1,6467,424,177;21,1,6484,404,189;22,1,6503,326,227;23,1,6517,283,245;24,1,6534,255,255;25,1,6552,232,262;26,1,6568,221,265;27,1,6587,213,266;28,1,6601,209,266;29,1,6617,207,266;30,1,6634,205,264;31,1,6651,203,262;32,1,6667,198,257;33,1,6685,193,253;34,1,6812,139,207;35,1,6917,120,176;36,1,6928,118,174;37,1,7018,104,159;38,1,7026,103,158;39,1,7044,101,157;40,1,7050,101,156;41,1,7066,100,154;42,1,7084,98,152;43,1,7145,96,149;44,1,7157,96,148;45,1,7200,97,148;46,1,7218,98,148;47,1,7234,102,148;48,1,7251,108,147;49,1,7270,136,144;50,1,7301,174,142;51,1,7322,186,142;52,1,7357,258,148;53,1,7384,340,150;54,1,7463,502,195;55,1,7477,503,199;56,1,7500,503,203;57,1,7517,500,212;58,1,7533,497,218;59,1,7553,487,230;60,1,7568,477,237;61,1,7584,462,248;62,1,7603,444,258;63,1,7618,413,269;64,1,7636,369,280;65,1,7654,295,298;66,1,7668,286,300;67,1,7685,269,303;68,1,7703,261,303;69,1,7718,256,303;70,1,7734,255,303;71,1,7751,253,301;72,1,7767,253,300;73,1,7783,252,298;74,1,7802,250,295;75,1,7820,249,292;76,1,7834,248,290;77,1,7852,247,289;78,1,7868,247,286;79,1,7884,250,281;80,1,7932,465,231;81,1,7936,523,225;82,1,7950,630,215;83,1,7967,745,205;84,1,7984,905,192;85,1,8002,977,186;86,1,8017,1017,184;87,1,8035,1050,181;88,1,8051,1075,181;89,1,8067,1093,181;90,1,8084,1100,181;91,1,8101,1105,182;92,1,8118,1106,182;93,1,8159,1101,189;94,1,8169,1089,196;95,1,8186,948,252;96,1,8201,898,262;97,1,8226,758,284;98,1,8275,614,298;99,1,8306,597,294;163,3,10644,781,263,-1;-1,2,-94,-117,-1,2,-94,-111,-1,2,-94,-109,-1,2,-94,-114,-1,2,-94,-103,-1,2,-94,-112,https://www.lowes.com/-1,2,-94,-115,1,788204,32,0,0,0,788172,10644,0,1628659840316,20,17422,0,164,2903,1,0,10648,721133,0,60EED5F365C9E9A4B1813AF1DB1118C9~-1~YAAQbHIsMcftTJ16AQAAxvywMwZHmMsgpj2ZJ9P4Dv+aFA4pq4h/g1DsktEHcMwpWfMQb1C+dDVxIlmzqkHIT4Q025NO1eR65CCKfpP4ZEhhNNwB6fDDZdN/5TeI8xdocC0qM+0Xa7kvso841d6IIPMxRId+/Lep+5ERxs8mccru/PW5lJF8KlUnT+cohBisikseW7OjEfZhkYVfpxQaKEfXEV1gcyOZZv2pLNDhJks53MddXRQqRrM51h3efDuzZ5Zpx7dVpRyfX3HpHVqxSvrSR+9oClXeoyxVXDrAJ4WadeQbCg07lwg5oyaxbrPa7p8xYADTiqL10nkWVnilH3GkMyJp9x3R+Wo5wUUuBAFZZlE4+AS3btiNaoUb4zIPRWfM1yHvOkk=~-1~-1~-1,36919,488,-1820806838,30261689,PiZtE,21372,97,0,-1-1,2,-94,-106,1,2-1,2,-94,-119,54,56,1634,30,48,57,13,11,14,10,10,1310,4563,259,-1,2,-94,-122,0,0,0,0,1,0,0-1,2,-94,-123,-1,2,-94,-124,-1,2,-94,-126,-1,2,-94,-127,00300044040300043020-1,2,-94,-70,-1127778619;-563023189;dis;;true;true;true;300;true;24;24;true;false;-1-1,2,-94,-80,5383-1,2,-94,-116,147604605-1,2,-94,-118,182130-1,2,-94,-129,98f7979f11c93279c5ea09beec21055d155a5331e783f9bfe9e4a1a482531594,1,0,Google Inc.,Google SwiftShader,3c84d65d49fb3b8d03ed2f26bf53630900f726ac7aa573f0a715315b02e21805,27-1,2,-94,-121,;9;13;0"}",
        BODY_END
    );

    ns_end_transaction("XGZyw_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("beacon");
    ns_web_url ("beacon",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector/beacon",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("beacon", NS_AUTO_STATUS);
    ns_page_think_time(0.528);

    //Page Auto split for Link 'image' Clicked by User
    ns_start_transaction("search_3");
    ns_web_url ("search_3",
        "URL=https://www.lowes.com/search?searchTerm=air%20conditioner",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;_abck;ak_bmsc;mbox;mboxEdgeCluster;akavpau_default;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;akaalb_prod_dual;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;RT",
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/", "METHOD=POST", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Origin:https://www.lowes.com", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr",
            BODY_BEGIN,
            "id=625799750871183&ev=Microdata&dl=https%3A%2F%2Fwww.lowes.com%2F&rl=&if=false&ts=1628659851112&cd%5BDataLayer%5D=%5B%5D&cd%5BMeta%5D=%7B%22title%22%3A%22Lowe%27s+Home+Improvement%22%2C%22meta%3Adescription%22%3A%22Shop+tools%2C+appliances%2C+building+supplies%2C+carpet%2C+bathroom%2C+lighting+and+more.+Pros+can+take+advantage+of+Pro+offers%2C+credit+and+business+resources.%22%7D&cd%5BOpenGraph%5D=%7B%22og%3Atitle%22%3A%22Lowe%27s+Home+Improvement%22%2C%22og%3Atype%22%3A%22Home+Page%22%2C%22og%3Aurl%22%3A%22https%3A%2F%2Fwww.lowes.com%22%2C%22og%3Asite_name%22%3A%22Lowe%27s%22%2C%22og%3Aimage%22%3A%22http%3A%2F%2Flda.lowes.com%2Fis%2Fimage%2FLowes%2FOG-HOMEPAGE%3Fscl%3D1%22%2C%22og%3Adescription%22%3A%22Celebrate+Lowe%E2%80%99s+first+SpringFest+event+%E2%80%93+a+festival+of+fun+and+savings+for+your+home+and+garden.+Get+deals+on+mulch%2C+soil%2C+power+equipment%2C+and+more.%22%7D&cd%5BSchema.org%5D=%5B%5D&cd%5BJSON-LD%5D=%5B%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%2F%22%2C%22%40type%22%3A%22Organization%22%2C%22name%22%3A%22Lowe%27s%22%2C%22alternateName%22%3A%22Lowe%27s+Home+Center%22%2C%22LegalName%22%3A%22Lowe%27s+Companies%2C+Inc%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22logo%22%3A%22https%3A%2F%2Fwww.lowescdn.com%2Fimages%2Fui%2FLowesLogo_DT.svg%22%2C%22contactPoint%22%3A%7B%22%40type%22%3A%22ContactPoint%22%2C%22contactType%22%3A%22customer+support%22%2C%22telephone%22%3A%221-800-445-6937%22%2C%22email%22%3A%22%22%7D%2C%22sameAs%22%3A%5B%22https%3A%2F%2Fwww.facebook.com%2Flowes%22%2C%22https%3A%2F%2Ftwitter.com%2Flowes%22%2C%22https%3A%2F%2Fwww.pinterest.com%2Flowes%2F%22%2C%22https%3A%2F%2Finstagram.com%2Floweshomeimprovement%22%2C%22https%3A%2F%2Fwww.youtube.com%2Fuser%2FLowes%22%5D%7D%2C%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%22%2C%22%40type%22%3A%22WebSite%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22potentialAction%22%3A%7B%22%40type%22%3A%22SearchAction%22%2C%22target%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3D%7BsearchTerm%7D%22%2C%22query-input%22%3A%22required+name%3DsearchTerm%22%7D%7D%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659848826&coo=false&es=automatic&tm=3&rqm=formPOST",
        BODY_END,
             END_INLINE
    );

    ns_end_transaction("search_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_4");
    ns_web_url ("index_4",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://nebula-cdn.kampyle.com/wu/392339/onsite/embed.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC75823becabb5495994ee06e85292e064-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googleadservices.com/pagead/conversion_async.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_4", NS_AUTO_STATUS);
    ns_page_think_time(0.817);

    ns_start_transaction("search");
    ns_web_url ("search",
        "URL=https://6450450.fls.doubleclick.net/activityi;src=6450450;type=lowes002;cat=unive0;ord=1;num=1206992367520;gtm=2od891;auiddc=1926396264.1628659852;~oref=https%3A%2F%2Fwww.lowes.com%2F?",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-Dest:iframe",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=IDE",
        INLINE_URLS,
            "URL=https://bat.bing.com/p/action/5668750.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=2c3d014f-be5f-46ec-933d-b0321749b662&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=1&pi=0&lg=en-US&sw=1360&sh=663&sc=24&tl=Lowe%27s%20Home%20Improvement&p=https%3A%2F%2Fwww.lowes.com%2F&r=&lt=9087&evt=pageLoad&msclkid=N&sv=1&rn=668729", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=2c3d014f-be5f-46ec-933d-b0321749b662&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&pagetype=home&ea=event_name&en=Y&evt=custom&msclkid=N&rn=551905", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE
    );

    ns_end_transaction("search", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_5");
    ns_web_url ("index_5",
        "URL=https://ct.pinterest.com/md/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/index_5_main_url_1_1628659912482.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://lptag.liveperson.net/lptag/api/account/22554410/configuration/applications/taglets/.jsonp?v=2.0&df=undefined&b=undefined", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_2");
    ns_web_url ("bundle_2",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=4967064212119552&Seq=2&PageStart=1628659844916&PrevBundleTime=1628659847624&LastActivity=438&IsNewSession=true",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_2_main_url_1_1628659912493.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/common.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/util.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCa737427ceb15428aa0cc62aee1513675-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/us/wu/392339/onsite/generic1627562585749.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://6450450.fls.doubleclick.net/activityi;dc_pre=COvo1N-eqPICFUYkaAodVYAFaA;src=6450450;type=lowes002;cat=unive0;ord=1;num=1206992367520;gtm=2od891;auiddc=1926396264.1628659852;~oref=https%3A%2F%2Fwww.lowes.com%2F?", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659852498&cv=9&fst=1628659852498&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=2&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2F&tiba=Lowe%27s%20Home%20Improvement&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659852502&cv=9&fst=1628659852502&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=2&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dpage_view%3Becomm_pagetype%3Dhp&frm=0&url=https%3A%2F%2Fwww.lowes.com%2F&tiba=Lowe%27s%20Home%20Improvement&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fwww.lowes.com%2F&2sgme-loweshomecenters&callback=_xdc_._2a0r5n&client=gme-loweshomecenters&token=50141", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data=eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTM2MHg2NjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoWDExOyBMaW51eCB4ODZfNjQpIEFwcGxlV2ViS2l0LzUzNy4zNiAoS0hUTUwsIGxpa2UgR2Vja28pIENocm9tZS85MC4wLjQ0MzAuNjEgU2FmYXJpLzUzNy4zNiIsInNlc3Npb25fcGxhdGZvcm0iOiAiTGludXggeDg2XzY0IiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2Mjg2NTk4NTI1MzEiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAtNSwidXNlcl9pZCI6ICIxN2IzM2IxMjRmMDVjZS0wY2ZmYzFiZTQyNmQ2Zi0xNjJjMWEwYy1kYzIzMC0xN2IzM2IxMjRmMTcyYyIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogMzkyMzM3LCJ1cmwiOiAiaHR0cHM6Ly93d3cubG93ZXMuY29tLyIsIndlYnNpdGVJZCI6IDM5MjMzOSwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiMDYwNi0yYTkyLWJjNzUtZTEwYi1lYTgzLWEzMjUtYjE5Ny0yYzMyIiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIjE2Mjg2NTk4NTIzNzYiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiIiwiU1VCTUlUVEVEX0RBVEUiOiAiIn0sImNvb2tpZV9zaXplIjogMzY1Niwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzkuMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzkuMCIsImhpc3RvcnlfbGVuZ3RoIjogMiwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyODY1OTg1MjM4MiwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X");
    ns_web_url ("X",
        "URL=https://bat.bing.com/actionp/0?ti=5668750&Ver=2&mid=2c3d014f-be5f-46ec-933d-b0321749b662&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&evt=pageHide",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID;MR",
        INLINE_URLS,
            "URL=https://lowes15841z.btttag.com/btt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=collection;enabled;sessionID;lowes15841z-txnName;lowes15841z-BrowserVersion", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/p13n/V2.4.0-B24/clientlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes/estar_detail?$alpha$$&wid=20", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;cd_user_id;RT", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/91e2e7e9-c032-44b8-9cc3-fc79cb5a00cb/12061069.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;cd_user_id;RT", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;cd_user_id;RT", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/1a911eb2-3f04-4460-9a62-1cce440f5a33/41584405.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;cd_user_id;RT", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/9c335c7f-8784-4aab-ad30-2d160d9cfd3d/17585174.jpg?size=xl", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;cd_user_id;RT", END_INLINE,
            "URL=https://consent.trustarc.com/notice?domain=lowes.com&c=teconsent&pn=1&text=true&pcookie&gtm=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/lcomp.62396eb8.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/react.2dd32f7d.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/select-ui.1ed193a1.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/vendors.4c0fb2fb.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/client.4e682382.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/jquery-common.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/recs/micro-app//1.4.29/recommendations.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/launch-a30f5aebfe36.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/tag/js/gpt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/exp-target/2.0.11/exp.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/rnr-pres/3.7.4/review.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/atc/21.24.7/client.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/cart/gcp/1.43.0/js/conduit-purchase.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/buynow/21.27.4/buynow.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/mnppixelfiringlibrary/V1.01.19-B12/mnppixellibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;akaalb_prod_dual;RT", END_INLINE
    );

    ns_end_transaction("X", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("config_json_2");
    ns_web_url ("config_json_2",
        "URL=https://c.go-mpulse.net/api/config.json?key=W8H5V-D6KN9-TTLED-Y3VKD-B2SQA&d=www.lowes.com&t=5428866&v=1.720.0&sl=1&si=bde4fb69-2075-4aef-b0c6-45081221dd74-qxntz2&bcn=%2F%2F6852bd0e.akstat.io%2F&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,History,Angular,Backbone,Ember,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,Early,EventTiming,LOGN&acao=&ak.ai=299019",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/839.172e93ec.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/lazyComps.0b397e4d.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/willItFit.bf48cecb.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/partsfinder.95cdc7d4.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/CustomCatalog.8f61708a.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/search/helix/1.91.0/CustomItemList.7e4ee32f.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Purpose:prefetch", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/gauge/1.4.0/js/index.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/googleadmanagerlibrary/V1.01.38-B11/gamlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("config_json_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("v2_0_2");
    ns_web_url ("v2_0_2",
        "URL=https://www.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;bm_sv;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;akaalb_prod_dual;RT"
    );

    ns_end_transaction("v2_0_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xc4d60e8_af11_4882_8069_1167_3");
    ns_web_url ("Xc4d60e8_af11_4882_8069_1167_3",
        "URL=https://www.lowes.com/p13n/audiences/dbid/0c4d60e8-af11-4882-8069-11671292895b",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv",
        INLINE_URLS,
            "URL=https://edge.fullstory.com/s/fs.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Xc4d60e8_af11_4882_8069_1167_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_4");
    ns_web_url ("delivery_4",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"d76b33d0175d4d4496ddd76f2906972f","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/search?searchTerm=air%20conditioner","referringUrl":"https://www.lowes.com/"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"3EB1924B04BF79C3-4D1973372C89AC44"}},"execute":{"pageLoad":{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"air_conditioner","user.categoryId":"air_conditioner","entity.id":"1001307556,5000143961,5001459511,5000151929,5000087109,5001462705,5000143957,5000143949,5000143951,1000760764,1000773230,5001894855,5000151923,1001847744,5000151925,1001861860,1001861844,5000151927,5001055817,5000151921,1001861828,5000087107,1000380519,5001598713","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"air_conditioner","siteSectionTwo":"","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":"air%20conditioner"}}},"prefetch":{"views":[{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"air_conditioner","user.categoryId":"air_conditioner","entity.id":"1001307556,5000143961,5001459511,5000151929,5000087109,5001462705,5000143957,5000143949,5000143951,1000760764,1000773230,5001894855,5000151923,1001847744,5000151925,1001861860,1001861844,5000151927,5001055817,5000151921,1001861828,5000087107,1000380519,5001598713","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"air_conditioner","siteSectionTwo":"","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":"air%20conditioner"}}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/gpt/pubads_impl_2021080501.js?31062218", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE
    );

    ns_end_transaction("delivery_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("ppub_config");
    ns_web_url ("ppub_config",
        "URL=https://securepubads.g.doubleclick.net/pagead/ppub_config?ippd=www.lowes.com",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("ppub_config", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("experiments_2");
    ns_web_url ("experiments_2",
        "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mbox;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("experiments_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_5");
    ns_web_url ("delivery_5",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"cee25f23b1304d63a63010130ab61657","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/search?searchTerm=air%20conditioner","referringUrl":"https://www.lowes.com/"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"3EB1924B04BF79C3-4D1973372C89AC44"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"air_conditioner","user.categoryId":"air_conditioner","entity.id":"1001307556,5000143961,5001459511,5000151929,5000087109,5001462705,5000143957,5000143949,5000143951,1000760764,1000773230,5001894855,5000151923,1001847744,5000151925,1001861860,1001861844,5000151927,5001055817,5000151921,1001861828,5000087107,1000380519,5001598713","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"air_conditioner","siteSectionTwo":"","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":"air%20conditioner"},"index":0,"name":"lwscom_global"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_6");
    ns_web_url ("delivery_6",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"3d0c16bdb2bc4b288ab5c97fe3f08adf","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/search?searchTerm=air%20conditioner","referringUrl":"https://www.lowes.com/"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"3EB1924B04BF79C3-4D1973372C89AC44"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"air_conditioner","user.categoryId":"air_conditioner","entity.id":"1001307556,5000143961,5001459511,5000151929,5000087109,5001462705,5000143957,5000143949,5000143951,1000760764,1000773230,5001894855,5000151923,1001847744,5000151925,1001861860,1001861844,5000151927,5001055817,5000151921,1001861828,5000087107,1000380519,5001598713","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"air_conditioner","siteSectionTwo":"","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":"air%20conditioner"},"index":0,"name":"lwscom_psp"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X491c344_6731_43df_81a0_3252_2");
    ns_web_url ("X491c344_6731_43df_81a0_3252_2",
        "URL=https://www.lowes.com/baymax/content/6491c344-6731-43df-81a0-32524f03cc4f?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("X491c344_6731_43df_81a0_3252_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xa14551a_6e0c_416b_b93e_717d");
    ns_web_url ("Xa14551a_6e0c_416b_b93e_717d",
        "URL=https://www.lowes.com/baymax/content/9a14551a-6e0c-416b-b93e-717da949acf4?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("Xa14551a_6e0c_416b_b93e_717d", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X5b1ef6b_2319_4645_9afd_39eb");
    ns_web_url ("X5b1ef6b_2319_4645_9afd_39eb",
        "URL=https://www.lowes.com/baymax/content/95b1ef6b-2319-4645-9afd-39ebb4257636?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("X5b1ef6b_2319_4645_9afd_39eb", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("d55f0191_4e9c_41e8_a79a_59ec_2");
    ns_web_url ("d55f0191_4e9c_41e8_a79a_59ec_2",
        "URL=https://www.lowes.com/baymax/content/d55f0191-4e9c-41e8-a79a-59ec06dba439?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("d55f0191_4e9c_41e8_a79a_59ec_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X02a512e_74ef_43dc_a3bb_e59a_2");
    ns_web_url ("X02a512e_74ef_43dc_a3bb_e59a_2",
        "URL=https://www.lowes.com/baymax/content/202a512e-74ef-43dc-a3bb-e59ab7541cf8?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("X02a512e_74ef_43dc_a3bb_e59a_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X62c48ab_cd97_44b4_8c23_2ecb_2");
    ns_web_url ("X62c48ab_cd97_44b4_8c23_2ecb_2",
        "URL=https://www.lowes.com/baymax/content/562c48ab-cd97-44b4-8c23-2ecb1d8511af?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("X62c48ab_cd97_44b4_8c23_2ecb_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xf1042f1_a13d_4cc9_9ef8_446e");
    ns_web_url ("Xf1042f1_a13d_4cc9_9ef8_446e",
        "URL=https://www.lowes.com/baymax/content/7f1042f1-a13d-4cc9-9ef8-446ef2789d02?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;prodNumber;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;akaalb_prod_dual;bm_sv;mbox"
    );

    ns_end_transaction("Xf1042f1_a13d_4cc9_9ef8_446e", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_3");
    ns_web_url ("bundle_3",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=4967064212119552&Seq=2&PageStart=1628659844916&PrevBundleTime=1628659847624&IsNewSession=true",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_3_main_url_1_1628659912510.body",
        BODY_END
    );

    ns_end_transaction("bundle_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("page_2");
    ns_web_url ("page_2",
        "URL=https://rs.fullstory.com/rec/page",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"OrgId":"Q8RZE","UserId":"4938477446668288","Url":"https://www.lowes.com/search?searchTerm=(blocked)","Base":"https://www.lowes.com/search?searchTerm=(blocked)","Width":1273,"Height":501,"ScreenWidth":1360,"ScreenHeight":663,"Referrer":"https://www.lowes.com/","Preroll":10058,"Doctype":"<!DOCTYPE html>","CompiledVersion":"11e53d809a","CompiledTimestamp":1628185160}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("page_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_11");
    ns_web_url ("baymax_11",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_11_url_0_1_1628659912512.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://adservice.google.com/adsid/integrator.js?domain=www.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/gampad/ads?gdfp_req=1&pvsid=2399671777886998&correlator=461995813412465&output=ldjh&impl=fifs&eid=31060439%2C31061423%2C31062142%2C31062188%2C31062210%2C31062218%2C21068111%2C31061425%2C20211866&vrg=2021080501&ptt=17&sc=1&sfv=1-0-38&ecs=20210811&iu_parts=21708044344%2Chome%2Csearch&enc_prev_ius=%2F0%2F1%2F2%2C%2F0%2F1%2F2%2C%2F0%2F1%2F2&prev_iu_szs=320x50%2C320x50%2C320x50&fluid=height%2Cheight%2Cheight&prev_scp=position%3D1%7Cposition%3D2%7Cposition%3D3&cust_params=environment%3Dproduction%26storeNumber%3D1985%26audienceList%3D%26userType%3Ddiy%26site%3Ddesktop%26logged_in%3Dn%26search_terms%3Dair%2520conditioner%26pagetype%3DList&cookie_enabled=1&bc=31&abxe=1&lmt=1628659861&dt=1628659861319&dlt=1628659852705&idt=8530&frm=20&biw=1273&bih=501&oid=3&adxs=16%2C292%2C292&adys=199%2C1932%2C3488&adks=3732882183%2C3732882180%2C3732882181&ucis=1%7C2%7C3&ifi=1&u_tz=-300&u_his=3&u_java=false&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_sd=1&flash=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&vis=1&dmc=4&scr_x=0&scr_y=439&psz=1241x0%7C968x0%7C968x0&msz=1241x0%7C968x0%7C968x0&ga_vid=1485222594.1628659861&ga_sid=1628659861&ga_hid=1889420307&ga_fc=false&fws=0%2C0%2C0&ohw=0%2C0%2C0&btvi=0%7C1%7C2&uach=WyJMaW51eCIsIiIsIng4NiIsIiIsIjkwLjAuNDQzMC42MSIsW10sbnVsbCxudWxsLG51bGxd", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://6ab5493f32139d791f31b2662f1432a4.safeframe.googlesyndication.com/safeframe/1-0-38/html/container.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_11", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_12");
    ns_web_url ("baymax_12",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_12_url_0_1_1628659912512.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/partnerjs/xdi/proxy.3d2100fd7107262ecb55ce6847f01fa5.html#!kxcid=r0usxrln4&kxt=https%3A%2F%2Fwww.lowes.com&kxcl=cdn&kxp=", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("baymax_12", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_13");
    ns_web_url ("baymax_13",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;prodNumber;bm_sv",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_13_url_0_1_1628659912513.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=google", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cm.g.doubleclick.net/pixel?google_nid=krux_digital&google_cm&google_hm=T1MwZ3J0cm0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://match.adsrvr.org/track/cmf/generic?ttd_pid=krux&ttd_tpi=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=TDID;TDCPM", END_INLINE,
            "URL=https://idsync.rlcdn.com/379708.gif?partner_uid=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=pxrc;rlas3", END_INLINE,
            "URL=https://stags.bluekai.com/site/26357?id=OS0grtrm&redir=https://beacon.krxd.net/usermatch.gif?_kuid%3DOS0grtrm%26partner%3Dbluekai%26bk_uuid%3D%24_BK_UUID", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=bkdc;bkpa;bku", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?_kuid=OS0grtrm&partner=bluekai&bk_uuid=Klf4m99999O0OCBC", END_INLINE,
            "URL=https://servedby.flashtalking.com/map/?key=ad919e4f211cr5452615&url=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=[%FT_GUID%]", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", "REDIRECT=YES", "LOCATION=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=4971A57BD143B2", END_INLINE
    );

    ns_end_transaction("baymax_13", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_14");
    ns_web_url ("baymax_14",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;prodNumber;bm_sv",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_14_url_0_1_1628659912514.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://aa.agkn.com/adscores/g.js?sid=9212244187&_kdpid=2111c0af-fc3a-446f-ab07-63aa74fbde8e", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=ab;u", END_INLINE,
            "URL=https://aa.agkn.com/adscores/g.pixel?sid=9212303288&_kdpid=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=ab;u", END_INLINE,
            "URL=https://d.turn.com/r/dd/id/L2NzaWQvMS9jaWQvMjg0OTE3NDgvdC8y/dpuid/OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=uid", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?p_user_id=OS0grtrm&p_id=10623", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=personalization_id", END_INLINE,
            "URL=https://p.adsymptotic.com/d/px/?_pid=15571&_psign=fbab9de3673937603cddeab03f31b899&_puuid=OS0grtrm&_redirect=https:%2F%2Fbeacon.krxd.net%2Fusermatch.gif%3Fpartner%3Ddrawbridge%26partner_uid%3D%24%7BUUID%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=teadspartner&gdpr=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://sync.crwdcntrl.net/map/c=9164/TP=KRUX/tpid=OS0grtrm?https://beacon.krxd.net/usermatch.gif?partner=lotame&partner_uid=${profile_id}", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_cc_dc;_cc_id;_cc_cc;_cc_aud", END_INLINE,
            "URL=https://match.rundsp.com/match.gif?partner=krux", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://pagead2.googlesyndication.com/pagead/gen_204?id=gfp_cw_status&domain=lowes.com&host=www.lowes.com&success=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://krux2waycm.netmng.com/cm/", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://track.eyeviewads.com/sync/krux", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fei.pro-market.net/engine?mimetype=img&du=88&csync=OS0grtrm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagservices.com/activeview/js/current/osd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?google_gid=CAESEEEQPOvzeuViHUrVYT3CLvc&google_cver=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=ttd&partner_uid=f13a2308-d19b-4261-8f70-1932ca95e8ae", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=lotame&partner_uid=b52db760f55f603ec5ba6a6488e41682", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=neustar&partner_uid=1kAM48Nq47yowvgBx3scMh8J%2BxD4k3lLPqmISYjX2i0%3D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/data.gif?_kdpid=2111c0af-fc3a-446f-ab07-63aa74fbde8e&_kua_seg=000&_kua_zip=&_kua_age=&_kua_gender=&_k_adadvisor_key=164581003875000905663", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("baymax_14", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxLoad_2");
    ns_web_url ("mboxLoad_2",
        "URL=https://www.lowes.com/gauge/link/mboxLoad",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;__gads;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/mboxLoad_2_url_0_1_1628659912515.body",
        BODY_END
    );

    ns_end_transaction("mboxLoad_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_15");
    ns_web_url ("baymax_15",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_15_url_0_1_1628659912515.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://cm.g.doubleclick.net/pixel?google_cm&google_nid=krux_digital&google_hm=T1MwZ3J0cm0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?_kuid=OS0grtrm&partner=bluekai&bk_uuid=Klf4m99999O0OCBC", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://sync.teads.tv/sf/sync?partner_uid=OS0grtrm&gdpr=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://idsync.rlcdn.com/398696.gif?partner_uid=209498406449793278", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=pxrc;rlas3", END_INLINE
    );

    ns_end_transaction("baymax_15", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_16");
    ns_web_url ("baymax_16",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;akaalb_prod_dual;prodNumber;bm_sv",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/baymax_16_url_0_1_1628659912516.body",
        BODY_END
    );

    ns_end_transaction("baymax_16", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_17");
    ns_web_url ("baymax_17",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_17", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_18");
    ns_web_url ("baymax_18",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_18", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_19");
    ns_web_url ("baymax_19",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        INLINE_URLS,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=teadspartner&partner_uid=043548c650a0d2566bd277ed854cb7ed8ebaf981", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?partner=flashtalking&partner_uid=4971A57BD143B2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://tpc.googlesyndication.com/safeframe/1-0-38/js/ext.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://tpc.googlesyndication.com/simgad/9286444732552013533?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagservices.com/activeview/js/current/rx_lidar.js?cache=r20110914", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?google_gid=CAESEEEQPOvzeuViHUrVYT3CLvc&google_cver=1", END_INLINE
    );

    ns_end_transaction("baymax_19", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("ratingsLinkClick");
    ns_web_url ("ratingsLinkClick",
        "URL=https://www.lowes.com/gauge/link/ratingsLinkClick",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;__gads;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/ratingsLinkClick_url_0_1_1628659912517.body",
        BODY_END
    );

    ns_end_transaction("ratingsLinkClick", NS_AUTO_STATUS);
    ns_page_think_time(1.085);

    //Page Auto split for 
    ns_start_transaction("sliderComps_5e6fabf8_chunk_j");
    ns_web_url ("sliderComps_5e6fabf8_chunk_j",
        "URL=https://www.lowescdn.com/node/search/helix/1.91.0/sliderComps.5e6fabf8.chunk.js",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("sliderComps_5e6fabf8_chunk_j", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_4");
    ns_web_url ("bundle_4",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=4967064212119552&Seq=3&PageStart=1628659844916&PrevBundleTime=1628659863498&IsNewSession=true&DeltaT=12327",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/bundle_4_url_0_1_1628659912517.body",
        BODY_END
    );

    ns_end_transaction("bundle_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_5");
    ns_web_url ("bundle_5",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5771705782935552&Seq=1&PageStart=1628659863351&PrevBundleTime=0&LastActivity=2894",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_5_main_url_1_1628659912524.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://securepubads.g.doubleclick.net/pcs/view?xai=AKAOjstoLeUto-wA9BR3-AKaRHBTUs2NIfNW4UXoAD3oy0r7UyzqJz46raS4BtJ-oihM285O2h3qRmRGKJMKT_9X0E935ZVa4NsTW31TGBZ5E5F52SzYsg7JT7KKx1a6Hd85QX4IUyvPOP6hUE1dzI5SbMjSJs_SqPvZfx6QWmVWtm7TKMmdbXzX_mT1l4E-skwbzPVctrvnr5bIKsySf6ZLfvfdfBLkQBTxVeBB0v2M1U9PwtAwhzzvHUnXAGTMhPE2oOkiDQX9pO8w5MoGpm5Zl1QRgowIek_IDmaHPb92GezibDGiw4So6kIgwiNebaM&sig=Cg0ArKJSzNZRtPwaHb0EEAE&urlfix=1&adurl=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://beacon.krxd.net/optout_check?callback=Krux.ns.lowes.kxjsonp_optOutCheck", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cdn.krxd.net/userdata/get?pub=e30196c7-5053-416c-94a4-c1acfb09b619&callback=Krux.ns.lowes.kxjsonp_userdata", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/pcs/view?xai=AKAOjsvtpX3SSiuWRtRYiD0mrRM-Nq0h8Cc1-MV_0MijuxWZOD5HTo_Zqsj0pNy8BAIRPISz5SYuEvHhNfSB7VZGqTykOGb6rdd1vwSp8GKchm1TV0VVT3MRnVNqf1Z3Dbew66tOUcNTFw7E0NkPURwP_ruZEXoFlveYwon3Hs2T9b-hwUh1CyTXq8YXxGMJ5YZ-sI4NuxAQCgDBu93noJ4pryiEYZdwlADLAxCpRd1K4kZiNu7ybsuT2JNqIpXqtevQdJCdXP_7gq10lj2pGYvhBMeFzhuKnLJyqUQlaI419un8bgzs_79cNe8n_DXB5cda_g&sig=Cg0ArKJSzBeVpET-dKsfEAE&urlfix=1&adurl=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("prod");
    ns_web_url ("prod",
        "URL=https://www.lowes.com/rnr/r/get-by-product/5000143961/plp/prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;__gads;prodNumber;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("prod", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("impressionBeacon");
    ns_web_url ("impressionBeacon",
        "URL=https://www.lowes.com/gauge/link/impressionBeacon",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;__gads;prodNumber;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/impressionBeacon_url_0_1_1628659912525.body",
        BODY_END
    );

    ns_end_transaction("impressionBeacon", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("recommendation");
    ns_web_url ("recommendation",
        "URL=https://www.lowes.com/gauge/pageview/searchResults/recommendation",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;g_previous;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;RT;mbox;__gads;prodNumber;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/recommendation_url_0_1_1628659912526.body",
        BODY_END
    );

    ns_end_transaction("recommendation", NS_AUTO_STATUS);
    ns_page_think_time(1.194);

    //Page Auto split for 
    ns_start_transaction("RC72d2ec0cab6f4408838d32aa71");
    ns_web_url ("RC72d2ec0cab6f4408838d32aa71",
        "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC72d2ec0cab6f4408838d32aa7124111c-source.min.js",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("RC72d2ec0cab6f4408838d32aa71", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("sodar");
    ns_web_url ("sodar",
        "URL=https://pagead2.googlesyndication.com/getconfig/sodar?sv=200&tid=gpt&tv=2021080501&st=env",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://trial-eum-clientnsv4-s.akamaihd.net/eum/getdns.txt?c=pyxudsbm9", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://tuur4tbrfsycwyitmcna-pyxuds-45d568c59-clientnsv4-s.akamaihd.net/eum/results.txt", END_INLINE,
            "URL=https://trial-eum-clienttons-s.akamaihd.net/eum/getdns.txt?c=pyxudsbm9", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://157-41-30-76_s-49-44-114-58_ts-1628659866-clienttons-s.akamaihd.net/eum/results.txt", END_INLINE
    );

    ns_end_transaction("sodar", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("prod_2");
    ns_web_url ("prod_2",
        "URL=https://www.lowes.com/rnr/r/get-summary-by-product/5000143961/plp/prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;mbox;__gads;prodNumber;RT;g_previous;akaalb_prod_dual;bm_sv",
        INLINE_URLS,
            "URL=https://tuur4tbrfsycwyitmcna-pyxuds-45d568c59-clientnsv4-s.akamaihd.net/eum/results.txt", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Origin:null", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://157-41-30-76_s-49-44-114-58_ts-1628659866-clienttons-s.akamaihd.net/eum/results.txt", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Origin:null", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/pixel.gif?source=smarttag&fired=report&confid=r0usxrln4&_kpid=e30196c7-5053-416c-94a4-c1acfb09b619&_kcp_s=Lowes&_kcp_d=www.lowes.com&_knifr=4&_kpref_=https%3A%2F%2Fwww.lowes.com%2F&_kua_kx_tz=300&geo_country=in&geo_region=or&_kua_kx_lang=en-us&_kua_kx_tech_browser_language=en-us&_kua_kx_geo_country=in&_kua_kx_geo_region=or&_kua_kx_tech_browser=Chrome%209&_kua_kx_tech_manufacturer=Other&_kua_kx_tech_device=Computer&_kua_kx_tech_os=Linux&_kua_lowes_search_profile.user.CurrentStore.zip=99701&_kua_lowes_search_profile.user.storeNumber=1985&_kua_userType=diy&_kpa_domain=lowes.com&_kpa_lowes_page.pageType=search-results&_kpa_lowes_page.sysEnv=lowes.com&_kpa_lowes_search_page.pageType=search-results&_kpa_lowes_search_page.siteSection=air_conditioner&_kpa_lowes_search_products.productId=1001307556%2C5000143961%2C5001459511%2C5000151929%2C5000087109%2C5001462705%2C5000143957%2C5000143949%2C5000143951%2C1000760764%2C1000773230%2C5001894855%2C5000151923%2C1001847744%2C5000151925%2C1001861860%2C1001861844%2C5000151927%2C5001055817%2C5000151921%2C1001861828%2C5000087107%2C1000380519%2C5001598713&t_navigation_type=0&t_dns=0&t_tcp=0&t_http_request=-1&t_http_response=150&t_content_ready=6873&t_window_load=14474&t_redirect=0&interchange_ran=false&userdata_was_requested=true&userdata_did_respond=true&store_user_after=wkiiqd06g&_kurl_=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2Bconditioner&userdata_user=OS0grtrm%2Cwkiiqd06g&sview=2&kplt0=32022&kplt1=35845&kplt2=31609&kplt3=32302&kplt4=32892&kplt5=32365&kplt6=32880&kplt7=45511&kplt8=46780&kplt9=46851&kplt10=47456&jsonp_requests=https%3A%2F%2Fconsumer.krxd.net%2Fconsent%2Fget%2Fe30196c7-5053-416c-94a4-c1acfb09b619%2C541%2Chttps%3A%2F%2Fbeacon.krxd.net%2Foptout_check%2C953%2Chttps%3A%2F%2Fcdn.krxd.net%2Fuserdata%2Fget%2C950", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/common.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/util.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.revlifter.io/0l554347-da15-447f-9091-6e8941024cdc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC1c11ce2c7e414c61b1d616140e23f97f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("prod_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_6");
    ns_web_url ("index_6",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://s3.amazonaws.com/stratos-logos/logos/GE_Appliances.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_6", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("prod_3");
    ns_web_url ("prod_3",
        "URL=https://www.lowes.com/rnr/r/get-image-curation-by-product/5000143961/plp/prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;IR_12374;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;_px_4559617368_cs;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;mbox;__gads;prodNumber;RT;g_previous;akaalb_prod_dual;bm_sv",
        INLINE_URLS,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/460aa928-cac6-54ed-9531-202a707d12ba", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/6b94140c-b313-5ffe-9fd1-aab9dbbb9089", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/ee107059-0f28-57d0-80af-b7b65c50599e", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/9824d79e-6e5b-5136-8bd1-92bddb92532b", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/312ae475-eadf-53ab-94fc-1942e743a710", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/7d02e824-75b3-5e67-b127-07bd119c4ce6", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://tpc.googlesyndication.com/sodar/sodar2.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/80a76b2e-e71e-5e63-9cf0-7db8e6ade8e2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/05fd749d-0def-5085-b793-8a798a2c0adb", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/baa535ea-609d-516b-bfe8-cd7fd5cd1a7c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/5c6e9592-2a53-5b66-964b-9db568466099", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/e3c5d4e0-a6d3-5b61-ad51-b9b8280a6d23", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/608dccb2-7a5e-5eb9-be37-1c82e037e016", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/5ed25e14-509b-58c3-ad1f-6402b322fbc3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/31661a4c-df2a-507c-906c-97d4c86c366c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/3f61e83f-278f-5c2a-9b73-775b12f213e3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/9577ccab-2b75-5f91-9593-de942aa3bd0d", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/890b6857-e7c5-5afe-9918-3add58fbb5b6", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.btttag.com/analytics.rcv?pgNm=search-results&trSeg=eCommerce-www.lowes.com&navStart=1628659851101", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/50470576-8fa2-5ca0-af33-0fffefafb704", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3f2f71a5d0404175929be845aae79016-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/080cfff6-6630-5d53-9e26-3afd8bed8085", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCce86c7e82e1c4d68a5fc6fba2fe4d928-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3a17c74de0ca481cb77cb434c4b501fc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC420597ffe0644954993e7b551468eebb-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/6787e60b-9159-5b90-8183-3fac4aea6b87", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/08a12c2a-4349-5ba7-b566-34e360ae8d78", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/46f03395-07ba-53fa-bee2-b62ee8bce9a5", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://wkxppshj-qx.global.ssl.fastly.net/nrse.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86Z2VfYXBwbGlhbmNlcw/bf3cce04-3033-5bc8-8e31-f9025d078086", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/ff409fcc-c70e-513b-977a-2f02f5b5c090", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/c40854b4-4052-5f77-a948-8527d9b926f4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/9b75f0ab-229c-57ef-beaf-769b84ccd8d6", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/e728d5e9-41b7-5ff2-ba7e-909d0763a766", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/9321f9f7-ef85-511c-bd48-73f7e7eed5cf", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/e4d53e13-9eea-52e0-8644-7becd9b4eb42", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/c0d7fadb-663d-5d6c-ad55-0ef1a366c8e1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/14aac83e-3ad3-5ef5-ad7f-3b9aa412b373", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&2sgme-loweshomecenters&callback=_xdc_._akwaa2&client=gme-loweshomecenters&token=53815", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("prod_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_6");
    ns_web_url ("bundle_6",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5771705782935552&Seq=2&PageStart=1628659863351&PrevBundleTime=1628659865258&LastActivity=80",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_6_main_url_1_1628659912540.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/c2a69a9d-74bb-59c0-b56d-c30c65fbd573", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/c2412a27-2d53-5831-a31e-0107ce7f3406", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/4bdd818c-32ee-522d-83ee-6f14de7168bd", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/c821416a-41d6-541c-93be-0e916f064591", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://photos-us.bazaarvoice.com/photo/2/cGhvdG86bG93ZXM/f4383904-1769-5779-8334-62e7146b0114", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://tpc.googlesyndication.com/sodar/sodar2/224/runner.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/recaptcha/api2/aframe", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fdz.flashtalking.com/services/lowes/FBI-2422_segment/?&U1=&U2=&U3=1985&U4=99701&U5=&U6=&U7=&U8=&U9=&U10=&U11=1001307556,5000143961,5001459511,5000151929,5000087109,5001462705,5000143957,5000143949,5000143951,1000760764,1000773230,5001894855,5000151923,1001847744,5000151925,1001861860,1001861844,5000151927,5001055817,5000151921,1001861828,5000087107,1000380519,5001598713&U14=&U15=search-results&U16=air_conditioner&U17=&U19=&U20=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", END_INLINE,
            "URL=https://d.impactradius-event.com/A2490986-6272-4119-80d2-3e11fba8509a1.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_6", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("analytics_rcv_2");
    ns_web_url ("analytics_rcv_2",
        "URL=https://d.btttag.com/analytics.rcv?pgNm=search-results&trSeg=eCommerce-www.lowes.com&navStart=1628659851101",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=collection;enabled;sessionID;lowes15841z-txnName;lowes15841z-BrowserVersion",
        BODY_BEGIN,
            "eyJ0aGlzVVJMIjoiaHR0cHM6Ly93d3cubG93ZXMuY29tL3NlYXJjaD9zZWFyY2hUZXJtPWFpciUyMGNvbmRpdGlvbmVyIiwicGFnZU5hbWUiOiJzZWFyY2gtcmVzdWx0cyIsIm5zdCI6IjE2Mjg2NTk4NTExMDEiLCJ1bmxvYWRFdmVudFN0YXJ0IjoiMTYyODY1OTg1MjY4MCIsInJlZGlyZWN0U3RhcnQiOiIwIiwiY19jb3VudCI6IjAiLCJjb19jb3VudCI6IjAiLCJ0b3RSRCI6IjAiLCJmZXRjaFN0YXJ0IjoiMTYyODY1OTg1MTExOCIsImRvbWFpbkxvb2t1cFN0YXJ0IjoiMTYyODY1OTg1MTExOCIsImNvbm5lY3RTdGFydCI6IjE2Mjg2NTk4NTExMTgiLCJzZWN1cmVDb25uZWN0aW9uU3RhcnQiOiIwIiwicmVxdWVzdFN0YXJ0IjoiMTYyODY1OTg1MTEyNSIsInJlc3BvbnNlU3RhcnQiOiIxNjI4NjU5ODUyNjU2IiwiUkVFIjoiMTYyODY1OTg1MjgwNiIsIkJQVCI6IjE1MCIsImRvbUxvYWRpbmciOiIxNjI4NjU5ODUyNzA1IiwiZG9tSW50ZXJhY3RpdmUiOiIxNjI4NjU5ODU3OTc0IiwiZG9tQ29udGVudExvYWRlZFN0YXJ0IjoiMTYyODY1OTg1ODQzMCIsImRvbUNvbnRlbnRMb2FkZWRFbmQiOiIxNjI4NjU5ODU4NDM5IiwibG9hZEV2ZW50U3RhcnQiOiIxNjI4NjU5ODY1NTc1IiwibmF2aWdhdGlvblR5cGUiOiIxIiwicmVkaXJlY3RDb3VudCI6IjAiLCJwYWdlVHlwZSI6IkdDUCBTZWFyY2ggUmVzdWx0cyBIZWxpeCIsInBhZ2VWYWx1ZSI6IjAiLCJwZ1RtIjoiMTQ0NzQiLCJkbnMiOiIwIiwidGNwIjoiMCIsImRvbSI6IjEyODYwIiwiZkJ5dGUiOiIxNTMxIiwic3NsIjoiMCIsImZpcnN0UGFpbnQiOiIxODYyIiwiZkNQbnQiOiIxODYyIiwiZm1wIjoiMCIsInR0aSI6IjIwODAiLCJsdF90dGkiOiIwIiwiZnBzX3R0aSI6IjIwODAiLCJmcHMiOiIwIiwiRklEcyI6Ijk1NzAiLCJGSURkIjoiMjk2IiwiTENQIjoiMTg2MyIsIkNMU2UiOiIxNDk5MCIsIkNMUyI6IjAuMDgwMTIyODc1MTA3NDM2MzkiLCJUQlQiOiIwIiwiU2NybkgiOiI2NjMiLCJTY3JuVyI6IjEzNjAiLCJwV1N6IjoiMzk4MTI3IiwicFN6IjoiMTM2MjU5NSIsIklNQUdFX1NJWkUiOiIwIiwiSlNfU0laRSI6IjI2NTAxMSIsImVsZW1lbnRDb3VudCI6IjkxIiwiY2FydFZhbHVlIjoiMCIsIk9OdW1CciI6IjAiLCJvcmRlclRORCI6IjAiLCJlVCI6IjUiLCJzaXRlSUQiOiJsb3dlczE1ODQxeiIsInR4bk5hbWUiOiJlQ29tbWVyY2Utd3d3Lmxvd2VzLmNvbSIsImNhbXBhaWduIjoiIiwiQUIiOiJEZWZhdWx0IiwiRENUUiI6ImVhc3QiLCJ0b3AiOiItMTMyNDUiLCJidiI6IjAiLCJidnpuIjoiQ2hyb21lLTkwIiwidHVsIjoiMCIsIkVVT1MiOiJMaW51eCIsImN1cnJlbmN5Q29kZSI6IiIsInNJRCI6IjMxNzIzNTY3NjU4MTY1MTM2OSIsImdJRCI6IjMxNzIzNTY3NjU4MTY1MTM2OSIsIlNIaSI6IjY2MyIsIlNXaSI6IjEzNjAiLCJDU0lEIjoiMCIsIkNWMSI6IjBjNGQ2MGU4LWFmMTEtNDg4Mi04MDY5LTExNjcxMjkyODk1YiIsIkNWMiI6IjAiLCJDVjMiOiIwIiwiQ1Y0IjoiMCIsIkNWNSI6IjAiLCJDVjYiOiJzdGFibGUiLCJDVjciOiJDb29raWUgUHJlc2VudCIsIkNWOCI6IlppcHBlZCIsIkNWOSI6InVuZGVmaW5lZCIsIkNWMTAiOiJOYW1vZ29vIE9uIiwiQ1YxMSI6IjAiLCJDVjEyIjoiMCIsIkNWMTMiOiIwIiwiQ1YxNCI6IjAiLCJDVjE1IjoiMCIsIkNOMSI6IjAiLCJDTjIiOiIwIiwiQ04zIjoiMCIsIkNONCI6IjAiLCJDTjUiOiIwIiwiQ042IjoiMCIsIkNONyI6IjAiLCJDTjgiOiIwIiwiQ045IjoiMCIsIkNOMTAiOiIwIiwiQ04xMSI6IjAiLCJDTjEyIjoiMCIsIkNOMTMiOiIwIiwiQ04xNCI6IjAiLCJDTjE1IjoiMCIsIkNOMTYiOiIwIiwiQ04xNyI6IjAiLCJDTjE4IjoiMCIsIkNOMTkiOiIwIiwiQ04yMCI6IjAiLCJ3Y2QiOiIwIiwiTFRNIjoiMTYyODY1OTg1MzEwNiIsIldDRHR0IjoiYyIsIk5WU1RSIjoiMCIsIlJWIjoiMCIsImNvbGxlY3RBdCI6IjEwMCIsIkNtcFMiOiJEaXJlY3QiLCJDbXBNIjoiTm9uZSIsIkNtcE4iOiIiLCJSZWZVUkwiOiJodHRwczovL3d3dy5sb3dlcy5jb20vIn0=",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC61df4c46e1804f5885d1d9487d3249f5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("analytics_rcv_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("LLODOWS854_json_2");
    ns_web_url ("LLODOWS854_json_2",
        "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LLODOWS854.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://colrep.sitelabweb.com/rp/?d=lhrxF6sa_Di2BUd7Avp11vOG68aAsjaGNjzTEFJj30GtcFhCVgcqRx_XYz6zUWJ~gw_G00mjqEO8JkVd18ryVec8bjcqRHO0AEZi7hFX5n1GaDPP~mUTREiTApMK5yX5NiODtRJ~TyXGdg0jF4aShlAB55s3NSZqSMgKRLF1DVNgjm_XVppTSFLfN5ABJ6iTMhOK9mlMI56TPNORr1KDgvoTOPM8J1Pt1av3l_b7MhXmJC7SxLJgbwG-gomShHQeEyDex1vnRqJKiwsXg~HzPRKfnyI~Fn1G93V~FiJTlEcTF0NKm3Z1M~3T9LKSBIR~1DjTXXJP2wTgl3sSQiM52llMtr4SLNMSgoZX9kzShGRfVwC8A6gDMjM3V2_lUu6FE6Z~ZyXCUprjhHNuqzE7Z0rXJ-e8rlp5NlM2x_MQs1_GlbpTOHZfNwP8kGfDhUYq2mm_Fd6WHOYgn5UjUxmTlGYv~0ACN1sDzVNau2aXld8GLNY~klVzRbyzOEMiFjFdUJsTEjNauwaGZsOjtNJ~-yVGY0-HeKcD6lDREzfkUWMbz3rNcqMG0UZkfuUo9kjTX_c~FhUBN0cTJ0cvvhq4NkFGMNbfnzN0Fg1ihGNP2wPT96sGhmaN_umqIiOGMCcxLvFXlqsWJ4ZS70QwQNsmBccvumlMEt9TDMZgj1IDYqyTe2YvBmE8lwrjMjYanhmmJg7DAAYgrxFXNZmzEHMSE0EtEGf2AmZ7m0m1Y1Im9RMGbzUGUpzDdGZS~2Ds4BfV4gJdnur4lg6zuOZkgzXG9ljTWHMv-lEdU9gjJSN7rja_Y~8WA7NRgiIoFcmmdKMiFhE8EzfjIhNai4a1Yt7z1NJgxDQ~Mcmj_HMSE0EtEGf2AmZ7m0m1Y1Im9RMGbzUGUpzDdGZS~2Ds4BfV4gJKiz_mY16TbLNRr2ICZj1zFKcjFlACJBiXNidNump5J~9T1Bc~owYpJtpSmGaPmx&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.89cd5bf4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCacde2c6c5c9848b490f9b665b2b5750f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("LLODOWS854_json_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("index_7");
    ns_web_url ("index_7",
        "URL=https://ct.pinterest.com/user/?tid=2615619520270&pd=%7B%22page%22%3A%22search-results%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&cb=1628659870079",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://ct.pinterest.com/v3/?tid=2615619520270&pd=%7B%22page%22%3A%22search-results%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22if%22%3Afalse%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659870085", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC40e28284239f4944be946816c3ebdee8-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC17e89cc9a97f49c6bef6e0b05a50ba6b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC048b00ad01764079b31c72e0fae5fc9e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC2ec50c6f7acb4c3c8388ac4d697347fa-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC39ed03d9a7c54207bfd191d1940d916b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC289cf6dc3ebe40ecb8586a89a037dd31-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/625799750871183?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC59d4420b823e47f1910c7b3645160666-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb493cf1ad0b54f20b2e824242e38a4d2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC54531dfbcb804f1e946f0fe9300aaa29-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=22554410", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/1128484153951961?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.agkn.com/pixel/9458/?che=9611752206165658&mcvsid=71747673865418841840298191736677393887", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=u;ab", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb3ad2a2bd3ca47dfbdb42be185649f14-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://login.dotomi.com/ucm/UCMController?dtm_com=28&dtm_cid=2621&dtm_cmagic=cc7090&dtm_format=5&dtm_fid=101&cli_promo_id=search-results&dtmc_ref=https%3A%2F%2Fwww.lowes.com%2F&dtmc_loc=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_7", NS_AUTO_STATUS);
    ns_page_think_time(0.062);

    //Page Auto split for 
    ns_start_transaction("adsct");
    ns_web_url ("adsct",
        "URL=https://analytics.twitter.com/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tpx_cb=twttr.conversion.loadPixels&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=personalization_id",
        INLINE_URLS,
            "URL=https://t.co/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://pagead2.googlesyndication.com/bg/O2l1W4tcrMlErSQCfrpxGkyfOY9pZOaE8-TKtI4Qkek.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/22554410/configuration/applications/taglets/.jsonp?v=2.0&df=undefined&b=undefined", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("adsct", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_8");
    ns_web_url ("index_8",
        "URL=https://ct.pinterest.com/md/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"urls":{"loc":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"meta":{"og":"<meta property=\"og:title\" content=\"Air conditioner at Lowes.com: Search Results\"><meta property=\"og:type\" content=\"website\"><meta property=\"og:url\" content=\"https://www.lowes.com/search?searchTerm=air+conditioner\"><meta property=\"og:description\" content=\"Shop air conditioner at Lowe's. Find a variety of quality home improvement products at Lowes.com or at your local Lowe's store.\"><meta property=\"og:site_name\" content=\"Lowe's\"><meta property=\"og:image\" content=\"https://mobileimages.lowes.com/productimages/91e2e7e9-c032-44b8-9cc3-fc79cb5a00cb/12061069.jpg\">"},"sdo":{"jsonld":["<script type=\"application/ld+json\">{\"@context\":\"http://schema.org\",\"@type\":\"WebSite\",\"url\":\"https://www.lowes.com/\",\"potentialAction\":{\"@type\":\"SearchAction\",\"target\":\"https://www.lowes.com/search?searchTerm={searchTerm}\",\"query-input\":\"required name=searchTerm\"}}</script>"],"md":["<ul class=\"Breadcrumb__ListedItems-RC__sc-u5papc-3 dPvmdK  &quot;breadcrumb&quot;\" itemscope=\"\" itemtype=\"https://schema.org/BreadcrumbList\"><li class=\"Breadcrumb__List-RC__sc-u5papc-1 ieKjiY  breadcrumb-item\" style=\"color:rgb(0, 65, 194);font-size:0.875rem;font-family:Helvetica, sans-serif\" itemtype=\"https://schema.org/ListItem\" itemprop=\"itemListElement\" itemscope=\"\" aria-hidden=\"false\"><a href=\"/\" itemtype=\"https://schema.org/Thing\" itemprop=\"item\" aria-label=\"Home\" class=\"Link__LinkStyled-RC__sc-b3hjw8-0 hRzlqr breadcrumb-link\"><span itemprop=\"name\">Home</span></a><span itemprop=\"name\">Home</span><meta itemprop=\"position\" content=\"1\"></li><li class=\"Breadcrumb__List-RC__sc-u5papc-1 bFvJgz  breadcrumb-item\" style=\"color:rgba(0, 0, 0, 0.87);font-size:0.875rem;font-family:Helvetica,Arial,sans-serif;pointer-events:none;font-weight:\" itemtype=\"https://schema.org/ListItem\" itemprop=\"itemListElement\" itemscope=\"\" aria-hidden=\"false\"><meta itemprop=\"position\" content=\"2\"></li></ul>"]},"aux":{"micro_s":11335},"tid":"2615619520270"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&rl=https%3A%2F%2Fwww.lowes.com%2F&if=false&ts=1628659870983&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659870231&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&rl=https%3A%2F%2Fwww.lowes.com%2F&if=false&ts=1628659870989&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659870231&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/", "METHOD=POST", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Origin:https://www.lowes.com", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-User:?1", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr",
            BODY_BEGIN,
            "id=625799750871183&ev=Search&dl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&rl=https%3A%2F%2Fwww.lowes.com%2F&if=false&ts=1628659870991&cd%5Bcustomer_type%5D=&cd%5Bknown_state%5D=&cd%5Bidentity_id%5D=&cd%5Bcontent_ids%5D=%5B%5B%22840470-83-AKQ06LZ%22%5D%2C%5B%222759118-83-APFD06JASW%22%5D%2C%5B%223646823-108981-LP0621WSR%22%5D%2C%5B%222987539-57007-AP1221CR1W%22%5D%2C%5B%222987540-57007-AW0521CK1W%22%5D%2C%5B%223613701-108981-LW6017R%22%5D%2C%5B%222758956-83-AKLK24AA%22%5D%2C%5B%222758952-83-AKLK10AA%22%5D%2C%5B%222758953-83-AKLK12AA%22%5D%2C%5B%22840470-83-AHQ06LY%22%5D%2C%5B%221238311-25552-LT1216CER%22%5D%2C%5B%223848017-108933-LAC8000W%22%5D%2C%5B%222987535-57007-AP0921CR1G%22%5D%2C%5B%221153967-100163-BPACT10WT%22%5D%2C%5B%222987537-57007-AP1021TR1GD%22%5D%2C%5B%221153971-100163-BPACT14WT%22%5D%2C%5B%221153970-100163-BPACT14HWT%22%5D%2C%5B%222987538-57007-AP1021HR1GD%22%5D%2C%5B%223429441-2251-FHPH132AB1%22%5D%2C%5B%222987533-57007-AP0821CR1W%22%5D%2C%5B%221153969-100163-BPACT12WT%22%5D%2C%5B%222987536-57007-AP1021CW1G%22%5D%2C%5B%22840567-83-AHE08AX%22%5D%2C%5B%223429449-2251-FHWH112WA1%22%5D%5D&cd%5Bcontent_type%5D=product&cd%5Bcontent_category%5D=air_conditioner&cd%5Bproduct_ids%5D=%5B%5B%22840470-83-AKQ06LZ%22%5D%2C%5B%222759118-83-APFD06JASW%22%5D%2C%5B%223646823-108981-LP0621WSR%22%5D%2C%5B%222987539-57007-AP1221CR1W%22%5D%2C%5B%222987540-57007-AW0521CK1W%22%5D%2C%5B%223613701-108981-LW6017R%22%5D%2C%5B%222758956-83-AKLK24AA%22%5D%2C%5B%222758952-83-AKLK10AA%22%5D%2C%5B%222758953-83-AKLK12AA%22%5D%2C%5B%22840470-83-AHQ06LY%22%5D%2C%5B%221238311-25552-LT1216CER%22%5D%2C%5B%223848017-108933-LAC8000W%22%5D%2C%5B%222987535-57007-AP0921CR1G%22%5D%2C%5B%221153967-100163-BPACT10WT%22%5D%2C%5B%222987537-57007-AP1021TR1GD%22%5D%2C%5B%221153971-100163-BPACT14WT%22%5D%2C%5B%221153970-100163-BPACT14HWT%22%5D%2C%5B%222987538-57007-AP1021HR1GD%22%5D%2C%5B%223429441-2251-FHPH132AB1%22%5D%2C%5B%222987533-57007-AP0821CR1W%22%5D%2C%5B%221153969-100163-BPACT12WT%22%5D%2C%5B%222987536-57007-AP1021CW1G%22%5D%2C%5B%22840567-83-AHE08AX%22%5D%2C%5B%223429449-2251-FHWH112WA1%22%5D%5D&cd%5Bsearch_string%5D=air%2520conditioner&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659870231&coo=false&rqm=formPOST",
        BODY_END,
             END_INLINE,
            "URL=https://client.perimeterx.net/PX61WVsvi8/main.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC87fa49f39baf4b19b54be6ddb7c365d5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC09e58aea1af04c45a4533887a790c5e4-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_2");
    ns_web_url ("collector_2",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqCgIHEB4QVhAISRBiagsDEAgDAQQCHhBiagsAEAgEBAEeEGJqAAQLEAgDAAoKHhBiagAFAhAIBAEEHhBiagMKBBAIAwAKCh4QYmoDCgcQCAcCAx4QYmoAAQAQCAMACgoeEGJqAAEDEAgHAgMeEGJqCwIKEAgQBwQEAwUBAgIfVFMEBx8DA1dQH1NXVgUfUQNRVAMBBFcGC1MKEB4QYmoLAgsQCBAGCwQDVgICAh9UUwQHHwMDV1AfUFQFUx8BCwcDBVRTBAcEAwoQHhBiagsLBBAIEFFRAVcGUAZREB4QYmoKCwAQCEZAR1ceEGJqCwUHEAgDCwoKHhBiagMCAwIQCBBTUBAeEGJqCwMCEAgQBgsEAwEBUQIfVFMEBx8DA1dQH1BUBVMfAQsHAwVUUwQHBAMKEB4QYmoLAgUQCBADHAEcAQoHBBAeEGJqCwMKEAgQBgcHCwQDBQEEChAeEGJqCgACEAgQYmoKAwQQHhBiagsBAhAIXEdeXh4QYmoHBxAIEFpGRkJBFwFzFwB0FwB0RUVFHF5dRVdBHFFdXxcAdBAeEGJqCgcCEAgCHhBiagoHAxAIAAIDCgMeEGJqAwIHBBAIAwQACgQHCwoFAwECAB4QYmoDAgEKEAgQBwQHBVRWAAIfVFMEBx8DA1dQH1MGVgQfBwMGVFEFB1BXVgsGEB4QYmoBBQMQCFRTXkFXHhBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHUFXU0BRWg1BV1NAUVpmV0BfD1NbQBcAAlFdXFZbRltdXFdAEE9PHkkQRhAIEGJqABAeEFYQCEkQYmoLBBAIEFpGRkJBCB0dRUVFHF5dRVdBHFFdXx1BV1NAUVoNQVdTQFFaZldAXw9TW0AXAAJRXVxWW0ZbXVxXQBAeEGJqBAEQCBB W1xHShJKCgRtBAYQHhBiagMLAxAIAh4QYmoKBwIQCAMeEGJqCgcDEAgAAgMLCx4QYmoDAgIKEAgBBAICHhBiagMCBwcQCAMEAAoEBwsKBQMABAseEGJqAwIHBBAIAwQACgQHCwoFAwECAB4QYmoDAgEKEAgQBwQHBVRWAAIfVFMEBx8DA1dQH1MGVgQfBwMGVFEFB1BXVgsGEB4QYmoBBQMQCFRTXkFXT09v"
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "5657fd20-fa65-11eb-a4d6-514fc75bed94"
, key: "ft"
value: "226"
, key: "seq"
value: "0"
, key: "en"
value: "NTA"
, key: "pc"
value: "9468033149891020"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "1"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://1060694.collect.igodigital.com/collect.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalstdomain", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC8f22bc63cd284f6184d59595847bd553-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://pagead2.googlesyndication.com/pagead/sodar?id=sodar2&v=224&li=gpt_2021080501&jk=2399671777886998&rc=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://pagead2.googlesyndication.com/pagead/gen_204?id=sodar2&v=224&t=2&li=gpt_2021080501&jk=2399671777886998&bg=!o6CloOTNAAbOj6irzo87ACkAdvg8WtXsE3ClPLPaT2RdIVI7hCwJ9tTTASfJIvB6h550zbmp4QVxpgIAAAGNUgAAAAtoAQeZApLIr9p_Hto1mSSvdaWm32h_N-dX8fHfia_ouZI9wZuNemAMky5Tyja2pJ0RMNODfdkWdeMn8x02SzCKHKr-w_Ch5YCqMXkTC_tJtIdgns-YxQu9-CqO4KB_EYh82OnL_XDHgWooAWZroqKdaP-SUf8z-uPtzU0h9pHnZZ31jKKtpXQc5tMviz4xaSbtLVLzJkzHS75kz-vQ4ITqCuOjfnBwNsM_Wk2TsQ4YnN_MqodJIUsoIIyLf_O-fw1ZGLeN_7xQcwJKXWf76rkSN-Uh4uq9JhUEOcncZw_d6xMP2cV56YYOpKcGDc4SSfwFwJonE8edigOiSTVfRfNObojOg9NiFIOWwNKkoF1i7hqM0n38RHUKbYyCBERuoh8rM80gZqpnXrPs1KULKD1wSvEkjVhfGEVRGQLXMjFWKUu8DZ0nC1rmjwwpm8y38K2rbWuKyi3wc0ZrpntOrTNNZa_d96hZclKFIoRx7qt9a0-giNwGzHdSKG2LgIgcbK04r9FEKHWI-1ZTTxqcb_WfxptjjeichIGOs35XjWBjVK9zp6wvQgoe5EPLJ-Bw7CkcPGrO0vbTs3XlLgp-YQC4D87bKjuEEL9cMEOXF6ALroD_EuickPAuD7nJTM1LzvGpyqjpr5hAjWY9YsXpSNYwUtGOFhFeZEpHQC_Xmaiu0A01Ggz0EK80_qQa6VxPF45PivJxR6r-sX088l-OdYzZNNbmAr2lZcBSMeTDHvZWzL4bZkEKGrExFOedfyUhIY-sTbqGUHugjof6NYkLH7igfTVAoMpIUxDvrP01FQCFRXtEjEAzhQdMUmgZM30vGvEKCJvo0ezt3DvhjdGaaKlu6zAR1Ad9fx7Mw87TPepCmKHOoqwAm8Ig", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nova.collect.igodigital.com/c2/1060694/track_page_view?payload=%7B%22search%22%3A%22air%2520conditioner%22%2C%22title%22%3A%22Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner%22%2C%22referrer%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%22%22%2C%22known_state%22%3A%22%22%7D%7D%2C%22child_ids%22%3A%5B%221370143%22%5D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalstdomain", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC65aa80b0ba084b2c96fc825c1ccec785-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCffc5f8f812ee4f5f9292cf88c51613cc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC270015e98019439f833fc3d6ef7f5877-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-6450450&l=googleDataLayer", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collector_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_9");
    ns_web_url ("index_9",
        "URL=https://www.facebook.com/tr/",
        "METHOD=POST",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-Dest:iframe",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=fr",
        BODY_BEGIN,
            "id=1128484153951961&ev=Microdata&dl=https%3A%2F%2Fwww.lowes.com%2F&rl=&if=false&ts=1628659851205&cd%5BDataLayer%5D=%5B%5D&cd%5BMeta%5D=%7B%22title%22%3A%22Lowe%27s+Home+Improvement%22%2C%22meta%3Adescription%22%3A%22Shop+tools%2C+appliances%2C+building+supplies%2C+carpet%2C+bathroom%2C+lighting+and+more.+Pros+can+take+advantage+of+Pro+offers%2C+credit+and+business+resources.%22%7D&cd%5BOpenGraph%5D=%7B%22og%3Atitle%22%3A%22Lowe%27s+Home+Improvement%22%2C%22og%3Atype%22%3A%22Home+Page%22%2C%22og%3Aurl%22%3A%22https%3A%2F%2Fwww.lowes.com%22%2C%22og%3Asite_name%22%3A%22Lowe%27s%22%2C%22og%3Aimage%22%3A%22http%3A%2F%2Flda.lowes.com%2Fis%2Fimage%2FLowes%2FOG-HOMEPAGE%3Fscl%3D1%22%2C%22og%3Adescription%22%3A%22Celebrate+Lowe%E2%80%99s+first+SpringFest+event+%E2%80%93+a+festival+of+fun+and+savings+for+your+home+and+garden.+Get+deals+on+mulch%2C+soil%2C+power+equipment%2C+and+more.%22%7D&cd%5BSchema.org%5D=%5B%5D&cd%5BJSON-LD%5D=%5B%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%2F%22%2C%22%40type%22%3A%22Organization%22%2C%22name%22%3A%22Lowe%27s%22%2C%22alternateName%22%3A%22Lowe%27s+Home+Center%22%2C%22LegalName%22%3A%22Lowe%27s+Companies%2C+Inc%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22logo%22%3A%22https%3A%2F%2Fwww.lowescdn.com%2Fimages%2Fui%2FLowesLogo_DT.svg%22%2C%22contactPoint%22%3A%7B%22%40type%22%3A%22ContactPoint%22%2C%22contactType%22%3A%22customer+support%22%2C%22telephone%22%3A%221-800-445-6937%22%2C%22email%22%3A%22%22%7D%2C%22sameAs%22%3A%5B%22https%3A%2F%2Fwww.facebook.com%2Flowes%22%2C%22https%3A%2F%2Ftwitter.com%2Flowes%22%2C%22https%3A%2F%2Fwww.pinterest.com%2Flowes%2F%22%2C%22https%3A%2F%2Finstagram.com%2Floweshomeimprovement%22%2C%22https%3A%2F%2Fwww.youtube.com%2Fuser%2FLowes%22%5D%7D%2C%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%22%2C%22%40type%22%3A%22WebSite%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22potentialAction%22%3A%7B%22%40type%22%3A%22SearchAction%22%2C%22target%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3D%7BsearchTerm%7D%22%2C%22query-input%22%3A%22required+name%3DsearchTerm%22%7D%7D%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659848826&coo=false&es=automatic&tm=3&rqm=formPOST",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-1031919983&l=googleDataLayer&cx=c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC5dd8352b39404066b56280cc4aa704de-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/setting/accountproperties/?cb=lpCb4366x97805", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://publisher.liveperson.net/gs/js/gk_prod.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/le-campaigns/zones?fields=id&fields=zoneValue&cb=lpZonesStaticCB", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("beacon_2");
    ns_web_url ("beacon_2",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector/beacon",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("beacon_2", NS_AUTO_STATUS);
    ns_page_think_time(0.295);

    //Page Auto split for Image Link 'GE 6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner' Clicked by User
    ns_start_transaction("X000143961");
    ns_web_url ("X000143961",
        "URL=https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_uetsid;_uetvid;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;cd_user_id;akavpau_default;mbox;__gads;g_previous;akaalb_prod_dual;bm_sv;IR_12374;_px_4559617368_cs;prodNumber;RT",
        INLINE_URLS,
            "URL=https://www.googleadservices.com/pagead/conversion_async.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCbd6afff198e94e748b5e2fd73f28d207-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X000143961", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_10");
    ns_web_url ("index_10",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659873023&cv=9&fst=1628659873023&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659873028&cv=9&fst=1628659873028&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dpage_view%3Becomm_pagetype%3Dsearch-results%3Becomm_prodid%3D1001307556%2C5000143961%2C5001459511%2C5000151929%2C5000087109%2C5001462705%2C5000143957%2C5000143949%2C5000143951%2C1000760764%2C1000773230%2C5001894855%2C5000151923%2C1001847744%2C5000151925%2C1001861860%2C1001861844%2C5000151927%2C5001055817%2C5000151921%2C1001861828%2C5000087107%2C1000380519%2C5001598713&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://bat.bing.com/p/action/5668750.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=8b883726-e5e7-4ed0-8f1e-35be0fa98430&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&pi=0&lg=en-US&sw=1360&sh=663&sc=24&tl=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&p=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=https%3A%2F%2Fwww.lowes.com%2F&lt=14824&evt=pageLoad&msclkid=N&sv=1&rn=789737", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=8b883726-e5e7-4ed0-8f1e-35be0fa98430&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&pagetype=searchresults&prodid=1001307556%252C5000143961%252C5001459511%252C5000151929%252C50000&ea=event_name&en=Y&evt=custom&msclkid=N&rn=587556", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC07fa4ad32f7b406b8c9c37863504f784-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/wu/392339/onsite/embed.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC75823becabb5495994ee06e85292e064-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCa737427ceb15428aa0cc62aee1513675-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659873023&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&async=1&fmt=3&is_vtc=1&random=3519369411&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659873023&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&async=1&fmt=3&is_vtc=1&random=3519369411&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659873028&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dsearch-results%3Becomm_prodid%3D1001307556%2C5000143961%2C5001459511%2C5000151929%2C5000087109%2C5001462705%2C5000143957%2C5000143949%2C5000143951%2C1000760764%2C1000773230%2C5001894855%2C5000151923%2C1001847744%2C5000151925%2C1001861860%2C1001861844%2C5000151927%2C5001055817%2C5000151921%2C1001861828%2C5000087107%2C1000380519%2C5001598713&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&async=1&fmt=3&is_vtc=1&random=1793481478&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659873028&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=3&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dsearch-results%3Becomm_prodid%3D1001307556%2C5000143961%2C5001459511%2C5000151929%2C5000087109%2C5001462705%2C5000143957%2C5000143949%2C5000143951%2C1000760764%2C1000773230%2C5001894855%2C5000151923%2C1001847744%2C5000151925%2C1001861860%2C1001861844%2C5000151927%2C5001055817%2C5000151921%2C1001861828%2C5000087107%2C1000380519%2C5001598713&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&ref=https%3A%2F%2Fwww.lowes.com%2F&tiba=Air%20conditioner%20at%20Lowes.com%3A%20Search%20Results&async=1&fmt=3&is_vtc=1&random=1793481478&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/us/wu/392339/onsite/generic1627562585749.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data=eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTM2MHg2NjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoWDExOyBMaW51eCB4ODZfNjQpIEFwcGxlV2ViS2l0LzUzNy4zNiAoS0hUTUwsIGxpa2UgR2Vja28pIENocm9tZS85MC4wLjQ0MzAuNjEgU2FmYXJpLzUzNy4zNiIsInNlc3Npb25fcGxhdGZvcm0iOiAiTGludXggeDg2XzY0IiwicmVmZXJyaW5nX3VybCI6ICJodHRwczovL3d3dy5sb3dlcy5jb20vIiwicmVmZXJyaW5nX2RvbWFpbiI6ICJ3d3cubG93ZXMuY29tIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2Mjg2NTk4NzM0NTEiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAtNSwidXNlcl9pZCI6ICIxN2IzM2IxMjRmMDVjZS0wY2ZmYzFiZTQyNmQ2Zi0xNjJjMWEwYy1kYzIzMC0xN2IzM2IxMjRmMTcyYyIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogMzkyMzM3LCJ1cmwiOiAiaHR0cHM6Ly93d3cubG93ZXMuY29tL3NlYXJjaD9zZWFyY2hUZXJtPWFpciUyMGNvbmRpdGlvbmVyIiwid2Vic2l0ZUlkIjogMzkyMzM5LCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7IkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2FtcHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICIwNjA2LTJhOTItYmM3NS1lMTBiLWVhODMtYTMyNS1iMTk3LTJjMzIiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiMTYyODY1OTg1MjM3NiIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJTVUJNSVRURURfREFURSI6ICIifSwiY29va2llX3NpemUiOiAzODUwLCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zOS4wIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zOS4wIiwiaGlzdG9yeV9sZW5ndGgiOiAzLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjI4NjU5ODczMzcwLCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZCI6IG51bGx9Cl19", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_10", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X_2");
    ns_web_url ("X_2",
        "URL=https://bat.bing.com/actionp/0?ti=5668750&Ver=2&mid=8b883726-e5e7-4ed0-8f1e-35be0fa98430&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&evt=pageHide",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID;MR",
        INLINE_URLS,
            "URL=https://pagead2.googlesyndication.com/pcs/activeview?xai=AKAOjstQ2z671TqXrNafTr97XKs-yZoJ4BydxGucC-zX46hXJ9GAWu_KXkwTJpWjQk8OXvyt4KLuFLc25KH5jxzP8V7rz_rhP7B2UqDGUhXaSuyY4CvxFjN6&sig=Cg0ArKJSzDdbKTeD74BEEAE&id=lidartos&mcvt=0&p=199,16,440,1272&asp=217,16,458,1272&mtos=0,0,0,0,0&tos=0,0,0,0,0&v=20210809&bin=7&avms=nio&bs=0,0&mc=0&if=1&app=0&itpl=7&adk=3732882183&rs=4&met=mue&la=1&cr=0&osd=1&uach=WyJMaW51eCIsIiIsIng4NiIsIiIsIjkwLjAuNDQzMC42MSIsW10sbnVsbCxudWxsLG51bGxd&vs=3&eosc=0&eosm=0&rst=1628659861900&dlt=1362&rpt=2843&isd=457&lsd=457&msd=680&r=u&ec=0&speed=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/client.1649e0e81ce77edb3b9c.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lowes15841z.btttag.com/btt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=collection;enabled;sessionID;lowes15841z-txnName;lowes15841z-BrowserVersion", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/p13n/V2.4.0-B24/clientlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;mbox;__gads;g_previous;bm_sv;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/3024657c-445c-4b56-ad0a-c1ec6ffda130/42234207.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;mbox;__gads;g_previous;bm_sv;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT", END_INLINE,
            "URL=https://lda.lowes.com/is/image/Lowes/credit-etl-pdp-dp18-292895-dt?scl=1&fmt=png8", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;mbox;__gads;g_previous;bm_sv;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/react.f516469b.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/vendors~pd~review.62df0247.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/vendors~pd.ddcb957f.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/pd.7d91d31a.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/vendors.593e015e.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.go-mpulse.net/boomerang/W8H5V-D6KN9-TTLED-Y3VKD-B2SQA", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/client.8fe3df0e.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/jquery-common.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/notice?domain=lowes.com&c=teconsent&pn=1&text=true&pcookie&gtm=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/mfe/stores_react/7_0_6-alpha_0/cos.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("config_json_3");
    ns_web_url ("config_json_3",
        "URL=https://c.go-mpulse.net/api/config.json?key=W8H5V-D6KN9-TTLED-Y3VKD-B2SQA&d=www.lowes.com&t=5428866&v=1.720.0&sl=1&si=bde4fb69-2075-4aef-b0c6-45081221dd74-qxntz2&bcn=%2F%2F6852bd0e.akstat.io%2F&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,History,Angular,Backbone,Ember,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,Early,EventTiming,LOGN&acao=&ak.ai=299019",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://www.lowescdn.com/www/node/rnr-pres/3.7.4/question.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/exp-target/2.0.11/exp.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/recs/micro-app/1.4.29/recommendations.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/launch-a30f5aebfe36.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/mnppixelfiringlibrary/V1.01.19-B12/mnppixellibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/cart/fragment/modules?feature=installleads&source=script", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;bm_sv;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;akaalb_prod_dual;RT", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/atc/21.24.7/client.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/servicediscovery/21.26.6/servicediscovery.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/images/ui/loading.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/discontinuedReco.40bfe59d.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/vendors~salsify.61a25777.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/node/pdp/gcp/helix/2.584.0/salsify.bfb310cc.chunk.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d39vf9bwtb4sua.cloudfront.net/ui/widgets/lowes/product.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("config_json_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("seo_meta");
    ns_web_url ("seo_meta",
        "URL=https://www.lowes.com/pd/5000143961/seo-meta",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("seo_meta", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X000143961_2");
    ns_web_url ("X000143961_2",
        "URL=https://www.lowes.com/pd/parts-finder-check/5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X000143961_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X000143961_3");
    ns_web_url ("X000143961_3",
        "URL=https://www.lowes.com/pd/badging-check/5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X000143961_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("prod_4");
    ns_web_url ("prod_4",
        "URL=https://www.lowes.com/rnr/r/get-by-product/5000143961/seopdp/prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("prod_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("prod_5");
    ns_web_url ("prod_5",
        "URL=https://www.lowes.com/rnr/r/get-count/5000143961/pdp/prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("prod_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Guest");
    ns_web_url ("Guest",
        "URL=https://www.lowes.com/pd/5000143961/productdetail/1985/Guest",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("Guest", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X000143961_4");
    ns_web_url ("X000143961_4",
        "URL=https://www.lowes.com/pd/compareProductIds/5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_default;RT;akavpau_cart;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X000143961_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("v2_0_3");
    ns_web_url ("v2_0_3",
        "URL=https://www.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("v2_0_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Guest_2");
    ns_web_url ("Guest_2",
        "URL=https://www.lowes.com/pd/5000143961/productdetail/1985/Guest",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv",
        INLINE_URLS,
            "URL=https://www.lowescdn.com/www/node/purchase/installleads/21.28.10/installleads.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=mthb", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;bm_sv", END_INLINE
    );

    ns_end_transaction("Guest_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Guest_3");
    ns_web_url ("Guest_3",
        "URL=https://www.lowes.com/pd/5000143961/productdetail/1985/Guest",
        INLINE_URLS,
            "URL=https://mobileimages.lowes.com/productimages/3024657c-445c-4b56-ad0a-c1ec6ffda130/42234207.jpg?size=mthb", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;bm_sv", END_INLINE,
            "URL=https://www.lowescdn.com/gauge/1.4.0/js/index.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://a.sellpoint.net/c/6715/sp.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js?v=3.42&client=gme-loweshomecenters", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("Guest_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("experiments_3");
    ns_web_url ("experiments_3",
        "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akaalb_prod_dual;akavpau_default;bm_sv"
    );

    ns_end_transaction("experiments_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_7");
    ns_web_url ("delivery_7",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"2db282caca764830b77d0b83004809dd","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referringUrl":"https://www.lowes.com/search?searchTerm=air%20conditioner"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"7ED7F8A14085DB7C-30C50A7480C1DEE3"}},"execute":{"pageLoad":{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"portable_air_conditioners","user.categoryId":"portable_air_conditioners","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""}}},"prefetch":{"views":[{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"portable_air_conditioners","user.categoryId":"portable_air_conditioners","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""}}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_7", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_8");
    ns_web_url ("delivery_8",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"5048b283c7644f6eac1d45f2f318520d","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referringUrl":"https://www.lowes.com/search?searchTerm=air%20conditioner"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"7ED7F8A14085DB7C-30C50A7480C1DEE3"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"portable_air_conditioners","user.categoryId":"portable_air_conditioners","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""},"index":0,"name":"lwscom_global"}]}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("delivery_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_9");
    ns_web_url ("delivery_9",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"170c8a48783f4c0b825e869ae0cb5a15","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referringUrl":"https://www.lowes.com/search?searchTerm=air%20conditioner"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"7ED7F8A14085DB7C-30C50A7480C1DEE3"}},"execute":{"mboxes":[{"parameters":{"entity.id":"5000143961","user.categoryId":"portable_air_conditioners","entity.categoryId":"portable_air_conditioners","user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""},"index":0,"name":"lwscom_pdp"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_10");
    ns_web_url ("delivery_10",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"23ac795df0964b279510c0a4358324bf","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referringUrl":"https://www.lowes.com/search?searchTerm=air%20conditioner"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"7ED7F8A14085DB7C-30C50A7480C1DEE3"}},"execute":{"mboxes":[{"parameters":{"entity.id":"5000143961","user.categoryId":"portable_air_conditioners","entity.categoryId":"portable_air_conditioners","user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""},"index":0,"name":"dp_lwscom_pdp_credit_01"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_10", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Authenticated");
    ns_web_url ("Authenticated",
        "URL=https://www.lowes.com/pd/compareProductData/5000143961/1985/Authenticated?cid=5000143963,5000143965,5000087105",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("Authenticated", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xc4d60e8_af11_4882_8069_1167_4");
    ns_web_url ("Xc4d60e8_af11_4882_8069_1167_4",
        "URL=https://www.lowes.com/p13n/audiences/dbid/0c4d60e8-af11-4882-8069-11671292895b",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("Xc4d60e8_af11_4882_8069_1167_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X000143961_5");
    ns_web_url ("X000143961_5",
        "URL=https://www.lowes.com/pers/helix/v2/5000143961?categoryId=portable_air_conditioners&channel=desktop&dbid=0c4d60e8-af11-4882-8069-11671292895b&domain=www.lowes.com&location=lws_pdp_recommendations_aboveproductimage_1&productAvailable=true&stateCode=AK&storeId=1985",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X000143961_5", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X_225001690689_22__225001690");
    ns_web_url ("X_225001690689_22__225001690",
        "URL=https://www.lowes.com/pd/protectionplan/5000143961/[%225001690689%22,%225001690663%22]",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X_225001690689_22__225001690", NS_AUTO_STATUS);

    //Page Auto split for Ajax Header = XMLHttpRequest
    ns_start_transaction("additionalServices");
    ns_web_url ("additionalServices",
        "URL=https://www.lowes.com/purchase/api/items/5000143961/additionalServices?storeNumber=1985&quantity=1&stateCode=AK",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=x-requested-with:XMLHttpRequest",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;mbox;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("additionalServices", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_11");
    ns_web_url ("delivery_11",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"c00ff633172648168592fd557ae4e32b","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referringUrl":"https://www.lowes.com/search?searchTerm=air%20conditioner"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"7ED7F8A14085DB7C-30C50A7480C1DEE3"}},"execute":{"mboxes":[{"parameters":{"entity.id":"5000143961","platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"portable_air_conditioners","user.categoryId":"portable_air_conditioners","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"heating_cooling","siteSectionTwo":"air_conditioners_fans","siteSectionThree":"room_air_conditioners","siteSectionFour":"portable_air_conditioners"},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"99701","searchTerm":""},"index":0,"name":"pd-delivery-info-banner"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_11", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X491c344_6731_43df_81a0_3252_3");
    ns_web_url ("X491c344_6731_43df_81a0_3252_3",
        "URL=https://www.lowes.com/baymax/content/6491c344-6731-43df-81a0-32524f03cc4f?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X491c344_6731_43df_81a0_3252_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X2a69561_e095_4d08_b3a1_b4aa");
    ns_web_url ("X2a69561_e095_4d08_b3a1_b4aa",
        "URL=https://www.lowes.com/baymax/content/52a69561-e095-4d08-b3a1-b4aac1bcfcf9?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X2a69561_e095_4d08_b3a1_b4aa", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("afc2538d_41c2_48a7_a7d6_a8f9");
    ns_web_url ("afc2538d_41c2_48a7_a7d6_a8f9",
        "URL=https://www.lowes.com/baymax/content/afc2538d-41c2-48a7-a7d6-a8f931472459?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("afc2538d_41c2_48a7_a7d6_a8f9", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X5b1ef6b_2319_4645_9afd_39eb_2");
    ns_web_url ("X5b1ef6b_2319_4645_9afd_39eb_2",
        "URL=https://www.lowes.com/baymax/content/95b1ef6b-2319-4645-9afd-39ebb4257636?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X5b1ef6b_2319_4645_9afd_39eb_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("d55f0191_4e9c_41e8_a79a_59ec_3");
    ns_web_url ("d55f0191_4e9c_41e8_a79a_59ec_3",
        "URL=https://www.lowes.com/baymax/content/d55f0191-4e9c-41e8-a79a-59ec06dba439?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("d55f0191_4e9c_41e8_a79a_59ec_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X02a512e_74ef_43dc_a3bb_e59a_3");
    ns_web_url ("X02a512e_74ef_43dc_a3bb_e59a_3",
        "URL=https://www.lowes.com/baymax/content/202a512e-74ef-43dc-a3bb-e59ab7541cf8?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X02a512e_74ef_43dc_a3bb_e59a_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e1f4d7bd_9a2b_4611_86d0_d11d_2");
    ns_web_url ("e1f4d7bd_9a2b_4611_86d0_d11d_2",
        "URL=https://www.lowes.com/baymax/content/e1f4d7bd-9a2b-4611-86d0-d11dc250b78e?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("e1f4d7bd_9a2b_4611_86d0_d11d_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xbe6ff15_f7fe_4d9a_a33e_57d4");
    ns_web_url ("Xbe6ff15_f7fe_4d9a_a33e_57d4",
        "URL=https://www.lowes.com/baymax/content/3be6ff15-f7fe-4d9a-a33e-57d41859e3d3?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("Xbe6ff15_f7fe_4d9a_a33e_57d4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X62c48ab_cd97_44b4_8c23_2ecb_3");
    ns_web_url ("X62c48ab_cd97_44b4_8c23_2ecb_3",
        "URL=https://www.lowes.com/baymax/content/562c48ab-cd97-44b4-8c23-2ecb1d8511af?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X62c48ab_cd97_44b4_8c23_2ecb_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("f608fc1b_01c8_4851_936e_57f0");
    ns_web_url ("f608fc1b_01c8_4851_936e_57f0",
        "URL=https://www.lowes.com/baymax/content/f608fc1b-01c8-4851-936e-57f0c5ad40cb?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("f608fc1b_01c8_4851_936e_57f0", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X589aa58_907d_4faf_ad10_fee7");
    ns_web_url ("X589aa58_907d_4faf_ad10_fee7",
        "URL=https://www.lowes.com/baymax/content/9589aa58-907d-4faf-ad10-fee71831e0af?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("X589aa58_907d_4faf_ad10_fee7", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e794234e_8f18_4f22_9df3_309c_2");
    ns_web_url ("e794234e_8f18_4f22_9df3_309c_2",
        "URL=https://www.lowes.com/baymax/content/e794234e-8f18-4f22-9df3-309ca853acf2?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;akavpau_default;mbox;akaalb_prod_dual;bm_sv"
    );

    ns_end_transaction("e794234e_8f18_4f22_9df3_309c_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("events");
    ns_web_url ("events",
        "URL=https://ls.chatid.com/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"app":"sxp_sdk","channel":"s-881400d6-9158-4ed0-bdca-17f321f14d04","csid":"3a2dd283-a5e0-4975-8767-569a0913fcb2","timestamp":1628659878.606,"logs":[{"code":"sdk_init","properties":{"languageCode":"en-US","clientId":"s-881400d6-9158-4ed0-bdca-17f321f14d04","enhancedContent":{"idType":"LOWESID"}},"context":{"page":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","title":"GE 6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner in the Portable Air Conditioners department at Lowes.com"}},"timestamp":1628659878.606}]}",
        BODY_END
    );

    ns_end_transaction("events", NS_AUTO_STATUS);

    //Page Auto split for Method = HEAD
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=https://salsify-ecdn.com/sdk/s-881400d6-9158-4ed0-bdca-17f321f14d04/en-US/BTF/LOWESID/2759118-83-APFD06JASW/index.html",
        "METHOD=HEAD",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://content.syndigo.com/site/9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66/syndi.min.mjs?cv=452405", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_7");
    ns_web_url ("bundle_7",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5771705782935552&Seq=3&PageStart=1628659863351&PrevBundleTime=1628659872400&DeltaT=9466",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_7_main_url_1_1628659912553.body",
        BODY_END
    );

    ns_end_transaction("bundle_7", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("page_3");
    ns_web_url ("page_3",
        "URL=https://rs.fullstory.com/rec/page",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"OrgId":"Q8RZE","UserId":"4938477446668288","Url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","Base":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","Width":1273,"Height":501,"ScreenWidth":1360,"ScreenHeight":663,"Referrer":"https://www.lowes.com/search?searchTerm=(blocked)","Preroll":6098,"Doctype":"<!DOCTYPE html>","CompiledVersion":"11e53d809a","CompiledTimestamp":1628185160}",
        BODY_END,
        INLINE_URLS,
            "URL=https://static.ecorebates.com/ui/widgets/lowes/styles/ecorebates.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://static.ecorebates.com/ui/widgets/lowes/vendor/font-awesome/css/font-awesome.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://static.ecorebates.com/ui/widgets/lowes/styles/pdp.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://content.syndigo.com/site/common/1.0.197/translations/en.min.mjs?cv=452405&hn=www.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("page_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_8");
    ns_web_url ("bundle_8",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=6145356814393344&Seq=1&PageStart=1628659879543&PrevBundleTime=0&LastActivity=1132",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_8_main_url_1_1628659912558.body",
        BODY_END
    );

    ns_end_transaction("bundle_8", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X759118_83_APFD06JASW_json");
    ns_web_url ("X759118_83_APFD06JASW_json",
        "URL=https://content.syndigo.com/page/9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66/2759118-83-APFD06JASW.json?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.8753835670313805&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://mobileimages.lowes.com//productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;mbox;bm_sv", END_INLINE,
            "URL=https://content.syndigo.com/site/common/1.0.197/experience/hotspots/hotspots.min.mjs?cv=452405&hn=www.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com//productimages/0c5e9520-dd7c-4e92-84b1-7ac9baea0055/16819478.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;mbox;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com//productimages/822a741e-a28e-4a3b-b5e9-2de62d2b7474/16819467.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;mbox;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com//productimages/e1c67bfc-9998-4f83-920d-ed8419bd1bfd/17213811.jpg?size=pdhi", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;mbox;bm_sv", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X759118_83_APFD06JASW_json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("productRebateDetails_json_js");
    ns_web_url ("productRebateDetails_json_js",
        "URL=https://lowes.ecorebates.com/api/search/lowes/productRebateDetails.json;jsessionid=?filter_rebate_consumer_type=residential&retryZip=true&skus=5000143961&uiContext=PDP&jsoncallback=angular.callbacks._0",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("productRebateDetails_json_js", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("productRebateDetails_json_js_2");
    ns_web_url ("productRebateDetails_json_js_2",
        "URL=https://lowes.ecorebates.com/api/search/lowes/productRebateDetails.json;jsessionid=?filter_rebate_consumer_type=residential&retryZip=true&skus=5000143961&uiContext=PDP&jsoncallback=angular.callbacks._1",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://cdn.krxd.net/partnerjs/xdi/proxy.3d2100fd7107262ecb55ce6847f01fa5.html#!kxcid=r0usxrln4&kxt=https%3A%2F%2Fwww.lowes.com&kxcl=cdn&kxp=", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("productRebateDetails_json_js_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("styles_json");
    ns_web_url ("styles_json",
        "URL=https://content.syndigo.com/site/9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66/styles.json?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.4645718006284105&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://event.syndigo.cloud/event/p.gif?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=400E2159-1751-4E87-9F62-5AF0506A3374&dt=0.003&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.7173362881874321&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("styles_json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxImpression_2");
    ns_web_url ("mboxImpression_2",
        "URL=https://www.lowes.com/gauge/link/mboxImpression",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"3","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:18.631Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]}}},"track":{"recommendations":[{"algorithm":"compare_items","ids":["5000143961","5000143963","5000143965","5000087105"]}],"location":"pdp","name":"compare_items"},"path":"/link/mboxImpression","method":"post"}",
        BODY_END
    );

    ns_end_transaction("mboxImpression_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_20");
    ns_web_url ("baymax_20",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"4","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:18.836Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]}}},"track":{"baymaxId":"BYM-215:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_20", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("serviceComponent");
    ns_web_url ("serviceComponent",
        "URL=https://www.lowes.com/gauge/link/serviceComponent",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"6","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:18.970Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"}]}},"track":{"linkName":"services_component_impression","serviceGroup":[{"type":"epp","serviceSubOption":"3_year_extended_protection_plan"}]},"path":"/link/serviceComponent","method":"post"}",
        BODY_END
    );

    ns_end_transaction("serviceComponent", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("adserving");
    ns_web_url ("adserving",
        "URL=https://d.us.criteo.com/delivery/adserving?criteo-partner-id=75776&nocall=cd&retailer-visitor-id=7493495&environment=d&item=5000143961&price=349&availability=1&page-id=viewItem_API_desktop&event-type=viewItem",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("adserving", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("searchClickthrough");
    ns_web_url ("searchClickthrough",
        "URL=https://www.lowes.com/gauge/pageview/productDetail/serviceApi/searchClickthrough",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv;ecrSessionId",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/searchClickthrough_url_0_1_1628659912561.body",
        BODY_END
    );

    ns_end_transaction("searchClickthrough", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_11");
    ns_web_url ("index_11",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/index_11_url_0_1_1628659912562.body",
        BODY_END
    );

    ns_end_transaction("index_11", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_21");
    ns_web_url ("baymax_21",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"5","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:18.901Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-291:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_21", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_22");
    ns_web_url ("baymax_22",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"7","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.064Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-307:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_22", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_23");
    ns_web_url ("baymax_23",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"8","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.188Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-309:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_23", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_24");
    ns_web_url ("baymax_24",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"9","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.193Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-274:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_24", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_25");
    ns_web_url ("baymax_25",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;g_previous;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;RT;akavpau_cart;mbox;akavpau_default;salsify_session_id;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"10","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.207Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-311:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC72d2ec0cab6f4408838d32aa7124111c-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/optout_check?callback=Krux.ns.lowes.kxjsonp_optOutCheck", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://cdn.krxd.net/userdata/get?pub=e30196c7-5053-416c-94a4-c1acfb09b619&callback=Krux.ns.lowes.kxjsonp_userdata", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://beacon.krxd.net/pixel.gif?source=smarttag&fired=user_data_timeout&confid=r0usxrln4&_kpid=e30196c7-5053-416c-94a4-c1acfb09b619&_kcp_s=Lowes&_kcp_d=www.lowes.com&_knifr=1&_kpref_=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&_kua_kx_tz=300&geo_country=in&geo_region=or&_kua_kx_lang=en-us&_kua_kx_tech_browser_language=en-us&_kua_kx_geo_country=in&_kua_kx_geo_region=or&_kua_kx_tech_browser=Chrome%209&_kua_kx_tech_manufacturer=Other&_kua_kx_tech_device=Computer&_kua_kx_tech_os=Linux&_kua_lowes_pdp_profile.user.CurrentStore.zip=99701&_kua_lowes_pdp_profile.user.storeNumber=1985&_kua_userType=diy&_kua_kx_whistle=0&_kpa_domain=lowes.com&_kpa_lowes_page.pageType=product-display&_kpa_lowes_page.sysEnv=lowes.com&_kpa_lowes_pdp_page.pageType=product-display&_kpa_lowes_pdp_page.siteSection=heating_cooling&_kpa_lowes_pdp_page.siteSectionTwo=air_conditioners_fans&_kpa_lowes_pdp_page.siteSectionThree=room_air_conditioners&_kpa_lowes_pdp_page.siteSectionFour=portable_air_conditioners&_kpa_lowes_pdp_products.productId=5000143961&_kpa_lowes_pdp_products.pageName=6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner&_kpa_lowes_pdp_products.itemNumber=2759118&_kpa_lowes_pdp_products.brand=ge&_kpa_lowes_pdp_products.sellingPrice=349&t_navigation_type=0&t_dns=0&t_tcp=0&t_http_request=-1&t_http_response=31&t_content_ready=2706&t_window_load=8973&t_redirect=0&interchange_ran=false&userdata_was_requested=true&userdata_did_respond=false&store_user_after=wkiiqd06g&sview=3&kplt0=32022&kplt1=35845&kplt2=31609&kplt3=32302&kplt4=32892&kplt5=32365&kplt6=32880&kplt7=45511&kplt8=46780&kplt9=46851&kplt10=47456&jsonp_requests=https%3A%2F%2Fconsumer.krxd.net%2Fconsent%2Fget%2Fe30196c7-5053-416c-94a4-c1acfb09b619%2C422%2Chttps%3A%2F%2Fbeacon.krxd.net%2Foptout_check%2CNaN%2Chttps%3A%2F%2Fcdn.krxd.net%2Fuserdata%2Fget%2CNaN", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE,
            "URL=https://assets.revlifter.io/0l554347-da15-447f-9091-6e8941024cdc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC1c11ce2c7e414c61b1d616140e23f97f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_25", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_26");
    ns_web_url ("baymax_26",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;akaalb_prod_dual;g_previous;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"11","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.219Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-267:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_26", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("financialMessage");
    ns_web_url ("financialMessage",
        "URL=https://www.lowes.com/gauge/link/financialMessage",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;akaalb_prod_dual;g_previous;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"13","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.319Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"}]}},"track":{"financialMessage":"GEN-3-6-2021_or_5_percent_off","priceType":"reg","linkName":"promo_and_financing_impression"},"path":"/link/financialMessage","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3f2f71a5d0404175929be845aae79016-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCce86c7e82e1c4d68a5fc6fba2fe4d928-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC3a17c74de0ca481cb77cb434c4b501fc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC420597ffe0644954993e7b551468eebb-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.89cd5bf4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fdz.flashtalking.com/services/lowes/FBI-2422_segment/?&U1=&U2=&U3=1985&U4=99701&U5=&U6=&U7=&U8=&U9=&U10=&U11=5000143961&U14=ge&U15=product-display&U16=air_conditioners_fans&U17=room_air_conditioners&U19=&U20=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", END_INLINE,
            "URL=https://servedby.flashtalking.com/spot/1/10376;90692;9350/?spotName=Product_Pages&&U14=ge&U1=&U2=&U3=99701&U7=6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner&U10=room_air_conditioners&U11=2759118-83-APFD06JASW&U8=heating_cooling&U9=air_conditioners_fans&U15=&U16=&U17=&cachebuster=cachebuster=5483561161111112", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", END_INLINE
    );

    ns_end_transaction("financialMessage", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("index_12");
    ns_web_url ("index_12",
        "URL=https://ct.pinterest.com/user/?tid=2615619520270&pd=%7B%22page%22%3A%22product-display%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&cb=1628659883181",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://d.impactradius-event.com/A2490986-6272-4119-80d2-3e11fba8509a1.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC61df4c46e1804f5885d1d9487d3249f5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?tid=2615619520270&pd=%7B%22page%22%3A%22product-display%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner%22%2C%22if%22%3Afalse%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659883185", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?event=pagevisit&ed=%7B%22customer_type%22%3A%22%22%2C%22known_state%22%3A%22%22%2C%22identity_id%22%3A%22%22%2C%22line_items%22%3A%5B%7B%22product_id%22%3A%225000143961%22%2C%22product_name%22%3A%226100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner%22%7D%5D%7D&tid=2615619520270&pd=%7B%22page%22%3A%22product-display%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&ad=%7B%22loc%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner%22%2C%22if%22%3Afalse%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659883186", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_12", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_27");
    ns_web_url ("baymax_27",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;g_previous;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"14","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.335Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"}]}},"track":{"baymaxId":"BYM-316:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_27", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_28");
    ns_web_url ("baymax_28",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;g_previous;akaalb_prod_dual;bm_sv;IR_12374",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"15","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.348Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-316","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-347:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_28", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_13");
    ns_web_url ("index_13",
        "URL=https://ct.pinterest.com/md/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/index_13_main_url_1_1628659912567.body",
        BODY_END
    );

    ns_end_transaction("index_13", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_29");
    ns_web_url ("baymax_29",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;IR_12374;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;akaalb_prod_dual;g_previous;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"12","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:19.227Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"}]}},"track":{"baymaxId":"BYM-334:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCacde2c6c5c9848b490f9b665b2b5750f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/common.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/util.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_29", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxLoad_3");
    ns_web_url ("mboxLoad_3",
        "URL=https://www.lowes.com/gauge/link/mboxLoad",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;_px_4559617368_cs;prodNumber;_uetsid;_uetvid;kampyleSessionPageCounter;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;g_previous;akaalb_prod_dual;IR_12374;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"16","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:20.627Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-316","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{"mboxes":"lwscom_global,lwscom_pdp,dp_lwscom_pdp_credit_01,pd-delivery-info-banner"},"path":"/link/mboxLoad","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC40e28284239f4944be946816c3ebdee8-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC17e89cc9a97f49c6bef6e0b05a50ba6b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&2sgme-loweshomecenters&callback=_xdc_._3l9alc&client=gme-loweshomecenters&token=125736", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/625799750871183?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC048b00ad01764079b31c72e0fae5fc9e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC2ec50c6f7acb4c3c8388ac4d697347fa-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC1acc86af333b4a74af8c45df2b3d26b2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC7ca005b6e7114f18a1e7ba41b78dd8b3-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC39ed03d9a7c54207bfd191d1940d916b-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC289cf6dc3ebe40ecb8586a89a037dd31-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://analytics.twitter.com/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tpx_cb=twttr.conversion.loadPixels&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=personalization_id", END_INLINE,
            "URL=https://t.co/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/1128484153951961?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.btttag.com/analytics.rcv?pgNm=product-display&trSeg=eCommerce-www.lowes.com&navStart=1628659872750", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("mboxLoad_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_30");
    ns_web_url ("baymax_30",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST"
    );

    ns_end_transaction("baymax_30", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_31");
    ns_web_url ("baymax_31",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659884344&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=PageView&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659884361&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE
    );

    ns_end_transaction("baymax_31", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("analytics_rcv_3");
    ns_web_url ("analytics_rcv_3",
        "URL=https://d.btttag.com/analytics.rcv?pgNm=product-display&trSeg=eCommerce-www.lowes.com&navStart=1628659872750",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=collection;enabled;sessionID;lowes15841z-txnName;lowes15841z-BrowserVersion",
        BODY_BEGIN,
            "eyJ0aGlzVVJMIjoiaHR0cHM6Ly93d3cubG93ZXMuY29tL3BkL0dFLTYwMDAtQlRVLVBvcnRhYmxlLUFpci1Db25kaXRpb25lci81MDAwMTQzOTYxIiwicGFnZU5hbWUiOiJwcm9kdWN0LWRpc3BsYXkiLCJuc3QiOiIxNjI4NjU5ODcyNzUwIiwidW5sb2FkRXZlbnRTdGFydCI6IjE2Mjg2NTk4NzM2MDYiLCJyZWRpcmVjdFN0YXJ0IjoiMCIsImNfY291bnQiOiIwIiwiY29fY291bnQiOiIwIiwidG90UkQiOiIwIiwiZmV0Y2hTdGFydCI6IjE2Mjg2NTk4NzI3NTIiLCJkb21haW5Mb29rdXBTdGFydCI6IjE2Mjg2NTk4NzI3NTIiLCJjb25uZWN0U3RhcnQiOiIxNjI4NjU5ODcyNzUyIiwic2VjdXJlQ29ubmVjdGlvblN0YXJ0IjoiMCIsInJlcXVlc3RTdGFydCI6IjE2Mjg2NTk4NzI3NTgiLCJyZXNwb25zZVN0YXJ0IjoiMTYyODY1OTg3MzU5MiIsIlJFRSI6IjE2Mjg2NTk4NzM2MjMiLCJCUFQiOiIzMSIsImRvbUxvYWRpbmciOiIxNjI4NjU5ODczNjQzIiwiZG9tSW50ZXJhY3RpdmUiOiIxNjI4NjU5ODc1NDU2IiwiZG9tQ29udGVudExvYWRlZFN0YXJ0IjoiMTYyODY1OTg3Nzg3MCIsImRvbUNvbnRlbnRMb2FkZWRFbmQiOiIxNjI4NjU5ODc3ODc0IiwibG9hZEV2ZW50U3RhcnQiOiIxNjI4NjU5ODgxNzIzIiwibmF2aWdhdGlvblR5cGUiOiIxIiwicmVkaXJlY3RDb3VudCI6IjAiLCJwYWdlVHlwZSI6IkdDUCBQcm9kdWN0IERldGFpbHMgIEhlbGl4IiwicGFnZVZhbHVlIjoiMCIsInBnVG0iOiI4OTczIiwiZG5zIjoiMCIsInRjcCI6IjAiLCJkb20iOiI4MDgwIiwiZkJ5dGUiOiI4MzQiLCJzc2wiOiIwIiwiZmlyc3RQYWludCI6IjEwODMiLCJmQ1BudCI6IjEwODMiLCJmbXAiOiIwIiwidHRpIjoiMTI2NCIsImx0X3R0aSI6IjAiLCJmcHNfdHRpIjoiMTI2NCIsImZwcyI6IjAiLCJGSURzIjoiMCIsIkZJRGQiOiIwIiwiTENQIjoiMTI4NCIsIkNMU2UiOiI2NTUxIiwiQ0xTIjoiMC4wNjI0MjYzMTk3MzIzMzQ5MTYiLCJUQlQiOiIyNCIsIlNjcm5IIjoiNjYzIiwiU2NyblciOiIxMzYwIiwicFdTeiI6IjI1NTQ1NyIsInBTeiI6IjEwMDQyNTYiLCJJTUFHRV9TSVpFIjoiMCIsIkpTX1NJWkUiOiIxMzM5NDEiLCJlbGVtZW50Q291bnQiOiIxNDUiLCJjYXJ0VmFsdWUiOiIwIiwiT051bUJyIjoiMCIsIm9yZGVyVE5EIjoiMCIsImVUIjoiNSIsInNpdGVJRCI6Imxvd2VzMTU4NDF6IiwidHhuTmFtZSI6ImVDb21tZXJjZS13d3cubG93ZXMuY29tIiwiY2FtcGFpZ24iOiIiLCJBQiI6IkRlZmF1bHQiLCJEQ1RSIjoiZWFzdCIsInRvcCI6Ii04MjEwIiwiYnYiOiIwIiwiYnZ6biI6IkNocm9tZS05MCIsInR1bCI6IjAiLCJFVU9TIjoiTGludXgiLCJjdXJyZW5jeUNvZGUiOiIiLCJzSUQiOiIzMTcyMzU2NzY1ODE2NTEzNjkiLCJnSUQiOiIzMTcyMzU2NzY1ODE2NTEzNjkiLCJTSGkiOiI2NjMiLCJTV2kiOiIxMzYwIiwiQ1NJRCI6IjAiLCJDVjEiOiIwYzRkNjBlOC1hZjExLTQ4ODItODA2OS0xMTY3MTI5Mjg5NWIiLCJDVjIiOiIwIiwiQ1YzIjoiMCIsIkNWNCI6IjAiLCJDVjUiOiIwIiwiQ1Y2Ijoic3RhYmxlIiwiQ1Y3IjoiQ29va2llIFByZXNlbnQiLCJDVjgiOiJaaXBwZWQiLCJDVjkiOiJ1bmRlZmluZWQiLCJDVjEwIjoiTmFtb2dvbyBPbiIsIkNWMTEiOiIwIiwiQ1YxMiI6IjAiLCJDVjEzIjoiMCIsIkNWMTQiOiIwIiwiQ1YxNSI6IjAiLCJDTjEiOiIwIiwiQ04yIjoiMCIsIkNOMyI6IjAiLCJDTjQiOiIwIiwiQ041IjoiMCIsIkNONiI6IjAiLCJDTjciOiIwIiwiQ044IjoiMCIsIkNOOSI6IjAiLCJDTjEwIjoiMCIsIkNOMTEiOiIwIiwiQ04xMiI6IjAiLCJDTjEzIjoiMCIsIkNOMTQiOiIwIiwiQ04xNSI6IjAiLCJDTjE2IjoiMCIsIkNOMTciOiIwIiwiQ04xOCI6IjAiLCJDTjE5IjoiMCIsIkNOMjAiOiIwIiwid2NkIjoiMCIsIkxUTSI6IjE2Mjg2NTk4NzM4MzUiLCJXQ0R0dCI6ImMiLCJOVlNUUiI6IjAiLCJSViI6IjAiLCJjb2xsZWN0QXQiOiIxMDAiLCJDbXBTIjoiRGlyZWN0IiwiQ21wTSI6Ik5vbmUiLCJDbXBOIjoiIiwiUmVmVVJMIjoiaHR0cHM6Ly93d3cubG93ZXMuY29tL3NlYXJjaD9zZWFyY2hUZXJtPWFpciUyMGNvbmRpdGlvbmVyIn0=",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=ViewContent&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659884372&cd[customer_type]=&cd[known_state]=&cd[identity_id]=&cd[content_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[content_type]=product&cd[content_category]=heating_cooling&cd[product_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[currency]=USD&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=ViewContent&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659884374&cd[customer_type]=&cd[known_state]=&cd[identity_id]=&cd[content_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[content_type]=product&cd[content_category]=heating_cooling&cd[product_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[currency]=USD&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://apps.bazaarvoice.com/deployments/Lowes/main_site/production/en_US/bv.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC59d4420b823e47f1910c7b3645160666-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb493cf1ad0b54f20b2e824242e38a4d2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC54531dfbcb804f1e946f0fe9300aaa29-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=22554410", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.agkn.com/pixel/9458/?che=4939538719690071&mcvsid=71747673865418841840298191736677393887", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=ab;u", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCb3ad2a2bd3ca47dfbdb42be185649f14-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://login.dotomi.com/ucm/UCMController?dtm_com=28&dtm_cid=2621&dtm_cmagic=cc7090&dtm_format=5&dtmc_product_id=5000143961&dtmc_fulfillment_channel=NON&dtmc_brand=ge&dtmc_department=heating_cooling&dtmc_category=air_conditioners_fans&dtmc_sub_category=room_air_conditioners&dtm_fid=101&cli_promo_id=product-display&dtmc_ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&dtmc_loc=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&canonical_url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://wkxppshj-qx.global.ssl.fastly.net/nrse.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/22554410/configuration/applications/taglets/.jsonp?v=2.0&df=undefined&b=undefined", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/", "METHOD=POST", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Origin:https://www.lowes.com", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr",
            BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/analytics_rcv_3_url_13_1_1628659912569.body",
        BODY_END,
             END_INLINE,
            "URL=https://client.perimeterx.net/PX61WVsvi8/main.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC87fa49f39baf4b19b54be6ddb7c365d5-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("analytics_rcv_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("LLODOWS854_json_3");
    ns_web_url ("LLODOWS854_json_3",
        "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LLODOWS854.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://colrep.sitelabweb.com/rp/?d=pCL9aA3XOC2P8dKEvoO1ZTGmLaIPjpSNFMTAMJrn0b7IZBS4YcJs1XfUMADdBY7f1o70ZCzphJ6H0_TB66mFLcKq9chVJGGyybaemmjBJL2I_MW1zlxQkBTlaNJ4mn~ZPCTOTNHmmojJPO2HWPrPpmCU9PmBCdKjnb8x~GEg8UJX1Y8ZRMXS_MXiu_dkMNmbmNZ45ZOZ6LjAMNnm4_OUgDDCdNJOwUjV4CUBKeqEsowELBk3eL30lXfABJDOMJXrCW7IWIGHWdsXlXfBTBDi4NnupW7IWFXiYbbLXjSJjOX_AMo01ZdcUBz3NM30ocyhsGU4AMoqlZOBSQWPNJo8wb~V6O2IEJXmwcihYR2ZNJo9GZPAH9CERNHqwYOYX8TpYUO5miTJC6TTgNXq3YOMd8mDJcML4oCVHQ2vKbnVwWSVcQWxmMZDmYvB5BThLO_rj_iZKNWlZZZDhYPl6ATqMNnnjZ7QMS2HMPrG2YPYPBWOVZXnilwVKCGyLMZ0yjSMTATvAMnq2_7Ae8nifPoCmlDJ8MjBDdLvwpcUZFS-_R2KybjdSRyFHb76lpc5JR2YNM4Pwj8ULEknfLX0wZtATFly6Lq1vnjR4Lm5ALYjppN1oR2cMasHpm~58QidNRnywZtAXCDtiN34moCVAQjBKJqEzeA5MOWudZrG9jiFFQ2dBY6ixb7MXOTxeMoOziPR7LzaBNnEikOQZNjuJZo9kY9J8LThMJqrhZd0ZBW-dNo42X~EPMGWRZn05kRIbB2paYrKyj9QLMWOTMWZzZ98W8muWd6bkXv1MMXXOa_duW7IZBzmNNZKxYfN4AGa8NK02aAJICDuKMO5lXiQP9me6NnilZOMXCjphN3OxYvAL6TndUIqlZOMZBW-dNo42X~EPMGWRZn05kRIbB2paYrKyj9QLMWOTMWZzZ98W8TpaMoO5XPkJADhUOW1spd1bSn0NJ79z_TRLRWdBbrn2b7AMSm0YbP90_OZLOTAM&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("LLODOWS854_json_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_9");
    ns_web_url ("bundle_9",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=6145356814393344&Seq=2&PageStart=1628659879543&PrevBundleTime=1628659880837&LastActivity=28",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_9_main_url_1_1628659912578.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/setting/accountproperties/?cb=lpCb24020x21691", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://publisher.liveperson.net/gs/js/gk_prod.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/le-campaigns/zones?fields=id&fields=zoneValue&cb=lpZonesStaticCB", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_3");
    ns_web_url ("collector_3",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqCgIHEB4QVhAISRBiagsDEAgDAQQCHhBiagsAEAgEBAEeEGJqAAQLEAgDAAoKHhBiagAFAhAIBAEEHhBiagMKBBAIAwAKCh4QYmoDCgcQCAcCAx4QYmoAAQAQCAMACgoeEGJqAAEDEAgHAgMeEGJqCwIKEAgQB1dQAQNXBwIfVFMEBx8DA1dQH1NQUwMfUQcKCwRWVARQUFQLEB4QYmoLAgsQCBAGCwQDVgICAh9UUwQHHwMDV1AfUFQFUx8BCwcDBVRTBAcEAwoQHhBiagsLBBAIEFFRAVcGUAZREB4QYmoKCwAQCEZAR1ceEGJqCwUHEAgDCwoKHhBiagMCAwIQCBBTUBAeEGJqCwMCEAgQBgsEAwEBUQIfVFMEBx8DA1dQH1BUBVMfAQsHAwVUUwQHBAMKEB4QYmoLAgUQCBADHAEcAQoHBBAeEGJqCwMKEAgQBgcHCwQDBQEEChAeEGJqCgACEAgQYmoKAwQQHhBiagsBAhAIXEdeXh4QYmoHBxAIEFpGRkJBFwFzFwB0FwB0RUVFHF5dRVdBHFFdXxcAdEFXU0BRWhcBdEFXU0BRWmZXQF8XAXZTW0AXAAcAAlFdXFZbRltdXFdAEB4QYmoKBwIQCAIeEGJqCgcDEAgDAAYLAx4QYmoDAgcEEAgDBAAKBAcLCgoHAAQAHhBiagMCAQoQCBAHV1ADAAAKAh9UUwQHHwMDV1AfUwRUVB8CAQNRAlYDVAdQCgQQHhBiagEFAxAIVFNeQVceEGJqCwQQCBBaRkZCQQgdHUVFRRxeXUVXQRxRXV8dQlYddXcfBAICAh9wZmcfYl1ARlNQXlcfc1tAH3FdXFZbRltdXFdAHQcCAgIDBgELBAMQT08eSRBGEAgQYmoAEB4QVhAISRBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHUJWHXV3HwQCAgIfcGZnH2JdQEZTUF5XH3NbQB9xXVxWW0ZbXVxXQB0HAgICAwYBCwQDEB4QYmoEARAIEH5bXEdKEkoKBG0EBhAeEGJqAwsDEAgCHhBiagoHAhAIAx4QYmoKBwMQCAMABwMDHhBiagMCAgoQCAEEAgIeEGJqAwIHBxAIAwQACgQHCwoKBwAACx4QYmoDAgcEEAgDBAAKBAcLCgoHAAQEHhBiagMCAQoQCBAHV1ADAAAKAh9UUwQHHwMDV1AfUwRUVB8CAQNRAlYDVAdQCgQQHhBiagEFAxAIVFNeQVdPT28="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "5eb12280-fa65-11eb-a6ff-031c0d1f5b86"
, key: "ft"
value: "226"
, key: "seq"
value: "0"
, key: "en"
value: "NTA"
, key: "pc"
value: "4667193208689079"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "1"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC09e58aea1af04c45a4533887a790c5e4-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://1060694.collect.igodigital.com/collect.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalstdomain", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC8f22bc63cd284f6184d59595847bd553-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nova.collect.igodigital.com/c2/1060694/track_page_view?payload=%7B%22item%22%3A%225000143961%22%2C%22title%22%3A%22GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22referrer%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%22%22%2C%22known_state%22%3A%22%22%7D%7D%2C%22child_ids%22%3A%5B%221370143%22%5D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalstdomain", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC65aa80b0ba084b2c96fc825c1ccec785-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://apps.bazaarvoice.com/apps/api/api-0.8.0.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://apps.bazaarvoice.com/deployments/lowes/main_site/production/en_US/api-config.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCffc5f8f812ee4f5f9292cf88c51613cc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC270015e98019439f833fc3d6ef7f5877-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://analytics-static.ugc.bazaarvoice.com/prod/static/3/bv-analytics.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-6450450&l=googleDataLayer", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.13.1.0-release_5043/storage.secure.min.js?loc=https%3A%2F%2Fwww.lowes.com&site=22554410&env=prod&isCrossDomain=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.13.1.0-release_5043/storage.secure.min.html?loc=https%3A%2F%2Fwww.lowes.com&site=22554410&env=prod&isCrossDomain=true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-1031919983&l=googleDataLayer&cx=c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC5dd8352b39404066b56280cc4aa704de-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googleadservices.com/pagead/conversion_async.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ad.doubleclick.net/activity;src=6450450;type=vfpro0;cat=produ0;ord=1104003070829;gtm=2od891;auiddc=1926396264.1628659852;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u13=ge;u14=6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner;u15=heating_cooling;u16=air_conditioners_fans;u17=room_air_conditioners;u18=5000143961;~oref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCbd6afff198e94e748b5e2fd73f28d207-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659885927&cv=9&fst=1628659885927&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659885930&cv=9&fst=1628659885930&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&eid=376635471&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dpage_view%3Becomm_pagetype%3Dproduct-display%3Becomm_prodid%3D5000143961&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://bid.g.doubleclick.net/xbbe/pixel?d=KAE", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://bat.bing.com/p/action/5668750.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=1d10282c-b345-49da-a83e-602c589d6921&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&pi=0&lg=en-US&sw=1360&sh=663&sc=24&tl=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&p=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&r=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&lt=9066&evt=pageLoad&msclkid=N&sv=1&rn=363947", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC07fa4ad32f7b406b8c9c37863504f784-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://event.syndigo.cloud/event/h.gif?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&t=6&dt=6.038&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.851733767351273&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/wu/392339/onsite/embed.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC75823becabb5495994ee06e85292e064-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCa737427ceb15428aa0cc62aee1513675-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/us/wu/392339/onsite/generic1627562585749.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659886496&cd[buttonFeatures]=%7B%22classList%22%3A%22sc-giIncl%20kFwNpI%20atc%20btn-add%22%2C%22destination%22%3A%22javascript%3Avoid(0)%3B%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Add%20to%20Cart%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Add%20to%20Cart&cd[formFeatures]=%5B%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22quantity%22%2C%22tag%22%3A%22input%22%2C%22inputType%22%3A%22tel%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22productId%22%2C%22tag%22%3A%22input%22%2C%22inputType%22%3A%22hidden%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%5D&cd[pageFeatures]=%7B%22title%22%3A%22GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com%22%7D&cd[parameters]=%5B%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=3&o=2078&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=SubscribedButtonClick&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659886499&cd[buttonFeatures]=%7B%22classList%22%3A%22sc-giIncl%20kFwNpI%20atc%20btn-add%22%2C%22destination%22%3A%22javascript%3Avoid(0)%3B%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Add%20to%20Cart%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Add%20to%20Cart&cd[formFeatures]=%5B%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22quantity%22%2C%22tag%22%3A%22input%22%2C%22inputType%22%3A%22tel%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22productId%22%2C%22tag%22%3A%22input%22%2C%22inputType%22%3A%22hidden%22%7D%2C%7B%22id%22%3A%22%22%2C%22name%22%3A%22%22%2C%22tag%22%3A%22button%22%7D%5D&cd[pageFeatures]=%7B%22title%22%3A%22GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com%22%7D&cd[parameters]=%5B%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=3&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE
    );

    ns_end_transaction("collector_3", NS_AUTO_STATUS);
    ns_page_think_time(0.14);

    //Page Auto split for Button '' Clicked by User
    ns_start_transaction("e_gif");
    ns_web_url ("e_gif",
        "URL=https://event.syndigo.cloud/event/e.gif?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&type=a2ctracking&message=potential%20dom%20change%20(quantity%20element%20not%20found)&dt=6.513&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.6156435324618856&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:image",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://event.syndigo.cloud/event/k.gif?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&sku=2759118-83-APFD06JASW&quantity=1&variant=&price=349&currency=USD&brand=ge&category=Heating%20%26%20Cooling&productId=5000143961&careplan=0&careplanprice=&dt=6.513&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.981964878971693&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("e_gif", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("addToCart");
    ns_web_url ("addToCart",
        "URL=https://www.lowes.com/gauge/link/addToCart",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;g_previous;IR_12374;_px_4559617368_cs;akaalb_prod_dual;bm_sv;_uetsid;_uetvid;kampyleSessionPageCounter",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"18","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:26.524Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-316","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{"qty":1,"linkName":"cart-add","isServiceSelected":false,"serviceGroup":[]},"path":"/link/addToCart","method":"post"}",
        BODY_END
    );

    ns_end_transaction("addToCart", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X628659886522");
    ns_web_url ("X628659886522",
        "URL=https://www.lowes.com/pd/5000143961/addtocart/1628659886522",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;RT;g_previous;IR_12374;_px_4559617368_cs;akaalb_prod_dual;bm_sv;_uetsid;_uetvid;kampyleSessionPageCounter",
        INLINE_URLS,
            "URL=https://ad.doubleclick.net/activity;dc_pre=CNXU7e-eqPICFRGoaAodA80GJA;src=6450450;type=vfpro0;cat=produ0;ord=1104003070829;gtm=2od891;auiddc=1926396264.1628659852;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u13=ge;u14=6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner;u15=heating_cooling;u16=air_conditioners_fans;u17=room_air_conditioners;u18=5000143961;~oref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE
    );

    ns_end_transaction("X628659886522", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("cartitems");
    ns_web_url ("cartitems",
        "URL=https://www.lowes.com/cart/cartitems",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=x-requested-with:XMLHttpRequest",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;_abck;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;akavpau_cart;mbox;akavpau_default;salsify_session_id;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;akaalb_prod_dual;bm_sv;_uetsid;_uetvid;kampyleSessionPageCounter;RT",
        BODY_BEGIN,
            "{"cartItems":[{"itemType":"RGL","productId":"5000143961","quantity":1,"subscriptions":null,"imageUrl":"//mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=sm"}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data=eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTM2MHg2NjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoWDExOyBMaW51eCB4ODZfNjQpIEFwcGxlV2ViS2l0LzUzNy4zNiAoS0hUTUwsIGxpa2UgR2Vja28pIENocm9tZS85MC4wLjQ0MzAuNjEgU2FmYXJpLzUzNy4zNiIsInNlc3Npb25fcGxhdGZvcm0iOiAiTGludXggeDg2XzY0IiwicmVmZXJyaW5nX3VybCI6ICJodHRwczovL3d3dy5sb3dlcy5jb20vc2VhcmNoP3NlYXJjaFRlcm09YWlyJTIwY29uZGl0aW9uZXIiLCJyZWZlcnJpbmdfZG9tYWluIjogInd3dy5sb3dlcy5jb20iLCJ0cmFja2VyX3R5cGUiOiAiamF2YXNjcmlwdCIsInRyYWNrZXJfdmVyc2lvbiI6ICIyLjEuMTUiLCJldmVudF9uYW1lIjogIm5lYnVsYV9wYWdlX3ZpZXciLCJldmVudF90aW1lc3RhbXBfZXBvY2giOiAiMTYyODY1OTg4NjU4MyIsImV2ZW50X3RpbWV6b25lX29mZnNldCI6IC01LCJ1c2VyX2lkIjogIjE3YjMzYjEyNGYwNWNlLTBjZmZjMWJlNDI2ZDZmLTE2MmMxYTBjLWRjMjMwLTE3YjMzYjEyNGYxNzJjIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiAzOTIzMzcsInVybCI6ICJodHRwczovL3d3dy5sb3dlcy5jb20vcGQvR0UtNjAwMC1CVFUtUG9ydGFibGUtQWlyLUNvbmRpdGlvbmVyLzUwMDAxNDM5NjEiLCJ3ZWJzaXRlSWQiOiAzOTIzMzksImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjA2MDYtMmE5Mi1iYzc1LWUxMGItZWE4My1hMzI1LWIxOTctMmMzMiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjI4NjU5ODUyMzc2Iiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIjY5LjQ2MTMxMzEwNjEwOTA2IiwiU1VCTUlUVEVEX0RBVEUiOiAiIn0sImNvb2tpZV9zaXplIjogNDAwMiwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzkuMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzkuMCIsImhpc3RvcnlfbGVuZ3RoIjogNCwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyODY1OTg4NjM5NiwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659885927&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&async=1&fmt=3&is_vtc=1&random=1139406134&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659885927&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&async=1&fmt=3&is_vtc=1&random=1139406134&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659885930&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&eid=376635471&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dproduct-display%3Becomm_prodid%3D5000143961&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&async=1&fmt=3&is_vtc=1&random=1421770708&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659885930&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&eid=376635471&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=4&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dproduct-display%3Becomm_prodid%3D5000143961&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&tiba=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&async=1&fmt=3&is_vtc=1&random=1421770708&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://network.bazaarvoice.com/sid.gif?_=ep1zi6", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://network.bazaarvoice.com/sid.gif?_=u819m3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("cartitems", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("events_2");
    ns_web_url ("events_2",
        "URL=https://ls.chatid.com/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"app":"sxp_sdk","channel":"s-881400d6-9158-4ed0-bdca-17f321f14d04","csid":"3a2dd283-a5e0-4975-8767-569a0913fcb2","timestamp":1628659886.518,"logs":[{"code":"sdk_add_to_cart","properties":{"hasEnhancedContent":false,"productIdType":"LOWESID","productId":"2759118-83-APFD06JASW","brand":"GE","category":"PORTABLE_AIR_CONDITIONERS","price":349,"quantity":1},"context":{"page":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","title":"GE 6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner in the Portable Air Conditioners department at Lowes.com"}},"timestamp":1628659886.518}]}",
        BODY_END
    );

    ns_end_transaction("events_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_4");
    ns_web_url ("collector_4",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqARAeEFYQCEkQYmoAAQYQCFRTXkFXHhBiagABBxAIVFNeQVceEGJqAwcDEAhUU15BVx4QYmoAAQsQCFRTXkFXHhBiagAGAhAIVFNeQVceEGJqAwcAEAhUU15BVx4QYmoDBwEQCFRTXkFXHhBiagEDBhAIVFNeQVceEGJqAwsAEAhUU15BVx4QYmoDCwQQCFRTXkFXHhBiagACBRAIVFNeQVceEGJqAAcDEAhUU15BVx4QYmoLCgAQCAMEAAoEBwsKCgcHCwUeEGJqCwoBEAgQBQYBBQIDAgMCBgsBAgYHAAoCCwUQHhAMDwgMCwoLCgsPAggLDw4JAwsCDBAIEA0OCQ0KCwoLCg4DCQoODwgCCgMNEB4QYmoLCgQQCBAFBAMAAAoLCgYCAAALAQQLAAIABRAeEGJqCwoHEAgKBgEHHhBiagMCAQEQCBBXAldTVAMCVxAeEGJqAwIDCxAIEFYDCwMFUVMGEB4QYmoDAgACEAgQBQUEBFMHAFYQHhBiagMCAAMQCBBUAAJUVFQEChAeEGJqAwIAABAIEARTCwIBBQpWEB4QYmoDAgEHEAhGQEdXHhBiagMDAQsQCFRTXkFXHhBiagMCAAcQCFRTXkFXHhBiagEHCxAIEAQHC1YFAgNRVwQFVFZWUwMHVgMLBANWB1cHAlNXUwtWEB4QYmoLBgEQCBBRBgtfA1BTWQdHWlQGClhHCwBAVRAeEGJqAQcFEAgQUAUBAgMEC1cFAwUABVQBAlADBAEBVwsEAFACCwRQUAAQHhBiagEHChAIEApQUQYDBgMHVwtXBVNUCwFWVAcCAwBTClEHUQZUCwpTEB4QYmoAAAsQCAAGHhBiagABAhAIAAYeEGJqCwMQCAMBBAIeEGJqCwAQCAQEAR4QYmoABAsQCAMACgoeEGJqAAUCEAgEAQQeEGJqCwEQCBADAQQCagQEARAeEGJqAwoHEAgHAgMeEGJqAwoEEAgDAAoKHhBiagMKBRAIAh4QYmoDCgoQCAsCAh4QYmoLBxAIRkBHVx4QYmoGAgIQCAMGBx4QYmoGAgYQCBADBgZOBwZOBwZOAwoCTgQKEB4QYmoLAhAIaRBeXVNWZltfV0EQHhBRQVsQHhBTQkIQHhBAR1xGW19XEG8eEGJqAwsCEAgQEB4QYmoHBwAQCBBUU15BVxAeEGJqAQsLEAgQVFNeQVcQHhBiagcGCxAIAx4QYmoGAwMQCAMeEGJqBgIHEAhGQEdXHhBiagcGBRAIRkBHVx4QYmoDAQYQCEZAR1ceEGJqCgsQCEZAR1ceEGJqAwUCEAgCHhBiagoHEAhpbx4QYmoDAwoCEAhUU15BVx4QYmoHCxAIEH9dSFteXlMdBxwCEhpqAwMJEn5bXEdKEkoKBG0EBhsSc0JCXldlV1B5W0YdBwEFHAEEEhp5emZ/fh4SXltZVxJ1V1FZXRsScVpAXV9XHQsCHAIcBgYBAhwEAxJhU1RTQFsdBwEFHAEEEB4QYmoEAxAIEFdcH2dhEB4QYmoBAwEQCGkQV1wfZ2EQHhBXXBBvHhBiagQBEAgQfltcR0oSSgoEbQQGEB4QYmoKBBAIRkBHVx4QYmoDBwYQCAECAh4QYmoDAwcFEAgGHhBiagMDBQEQCAAeEGJqAwEBEAhGQEdXHhBiagoKEAhGQEdXHhBiagMECxAIHwMeEGJqBAAQCBB1V1FZXRAeEGJqBAsQCBAAAgIBAgMCBRAeEGJqBAYQCBAHHAISGmoDAwkSfltcR0oSSgoEbQQGGxJzQkJeV2VXUHlbRh0HAQUcAQQSGnl6Zn9 HhJeW1lXEnVXUVldGxJxWkBdX1cdCwIcAhwGBgECHAQDEmFTVFNAWx0HAQUcAQQQHhBiagQHEAgQfFdGQVFTQlcQHhBiagQEEAgQf11IW15eUxAeEGJqAwMGBhAIRkBHVx4QYmoDAwcAEAgEHAYeEGJqAwMHARAIAAICHhBiagMDBwYQCFRTXkFXHhBiagMDBwcQCBAGVRAeEGJqBAIQCEZAR1ceEGJqCgUQCEZAR1ceEGJqCgADEAgAAwUABAYLBgUAHhBiagoAABAIAwELAAoABwABHhBiagoAARAIAwACAAoLBgMLHhBiagMGBRAIVFNeQVceEGJqAwcHEAgQZVdWEnNHVRIDAxIAAgADEgICCAEDCAAHEnV/Zh8CBwICEhpxV1xGQFNeEnZTS15bVVpGEmZbX1cbEB4QYmoAAQQQCFRTXkFXHhBiagMLBhAIVFNeQVceEGJqAwsHEAhGQEdXHhBiagABBRAIAh4QYmoAAQoQCBBfW0FBW1xVEB4QYmoAAgoQCBBEW0FbUF5XEB4QYmoAAwoQCAIeEGJqAAEDEAgHAgMeEGJqAAEAEAgDAAoKHhBiagAHBhAIVFNeQVceEGJqAAsHEAhUU15BVx4QYmoABAoQCFRTXkFXHhBiagMEBBAIRkBHVx4QYmoDAQoQCEZAR1ceEGJqAwYBEAhGQEdXHhBiagMDBgAQCAceEGJqAwMGARAIAAAeEGJqAwMGBBAIAh4QYmoDAwYFEAgFHhBiagUDBhAIEFdWBFBRAgcFEB4QYmoFAwcQCBAQHhBiagUABhAIEAMCAAIFUABUEB4QYmoFAAcQCBADAgACBVAAVBAeEGJqBQALEAgQCwJXBAcGBAcQHhBiagYGARAIRkBHVx4QYmoGBAQQCEZAR1ceEGJqBgQFEAhGQEdXHhBiagYEChAIRkBHVx4QYmoDCwMQCAIeEGJqCwYQCAYeEGJqAwACEAhpbx4QYmoDBgMQCFRTXkFXHhBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHUJWHXV3HwQCAgIfcGZnH2JdQEZTUF5XH3NbQB9xXVxWW0ZbXVxXQB0HAgICAwYBCwQDEB4QYmoHBxAIEFpGRkJBFwFzFwB0FwB0RUVFHF5dRVdBHFFdXxcAdEFXU0BRWhcBdEFXU0BRWmZXQF8XAXZTW0AXAAcAAlFdXFZbRltdXFdAEB4QYmoBBhAIEHdAQF1AblwSEhISU0YSZFcSGlpGRkJBCB0dUV5bV1xGHEJXQFtfV0ZXQEocXFdGHWJqBANlZEFEWwodX1NbXBxfW1wcWEEIAQgDAwcBBBtuXBISEhJTRhJjVxIaWkZGQkEIHR1RXltXXEYcQldAW19XRldAShxcV0YdYmoEA2VkQURbCh1fU1tcHF9bXBxYQQgBCAAGCgUbblwSEhISU0YSWkZGQkEIHR1RXltXXEYcQldAW19XRldAShxcV0YdYmoEA2VkQURbCh1fU1tcHF9bXBxYQQgBCAAFCgcQHhBiagMCBAcQCAMeEGJqCgcCEAgAHhBiagoHAxAIAwECBAIeEGJqAwIHBhAIAwQACgQHCwoKBwUKBx4QYmoDAgIKEAgBBAICHhBiagMCBwcQCAMEAAoEBwsKCgcAAAseEGJqAwIHBBAIAwQACgQHCwoKBAcHBR4QYmoDAgEKEAgQB1dQAwAACgIfVFMEBx8DA1dQH1MEVFQfAgEDUQJWA1QHUAoEEB4QYmoBBQMQCFRTXkFXT08eSRBGEAgQYmoACwUQHhBWEAhJEGJqAQoQCBBfXUdBV1ZdRVwQHhBiagUCEAgLAQoeEGJqAwcFEAgQRkBHVxAeEGJqBQAQCBARU0ZRDHZ7ZAhcRlofUVpbXlYaABsMdntkDHBnZmZ9fBAeEGJqAQYQCBBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eblwSEhISU0YSZEYSGlpGRkJBCB0dUV5bV1xGHEJXQFtfV0ZXQEocXFdGHWJqBANlZEFEWwodX1NbXBxfW1wcWEEIAAgDBwQDBRtuXBISEhJTRhJ6Zn9 cF1WS3deV19XXEYcYUASGlpGRkJBCB0dUV5bV1xGHEJXQFtfV0ZXQEocXFdGHWJqBANlZEFEWwodX1NbXBxfW1wcWEEIAQgDBQUHChsQHhBiagUKEAgKBQYeEGJqBQsQCAAHBx4QYmoKBwIQCAEeEGJqCgcDEAgDAQYDBB4QYmoDAgcEEAgDBAAKBAcLCgoEBwcFHhBiagMCAQoQCBAHV1ADAAAKAh9UUwQHHwMDV1AfUwRUVB8CAQNRAlYDVAdQCgQQHhBiagEFAxAIVFNeQVdPT28="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "5eb12280-fa65-11eb-a6ff-031c0d1f5b86"
, key: "ft"
value: "226"
, key: "seq"
value: "2"
, key: "en"
value: "NTA"
, key: "cs"
value: "2f97607ecf55a706ee59ead8c27d6dd4ef94f0dbb2964685622010158817d375"
, key: "pc"
value: "1352593052871878"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991\363\240\204\261\363\240\204\266\363\240\204\262\363\240\204\270\363\240\204\266\363\240\204\265\363\240\204\271\363\240\204\270\363\240\204\270\363\240\204\265\363\240\204\265\363\240\204\271\363\240\204\267"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "2"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://adservice.google.com/ddm/fls/z/dc_pre=CNXU7e-eqPICFRGoaAodA80GJA;src=6450450;type=vfpro0;cat=produ0;ord=1104003070829;gtm=2od891;auiddc=*;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u13=ge;u14=6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner;u15=heating_cooling;u16=air_conditioners_fans;u17=room_air_conditioners;u18=5000143961;~oref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/domainprotection/refererrestrictions?cb=lpCb64907x25340", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collector_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_5");
    ns_web_url ("collector_5",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqAAMQHhBWEAhJEGJqBwUQCBBpbhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJ9UFhXUUYcDlNcXVxLX11HQQwSU0YSRhJTRhJ9UFhXUUYcDlNcXVxLX11HQQwSU0YSRhJTRhJ9UFhXUUYcDlNcXVxLX11HQQwSU0YSRhJTRhJ9UFhXUUYcDlNcXVxLX11HQQwSU0YSRhJuEG8QHhBiagoHAhAIBh4QYmoKBwMQCAMGAQICHhBiagMCBwQQCAMEAAoEBwsKCgUEAwYeEGJqAwIBChAIEAdXUAMAAAoCH1RTBAcfAwNXUB9TBFRUHwIBA1ECVgNUB1AKBBAeEGJqAQUDEAhUU15BVx4QYmoLBBAIEFpGRkJBCB0dRUVFHF5dRVdBHFFdXx1CVh11dx8EAgICH3BmZx9iXUBGU1BeVx9zW0AfcV1cVltGW11cV0AdBwICAgMGAQsEAxBPT28="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "5eb12280-fa65-11eb-a6ff-031c0d1f5b86"
, key: "ft"
value: "226"
, key: "seq"
value: "3"
, key: "en"
value: "NTA"
, key: "cs"
value: "2f97607ecf55a706ee59ead8c27d6dd4ef94f0dbb2964685622010158817d375"
, key: "pc"
value: "9064991177287009"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991\363\240\204\261\363\240\204\266\363\240\204\262\363\240\204\270\363\240\204\266\363\240\204\265\363\240\204\271\363\240\204\270\363\240\204\270\363\240\204\265\363\240\204\265\363\240\204\271\363\240\204\267"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "3"
]",
        BODY_END
    );

    ns_end_transaction("collector_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("servicesFlyout");
    ns_web_url ("servicesFlyout",
        "URL=https://www.lowes.com/gauge/link/servicesFlyout",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;kampyleSessionPageCounter;RT;BVBRANDID;BVBRANDSID;_px3;akavpau_default;akaalb_prod_dual;L_AT;L_RT;akavpau_cart;bm_sv;_abck;SHOPPINGCART",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"19","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:28.002Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-316","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{"product":{"ivm":"2759118-83-APFD06JASW","productID":"5000143961"},"linkName":"services_flyout"},"path":"/link/servicesFlyout","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=sm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;BVBRANDID;BVBRANDSID;_px3;bm_sv;_abck", END_INLINE
    );

    ns_end_transaction("servicesFlyout", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("recommendations");
    ns_web_url ("recommendations",
        "URL=https://www.lowes.com/cart/recommendations",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=x-requested-with:XMLHttpRequest",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;kampyleSessionPageCounter;RT;BVBRANDID;BVBRANDSID;_px3;akavpau_default;akaalb_prod_dual;L_AT;L_RT;akavpau_cart;bm_sv;_abck;SHOPPINGCART",
        BODY_BEGIN,
            "{"productId":["5000143961"],"recType":"recs","responseType":"json"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=AddToCart&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659888173&cd[0]=%7B%22customer_type%22%3A%22%22%2C%22known_state%22%3A%22%22%2C%22identity_id%22%3A%22%22%2C%22content_ids%22%3A%222759118-83-APFD06JASW%22%2C%22product_ids%22%3A%225000143961%22%2C%22content_type%22%3A%22product%22%2C%22content_category%22%3A%22portable_air_conditioners%22%2C%22value%22%3A%22349.00%22%2C%22currency%22%3A%22USD%22%2C%22brand_name%22%3A%22GE%22%7D&sw=1360&sh=663&v=2.9.44&r=stable&ec=4&o=2078&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=AddToCart&dl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&rl=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&if=false&ts=1628659888174&cd[0]=%7B%22customer_type%22%3A%22%22%2C%22known_state%22%3A%22%22%2C%22identity_id%22%3A%22%22%2C%22content_ids%22%3A%222759118-83-APFD06JASW%22%2C%22product_ids%22%3A%225000143961%22%2C%22content_type%22%3A%22product%22%2C%22content_category%22%3A%22portable_air_conditioners%22%2C%22value%22%3A%22349.00%22%2C%22currency%22%3A%22USD%22%2C%22brand_name%22%3A%22GE%22%7D&sw=1360&sh=663&v=2.9.44&r=stable&ec=4&o=30&fbp=fb.1.1628659850310.738130319&it=1628659883949&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://nova.collect.igodigital.com/c2/1370143/track_cart?payload=%7B%22cart%22%3A%5B%7B%22item%22%3A%225000143961%22%2C%22quantity%22%3A1%2C%22price%22%3A%22349.00%22%2C%22unique_id%22%3A%225000143961%22%7D%5D%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%22%22%2C%22known_state%22%3A%22%22%7D%7D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalstdomain", END_INLINE,
            "URL=https://beacon.krxd.net/event.gif?0=%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D&event_id=LfeEca87", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_", END_INLINE
    );

    ns_end_transaction("recommendations", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("id_json");
    ns_web_url ("id_json",
        "URL=https://network.bazaarvoice.com/id.json?_=yet2xm&callback=_bvajsonp1",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=BVID;BVSID"
    );

    ns_end_transaction("id_json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("id_json_2");
    ns_web_url ("id_json_2",
        "URL=https://network.bazaarvoice.com/id.json?_=54kjc&callback=_bvajsonp2",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=BVID;BVSID",
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/22554410?&cb=lpCb39763x37981&t=sp&ts=1628659888512&pid=9737138271&tid=7916049064&pt=GE%206100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%20in%20the%20Portable%20Air%20Conditioners%20department%20at%20Lowes.com&u=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&r=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&sec=%5B%22lowes%20%3A%20product-display%20%3A%20heating_cooling%2Cair_conditioners_fans%2Croom_air_conditioners%2Cportable_air_conditioners%22%2C%221%22%5D&df=0&os=2&identities=%5B%7B%22iss%22%3A%22LivePerson%22%2C%22acr%22%3A%220%22%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://network.bazaarvoice.com/st.gif?cl=PageView&loadId=24b125d012d2c978976&type=Product&BVBRANDID=f89d7817-f2f6-459d-823a-ae4d247567fd&BVBRANDSID=e25d865c-eac8-4133-8c19-b9f815e6aab0&tz=300&sourceVersion=3.14.0&magpieJsVersion=3.14.0&source=bv-loader&environment=prod&client=Lowes&dc=0534&host=www.lowes.com&bvProduct=RatingsAndReviews&locale=en_US&deploymentZone=main_site&productId=5000143961&categoryId=portable_air_conditioners&rootCategoryId=heating_cooling&numReviews=&href=https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961&canurl=https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961&res=1360x663&lang=en-us&charset=UTF-8&geo=1&cookies=1&r_t=(con:0,dns:0,load:8100,req:840,res:31,tot:9066)&_=bd8i98&ref=https://www.lowes.com/search%3FsearchTerm%3Dair%2520conditioner", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=BVID;BVSID", END_INLINE,
            "URL=https://network.bazaarvoice.com/st.gif?loadId=24b125d012d2c978976&BVBRANDID=f89d7817-f2f6-459d-823a-ae4d247567fd&BVBRANDSID=e25d865c-eac8-4133-8c19-b9f815e6aab0&tz=300&sourceVersion=3.14.0&magpieJsVersion=3.14.0&source=bv-loader&environment=prod&client=Lowes&dc=0534&host=www.lowes.com&r_batch=!((bvProduct:bv-loader,bvProductVersion:%2713.4.0%27,cl:Diagnostic,deploymentZone:main_site,elapsedMs:%272.6150%27,endTime:%2712895.2250%27,locale:en_US,name:timeToRunScout,startTime:%2712892.6100%27,type:Performance))&_=wsk4bd", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=BVID;BVSID", END_INLINE
    );

    ns_end_transaction("id_json_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxImpression_3");
    ns_web_url ("mboxImpression_3",
        "URL=https://www.lowes.com/gauge/link/mboxImpression",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;kampyleSessionPageCounter;RT;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;_abck;SHOPPINGCART;akavpau_cart;akaalb_prod_dual;bm_sv",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"20","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"3","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/search?searchTerm=air%20conditioner","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:29.259Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"8|20|11|5997","p_visit":"3","clientVersion":"1.4.0","previousPageType":"search-results","previousSitesections":"air_conditioner","previousSiteID":"desktop","previousPageLoad":"14.82","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["globalweb-header-stable","globalweb-footer-stable","ABT-3775-A"],"pageName":"product-display","siteID":"desktop","destinationURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","referrerURL":"https://www.lowes.com/search?searchTerm=air%20conditioner"},"category":{"pageType":"product-display","platform":1,"framework":1,"siteSections":["heating_cooling","air_conditioners_fans","room_air_conditioners","portable_air_conditioners"],"helix":true}},"products":[{"productInfo":{"productID":"5000143961","productName":"6100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner","ivm":"2759118-83-APFD06JASW","itemNumber":"2759118","vendorNumber":"83","model":"APFD06JASW","brand":"ge","isDiscontinued":false,"quantity":1,"badgeType":"BS"},"attributes":{"epcItems":"spin|image","type":"ANY","ltlItem":false,"hazmatItem":true,"promotionMessages":["lcc_card_5_order_discount","with_6_month_financing"],"availability":{"boss":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"bopuis":{"availabilityStatus":"NA"},"parcel":{"fullMtdMsg":"Parcel","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":1,"deliveryMethodName":"Parcel Shipping","availabileQuantity":0,"availableQuantity":0},"pickup":{"fullMtdMsg":"Pickup","isAvlSts":true,"itmLdTmDays":3,"onhandQty":0,"totalQty":327,"itmLdTm":"08-14-2021-09:00 UTC","productStockType":"NON","availabilityStatus":"Available","deliveryMethodId":2,"deliveryMethodName":"Store Pickup","availabileQuantity":327,"availableQuantity":327,"leadTime":1628931600000,"endLeadDays":3,"startLeadDays":1},"truck":{"fullMtdMsg":"Delivery","isAvlSts":false,"itmLdTmDays":0,"onhandQty":0,"totalQty":0,"itmLdTm":"","productStockType":"NON","availabilityStatus":"Not Available","deliveryMethodId":3,"deliveryMethodName":"Truck Delivery","availabileQuantity":0,"availableQuantity":0}},"displayPriceType":"selling","priceType":"reg","sellingPrice":349}}],"user":{"dbid":"0c4d60e8-af11-4882-8069-11671292895b","profile":{"profileInfo":{}},"status":"guest","segment":"consumer"},"mboxes":{"names":["lwscom_global","lwscom_pdp","dp_lwscom_pdp_credit_01","pd-delivery-info-banner"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-291","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-274","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-267","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-316","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{"mboxes":[],"recommendations":[{"algorithm":"wait_dont_forget_these","ids":["3166667","1137377","1001307556","5000851859","3112021","1000195303","5000851867","4755301","3772899","3552946","1096097"]}],"name":"wait_dont_forget_these","location":"pdp"},"path":"/link/mboxImpression","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://mobileimages.lowes.com/productimages/1b9f97e1-baf6-4097-8a50-95808c720543/00559259.jpg?size=sm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;BVBRANDID;BVBRANDSID;_px3;_abck;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/41756b2b-3c1d-4afe-83e1-5b645803af25/00278311.jpg?size=sm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;BVBRANDID;BVBRANDSID;_px3;_abck;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/91e2e7e9-c032-44b8-9cc3-fc79cb5a00cb/12061069.jpg?size=sm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;BVBRANDID;BVBRANDSID;_px3;_abck;bm_sv", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/3aaf116c-05c9-4e08-9309-6d23ee8e0b57/40286834.jpg?size=sm", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_px_4559617368_cs;_uetsid;_uetvid;RT;BVBRANDID;BVBRANDSID;_px3;_abck;bm_sv", END_INLINE
    );

    ns_end_transaction("mboxImpression_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_10");
    ns_web_url ("bundle_10",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=6145356814393344&Seq=3&PageStart=1628659879543&PrevBundleTime=1628659886745&LastActivity=24",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_10_main_url_1_1628659912587.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://colrep.sitelabweb.com/rp/?d=KJQAgZF52Q2dWSvm21DKGQ2aCFjpqN6FTBHJ1-0_nUA2zT5cX29YnYK4TPHJ03woq0P2zeFNhFkoY1AEyjDcXtj_oNkE0b3SIdaU55AJGYEPi~mnNRG5TPNMDN3U6N0KDBGNz6yU59CHWo8bzjmlqx--mGCZJ7hjI1b90bjVH24YnQ0KmfHPiwxW2cL-mUDPi6xZnk0E2TUMiEyZYYH4TrPNTJ2XXZHETChbJWpmaxx-TUaNhmwUnIA0FrGMhAza1UC2E68b1B4UnIALDrNXDE0VmUC2EQFcWdlfNVy82wLJi-GYnMJ1jXNJi~wVZtYBECgJi-DUnIAIGwAZhAyXZd-E22EKhAyXZN2JmKCZhAyb2kA1jLDNT6zXX4I2SeHMV3hj5FCHSeHRzAzYH4D3ij7Ym3FpbR-InY8bIm9XXZKKXf8ZTjhZaQI4GeHNlE4ZqMDFWPGNl24inMDEWPPNiKjjqMG4SjMdlSk_nADFjnFYzR2XYlzEzo5ZWxhXqQDETeQYDA4XnYCEzPLJ13pjY1~3jeNNTShZaUCEmb4ZT7kiIAA2mf2OTA5jnID3jeFNCFwo20D-msHZlE9lbRGJHX4MGwlX3Y-2kjOdJJuma9JFXXDYIrtUnJWJGa4M~FHbm0I2DLFLj-Ufm1fI3ULYl-sjm1RHXTCQIrujalGHWKDZm~lX3YH2DLFMi6zZnYB-nb4ZJ~9mHZ3J0wDZ0BjoaV~5XbHdlAmiNEB5TXGZi61XnYDETb3YD7mY2lyEjaIYz3hjnJ~3DU4YiExU5Nx2zBIMlA0YnEI22PLZW20j2YLEmTLMI~ziqUCFDaHZlw2Xm4D2VJFJ03uo5l~2zCIZm3zlq98-TTIMDxlYYUB3jY0NW7jYaYI4WU1NT3iXNF-2maLM0BhY2E-2jXGNz~4Y2YB3zLHJiKDeZM-2jXIMlA0YnEI22PLZW20j2YLEmTLMI~ziqUCFDaHZlw2Xm4D2VJFJi~zXnYL2TvFNTE3ZmZ6JzCLc1BlU6JD5XbHdlAmiOIP-ToXJi~yn2YA3ja4Mz~lXLEB-ToZJ0nyo20A-ms4c0q9obJHFSj5alR9XmZDFmvUMhFyjrB9JnaUJiKCUnICAHU8YIBVnXUC2ieIQiwlYLQ0JmvUMyFwj6QP3DnH&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb81170x37282&t=uc&ts=1628659885796&pid=9737138271&tid=7916049064&sdes=%5B%7B%22type%22%3A%22prodView%22%2C%22products%22%3A%5B%7B%22product%22%3A%7B%22name%22%3A%226100-btu_doe_8000-btu_ashrae_115-volt_white_portable_air_conditioner%22%2C%22category%22%3A%22lowes%3Adt%3Aheating_cooling%3Aair_conditioners_fans%3Aroom_air_conditioners%3Aportable_air_conditioners%22%2C%22sku%22%3A%222759118-83-APFD06JASW%22%2C%22price%22%3A349%7D%7D%5D%7D%2C%7B%22type%22%3A%22ctmrinfo%22%2C%22info%22%3A%7B%22accountName%22%3A%22%22%2C%22userName%22%3A%22fairbanks%20lowe%27s%22%2C%22companySize%22%3A%221985%22%2C%22socialId%22%3A%2299701%22%2C%22ctype%22%3A%22diy%22%2C%22cstatus%22%3A%22guest%22%2C%22customerId%22%3A%22-%22%7D%7D%2C%7B%22type%22%3A%22personal%22%2C%22personal%22%3A%7B%22contacts%22%3A%5B%7B%22phone%22%3A%22-%22%2C%22email%22%3A%22-%22%7D%5D%2C%22company%22%3A%22-%22%7D%7D%2C%7B%22type%22%3A%22mrktInfo%22%2C%22info%22%3A%7B%22affiliate%22%3A1%7D%7D%2C%7B%22type%22%3A%22pagediv%22%2C%22divId%22%3A%22liveperson-persist-button%22%7D%5D&vid=MwZjUwNjU5YTYyZDUxNjk3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb26113x8089&t=pl&ts=1628659888546&pid=9737138271&tid=7916049064&vid=MwZjUwNjU5YTYyZDUxNjk3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://event.syndigo.cloud/event/h.gif?u=00529A56-C63C-4A8E-841D-9BC12B8BD0F4&prtnid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&siteid=9827c4b9-a79e-4fa7-86f8-ac2e4d8a0d66&pageid=2759118-83-APFD06JASW&s=1628659879997&v=v1.0.197&visitid=E761DDDE-0C39-44CE-A23A-4F548D0AE711&t=12&dt=12.043&ref=https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3Dair%2520conditioner&r=0.11554383129249657&pageurl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_10", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("XGZyw_4");
    ns_web_url ("XGZyw_4",
        "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;RT;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;_abck;SHOPPINGCART;akavpau_cart;_px_4559617368_cs;akaalb_prod_dual;bm_sv;LPVID;LPSID-22554410",
        BODY_BEGIN,
            "{"sensor_data":"7a74G7m23Vrp0o5c9276101.7-1,2,-94,-100,Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36,uaend,12147,20030107,en-US,Gecko,0,0,0,0,400727,9875449,1288,636,1360,663,1288,501,1288,,cpen:0,i1:0,dm:0,cwen:0,non:1,opc:0,fc:0,sc:0,wrc:1,isc:0,vib:1,bat:1,x11:0,x12:1,7556,0.390136259195,814329937724,0,loc:-1,2,-94,-101,do_en,dm_en,t_en-1,2,-94,-105,0,0,0,0,1241,1038,0;0,-1,0,0,-1,895,1;-1,2,-94,-102,0,0,0,0,1241,1038,0;0,-1,0,0,-1,895,1;0,-1,0,0,-1,895,1;0,-1,0,0,1125,520,0;0,-1,0,0,1355,339,0;-1,2,-94,-108,-1,2,-94,-110,0,1,1382,630,129;1,1,1393,742,365;2,1,9572,752,1261;3,1,9627,769,1255;4,1,9666,788,1245;5,1,9728,809,1230;6,1,9860,824,1218;7,1,9965,851,1178;8,1,10061,874,1149;9,1,10104,875,1148;10,1,10132,876,1148;11,1,10202,876,1149;12,1,10235,876,1150;13,1,10260,876,1151;14,1,10341,874,1154;15,1,10363,874,1155;16,3,10711,874,1155,-1;17,4,11042,874,1155,-1;18,2,11043,874,1155,-1;19,1,14306,924,1189;20,1,14320,986,1228;21,1,14333,1009,1246;22,1,14354,1054,1273;23,1,14369,1075,1298;24,1,14385,1088,1310;25,1,14404,1095,1319;26,1,14420,1100,1328;27,1,14434,1102,1330;28,1,14451,1102,1331;29,1,14470,1103,1333;30,1,14485,1103,1334;31,1,14718,1103,1335;32,1,14733,1102,1336;33,1,14751,1101,1337;34,1,14768,1101,1338;35,1,14787,1100,1339;36,1,14801,1100,1340;37,1,14817,1099,1341;38,1,14849,1098,1342;39,1,14867,1098,1343;40,1,14884,1097,1345;41,1,14899,1096,1346;42,1,14921,1096,1347;43,1,14933,1095,1348;44,1,14951,1094,1349;45,1,14983,1092,1350;46,1,15034,1091,1350;47,1,15050,1090,1350;48,1,15083,1089,1350;49,1,15100,1088,1348;50,1,15117,1087,1348;51,1,15134,1087,1346;52,1,15151,1086,1345;53,1,15167,1086,1344;54,1,15183,1085,1343;55,1,15200,1084,1343;56,1,15217,1084,1342;57,1,15249,1083,1341;58,1,15283,1083,1340;59,1,15301,1083,1339;60,1,15333,1083,1338;61,1,15352,1083,1337;62,1,15367,1083,1335;63,1,15388,1083,1333;64,1,15404,1083,1332;65,1,15417,1083,1329;66,1,15434,1083,1328;67,1,15450,1083,1326;68,1,15467,1083,1325;69,1,15485,1082,1324;70,1,15500,1082,1322;71,1,15523,1080,1321;72,1,15534,1080,1320;73,1,15566,1080,1319;74,1,15584,1080,1317;75,1,15618,1080,1316;76,1,15634,1080,1315;77,1,15651,1079,1314;78,1,15683,1079,1313;79,1,15717,1079,1312;80,1,15733,1079,1311;81,1,15784,1079,1309;82,1,15850,1079,1310;83,1,15867,1079,1311;84,1,15884,1079,1312;85,1,15900,1079,1315;86,1,15917,1079,1318;87,1,15935,1079,1323;88,1,15952,1079,1325;89,1,15968,1079,1328;90,1,15983,1079,1330;91,1,16000,1079,1332;92,1,16018,1079,1334;93,1,16051,1079,1335;94,1,16067,1079,1337;95,1,16084,1079,1338;96,1,16100,1079,1339;97,1,16133,1078,1341;98,1,16150,1078,1342;99,1,16184,1078,1343;100,1,16217,1077,1344;101,1,16234,1077,1345;102,1,16317,1077,1346;106,3,16654,1077,1349,-1;-1,2,-94,-117,-1,2,-94,-111,-1,2,-94,-109,-1,2,-94,-114,-1,2,-94,-103,3,5421;-1,2,-94,-112,https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961-1,2,-94,-115,1,1725088,32,0,0,0,1725056,16654,0,1628659875448,12,17422,0,107,2903,3,0,16656,1478438,0,60EED5F365C9E9A4B1813AF1DB1118C9~-1~YAAQbHIsMYz2TJ16AQAAQ6+xMwZXOsze/uIKWzRaVUsx/v0BEK6KEZS+e3mFEgSe4fCc2gAWXzKMnsioFiD77GOAdnd4+nKtHocj2xfYeynmqOmWmUF04HkRjfq79JVpQfF316KvXzKoBZDHrryEdnQULrKOTdJ04ZXdCouI+j9CeG21Qtcn51eRth+PxWRdt7UkA7vVJYXHZqv2KaAodMExjmZrP6jk+TxOrLhAddcpxb1+tX20Q0l/Irry+4zYkVXkk/j/Pgt3IAVXn+0Xvccz8hiBTDsaoX9iplvRfGhcaak8Zqnr20jwtgm0HUwAaFGBOQcQjAo1NgVeJ7pvK8Y/b6eJayFKovmsiaS5jpj0rqSa7l+AMWTkRPs/BbgeUuh4XduaMQaWxLgGxgGfKRIo5K7LGA==~0~-1~-1,38709,128,1839961562,30261689,PiZtE,15467,78,0,-1-1,2,-94,-106,1,0-1,2,-94,-119,11,13,14,14,40,45,11,8,8,6,6,2099,1586,183,-1,2,-94,-122,0,0,0,0,1,0,0-1,2,-94,-123,-1,2,-94,-124,-1,2,-94,-126,-1,2,-94,-127,00300044040300043020-1,2,-94,-70,-1127778619;-563023189;dis;;true;true;true;300;true;24;24;true;false;-1-1,2,-94,-80,5383-1,2,-94,-116,740659419-1,2,-94,-118,207256-1,2,-94,-129,-1,2,-94,-121,;5;8;0"}",
        BODY_END
    );

    ns_end_transaction("XGZyw_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_14");
    ns_web_url ("index_14",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("index_14", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("beacon_3");
    ns_web_url ("beacon_3",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector/beacon",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("beacon_3", NS_AUTO_STATUS);
    ns_page_think_time(0.347);

    //Page Auto split for Link 'A' Clicked by User
    ns_start_transaction("cart");
    ns_web_url ("cart",
        "URL=https://www.lowes.com/cart",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;_abck;SHOPPINGCART;akavpau_cart;_px_4559617368_cs;akaalb_prod_dual;bm_sv;LPVID;LPSID-22554410;RT"
    );

    ns_end_transaction("cart", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("events_3");
    ns_web_url ("events_3",
        "URL=https://ls.chatid.com/events",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"app":"sxp_sdk","channel":"s-881400d6-9158-4ed0-bdca-17f321f14d04","csid":"3a2dd283-a5e0-4975-8767-569a0913fcb2","timestamp":1628659892.355,"logs":[{"code":"sdk_navigation","properties":{"hasEnhancedContent":false,"productIdType":"LOWESID","productId":"2759118-83-APFD06JASW","brand":"GE","category":"PORTABLE_AIR_CONDITIONERS","price":349,"quantity":1},"context":{"page":{"url":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","title":"GE 6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner in the Portable Air Conditioners department at Lowes.com"}},"timestamp":1628659892.355}]}",
        BODY_END
    );

    ns_end_transaction("events_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_11");
    ns_web_url ("bundle_11",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=6145356814393344&Seq=4&PageStart=1628659879543&PrevBundleTime=1628659890855&SkipResponseBody=true",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE$=http_request_body/bundle_11_url_0_1_1628659912589.body",
        BODY_END
    );

    ns_end_transaction("bundle_11", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X_3");
    ns_web_url ("X_3",
        "URL=https://bat.bing.com/actionp/0?ti=5668750&Ver=2&mid=1d10282c-b345-49da-a83e-602c589d6921&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&evt=pageHide",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID;MR",
        INLINE_URLS,
            "URL=https://jslog.krxd.net/jslog.gif?commit=1&pubid=e30196c7-5053-416c-94a4-c1acfb09b619&siteid=1655138&site_name=Lowes&browser_bucket=Chrome&lang=en&log_version=1.1&errors=%5B%7B%22type%22%3A%22test%22%2C%22msg%22%3A%22user_data_response%3A%20undefined%22%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Cache-Control:max-age=0", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://www.lowescdn.com/shared/sdvice/dyncdn/545/vice_loader/lowes/lowes.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/productimages/c56595c2-2c17-4e5e-b20c-8b65b445f5cb/16815581.jpg?size=md", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;_lgsid;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;cd_user_id;__gads;mbox;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;BVBRANDID;BVBRANDSID;_px3;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;RT", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/cart/0bbdfd3c240cc79c51471809a8df6dac645286ff/vendors.89f42334.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/www/node/purchase/cart/0bbdfd3c240cc79c51471809a8df6dac645286ff/client.d87bc3cc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/SUnSgtrAu/6ZgIc24HL/zyD/eD4jE8/Q5iYJwtN/TiMYOnwD/BGw5V3/5GZyw", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akaalb_prod_dual;akavpau_cart;cartid;RT", END_INLINE,
            "URL=https://www.lowescdn.com/shared/sdvice/sttcdn/344/vice_release/1.17.3.14-w2f", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("X_3", NS_AUTO_STATUS);

    //Page Auto split for Ajax Header = XMLHttpRequest
    ns_start_transaction("sfl");
    ns_web_url ("sfl",
        "URL=https://www.lowes.com/purchase/api/cart/sfl",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=locale:en-US",
        "HEADER=x-canary-version:b",
        "HEADER=cache-control:no-cache",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=x-requested-with:XMLHttpRequest",
        "HEADER=business-channel:DIGITAL_LOWESDESKTOP",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akaalb_prod_dual;akavpau_cart;cartid;RT"
    );

    ns_end_transaction("sfl", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("recommendations_2");
    ns_web_url ("recommendations_2",
        "URL=https://www.lowes.com/purchase/api/cart/recommendations",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=locale:en-US",
        "HEADER=x-canary-version:b",
        "HEADER=cache-control:no-cache",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=x-requested-with:XMLHttpRequest",
        "HEADER=business-channel:DIGITAL_LOWESDESKTOP",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akaalb_prod_dual;akavpau_cart;cartid;RT",
        BODY_BEGIN,
            "{"productIds":["5000143961"],"recType":"rtf"}",
        BODY_END
    );

    ns_end_transaction("recommendations_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_12");
    ns_web_url ("delivery_12",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"5c2e1c662cf94151ac4976a94701be09","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/cart","referringUrl":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"6B3C00B25C695DDE-1FF15DA4740762C5"}},"execute":{"pageLoad":{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"shopping-cart","user.categoryId":"shopping-cart","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"checkout","siteSectionTwo":"shopping-cart","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"","searchTerm":""}}},"prefetch":{"views":[{"parameters":{"platform":1,"user.SegmentId":"","siteId":"desktop","contentPageURL":"","entity.categoryId":"shopping-cart","user.categoryId":"shopping-cart","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"checkout","siteSectionTwo":"shopping-cart","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"","searchTerm":""}}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_12", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_13");
    ns_web_url ("delivery_13",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"a3ad51062eea4d64aeb27ab165bbe0a6","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/cart","referringUrl":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"6B3C00B25C695DDE-1FF15DA4740762C5"}},"execute":{"mboxes":[{"parameters":{"user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"shopping-cart","user.categoryId":"shopping-cart","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"checkout","siteSectionTwo":"shopping-cart","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"","searchTerm":""},"index":0,"name":"lwscom_global"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_13", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("delivery_14");
    ns_web_url ("delivery_14",
        "URL=https://mboxedge31.tt.omtrdc.net/rest/v1/delivery?client=lowes&sessionId=31e45163a4dc4f69bb43b3ae2d42ea61&version=2.4.0",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"requestId":"c22f4f7e06244080ad8b5cc0eaeac3b0","context":{"userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","timeOffsetInMinutes":-300,"channel":"web","screen":{"width":1360,"height":663,"orientation":"landscape","colorDepth":24,"pixelRatio":1},"window":{"width":1273,"height":501},"browser":{"host":"www.lowes.com","webGLRenderer":"Google SwiftShader"},"address":{"url":"https://www.lowes.com/cart","referringUrl":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961"}},"id":{"tntId":"31e45163a4dc4f69bb43b3ae2d42ea61.31_0","marketingCloudVisitorId":"71747673865418841840298191736677393887"},"property":{"token":"bc1367db-f834-021b-b77c-1fb07f2c35a1"},"experienceCloud":{"audienceManager":{"locationHint":12,"blob":"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y"},"analytics":{"logging":"client_side","supplementalDataId":"6B3C00B25C695DDE-1FF15DA4740762C5"}},"execute":{"mboxes":[{"parameters":{"productIds":"5000143961","productIvms":"2759118-83-APFD06JASW","productQtys":"1","user.SegmentId":"","platform":1,"siteId":"desktop","contentPageURL":"","entity.categoryId":"shopping-cart","user.categoryId":"shopping-cart","entity.id":"5000143961","experienceCloud.analytics.trackingServerSecure":"smetrics.lowes.com","experienceCloud.analytics.trackingServer":"metrics.lowes.com","siteSection":"checkout","siteSectionTwo":"shopping-cart","siteSectionThree":"","siteSectionFour":""},"profileParameters":{"audience":"","commerceid":"","scvisitorid":"\"\"","storeId":"1985","zip":"","searchTerm":""},"index":0,"name":"lwscom_cart"}]}}",
        BODY_END
    );

    ns_end_transaction("delivery_14", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("v2_0_4");
    ns_web_url ("v2_0_4",
        "URL=https://www.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akaalb_prod_dual;akavpau_cart;cartid;RT"
    );

    ns_end_transaction("v2_0_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xc4d60e8_af11_4882_8069_1167_5");
    ns_web_url ("Xc4d60e8_af11_4882_8069_1167_5",
        "URL=https://www.lowes.com/p13n/audiences/dbid/0c4d60e8-af11-4882-8069-11671292895b",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;prodNumber;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;bm_sv;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;akaalb_prod_dual"
    );

    ns_end_transaction("Xc4d60e8_af11_4882_8069_1167_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("cart_2");
    ns_web_url ("cart_2",
        "URL=https://www.lowes.com/gauge/pageview/cart",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;akaalb_prod_dual;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"3","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:35.755Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{}}},"track":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false},"path":"/pageview/cart","method":"post"}",
        BODY_END
    );

    ns_end_transaction("cart_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("experiments_4");
    ns_web_url ("experiments_4",
        "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;mbox;salsify_session_id;ecrSessionId;g_previous;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;akaalb_prod_dual;bm_sv;prodNumber"
    );

    ns_end_transaction("experiments_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("config_json_4");
    ns_web_url ("config_json_4",
        "URL=https://c.go-mpulse.net/api/config.json?key=W8H5V-D6KN9-TTLED-Y3VKD-B2SQA&d=www.lowes.com&t=5428866&v=1.720.0&sl=1&si=bde4fb69-2075-4aef-b0c6-45081221dd74-qxntz2&bcn=%2F%2F6852bd0e.akstat.io%2F&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,History,Angular,Backbone,Ember,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,Early,EventTiming,LOGN&acao=&ak.ai=299019",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://edge.fullstory.com/datalayer/1.0.0.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=Origin:https://www.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vice1.lowescdn.com/#/cart", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("config_json_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:1252752485&cup2hreq=fb45deda5e768c248855d2e0ca42701c7812ecc8c111b5f00608246361ba78b3",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,aemomkdncapdnfajjbbcbdebjljbpmpj,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,pdafiollngonhoadbmdoemagnfpdphbe",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.61",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"linux","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","enabled":true,"ping":{"r":-2},"updatecheck":{},"version":"0.0.0.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":6},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Linux","version":"5.11.0-25-generic"},"prodversion":"90.0.4430.61","protocol":"3.1","requestid":"{c6213d10-e14d-44ac-9264-1fc6cb5e6140}","sessionid":"{9c6f3495-5bee-4c37-a5c5-e737cb74b912}","updaterversion":"90.0.4430.61"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X491c344_6731_43df_81a0_3252_4");
    ns_web_url ("X491c344_6731_43df_81a0_3252_4",
        "URL=https://www.lowes.com/baymax/content/6491c344-6731-43df-81a0-32524f03cc4f?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("X491c344_6731_43df_81a0_3252_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("Xdd6630e_9917_45e8_9cb0_406f");
    ns_web_url ("Xdd6630e_9917_45e8_9cb0_406f",
        "URL=https://www.lowes.com/baymax/content/4dd6630e-9917-45e8-9cb0-406f68a72639?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("Xdd6630e_9917_45e8_9cb0_406f", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("d55f0191_4e9c_41e8_a79a_59ec_4");
    ns_web_url ("d55f0191_4e9c_41e8_a79a_59ec_4",
        "URL=https://www.lowes.com/baymax/content/d55f0191-4e9c-41e8-a79a-59ec06dba439?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("d55f0191_4e9c_41e8_a79a_59ec_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X02a512e_74ef_43dc_a3bb_e59a_4");
    ns_web_url ("X02a512e_74ef_43dc_a3bb_e59a_4",
        "URL=https://www.lowes.com/baymax/content/202a512e-74ef-43dc-a3bb-e59ab7541cf8?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("X02a512e_74ef_43dc_a3bb_e59a_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e1f4d7bd_9a2b_4611_86d0_d11d_3");
    ns_web_url ("e1f4d7bd_9a2b_4611_86d0_d11d_3",
        "URL=https://www.lowes.com/baymax/content/e1f4d7bd-9a2b-4611-86d0-d11dc250b78e?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("e1f4d7bd_9a2b_4611_86d0_d11d_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("X62c48ab_cd97_44b4_8c23_2ecb_4");
    ns_web_url ("X62c48ab_cd97_44b4_8c23_2ecb_4",
        "URL=https://www.lowes.com/baymax/content/562c48ab-cd97-44b4-8c23-2ecb1d8511af?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("X62c48ab_cd97_44b4_8c23_2ecb_4", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("e794234e_8f18_4f22_9df3_309c_3");
    ns_web_url ("e794234e_8f18_4f22_9df3_309c_3",
        "URL=https://www.lowes.com/baymax/content/e794234e-8f18-4f22-9df3-309ca853acf2?sdk=jssdk&appId=7679876983&env=prod",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;prodNumber;mbox;akaalb_prod_dual;bm_sv;g_previous"
    );

    ns_end_transaction("e794234e_8f18_4f22_9df3_309c_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("page_4");
    ns_web_url ("page_4",
        "URL=https://rs.fullstory.com/rec/page",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"OrgId":"Q8RZE","UserId":"4938477446668288","Url":"https://www.lowes.com/cart","Base":"https://www.lowes.com/cart","Width":1273,"Height":501,"ScreenWidth":1360,"ScreenHeight":663,"Referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","Preroll":4038,"Doctype":"<!DOCTYPE html>","CompiledVersion":"11e53d809a","CompiledTimestamp":1628185160}",
        BODY_END
    );

    ns_end_transaction("page_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_32");
    ns_web_url ("baymax_32",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"4","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.542Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]}}},"track":{"baymaxId":"BYM-215:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_32", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_33");
    ns_web_url ("baymax_33",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.710Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-307:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://services.sdiapi.com/reporter/1.0.5.1/reporter.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://static.ecorebates.com/ui/widgets/lowes/styles/cart.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vice1.lowescdn.com/cart", END_INLINE
    );

    ns_end_transaction("baymax_33", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("kinesis_collect");
    ns_web_url ("kinesis_collect",
        "URL=https://api.revlifter.io/v1/kinesis-collect",
        "METHOD=OPTIONS",
        "HEADER=Access-Control-Request-Method:POST",
        "HEADER=Access-Control-Request-Headers:content-type,x-requested-with",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9"
    );

    ns_end_transaction("kinesis_collect", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("productRebateDetails_json_js_3");
    ns_web_url ("productRebateDetails_json_js_3",
        "URL=https://lowes.ecorebates.com/api/search/lowes/productRebateDetails.json;jsessionid=A6F67222BF4F8DEDE427303F38685D33?filter_rebate_consumer_type=residential&retryZip=true&skus=5000143961&uiContext=PDP&jsoncallback=angular.callbacks._0",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://s.go-mpulse.net/boomerang/W8H5V-D6KN9-TTLED-Y3VKD-B2SQA", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fdz.flashtalking.com/services/lowes/FBI-2422_segment/?&U1=&U2=&U3=1985&U4=99701&U5=&U6=&U7=1&U8=&U9=&U10=1&U11=5000143961&U14=GE&U15=shopping-cart&U16=shopping-cart&U17=&U19=349.00&U20=Store_Pickup", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", END_INLINE,
            "URL=https://servedby.flashtalking.com/spot/1/10376;90695;9350/?spotName=Cart_Pages&&ftXName=&ftXNumItems=1&ftXRef=&ftXType=&ftXValue=349.00&U4=&U5=1&U6=1&U12=349.00&U14=GE&U1=&U2=&U3=99701&U7=6100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner&U10=&U11=2759118-83-APFD06JASW&U8=checkout&U9=shopping-cart&U15=&U16=&U17=&cachebuster=cachebuster=741734839871378", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=flashtalkingad1", END_INLINE
    );

    ns_end_transaction("productRebateDetails_json_js_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_12");
    ns_web_url ("bundle_12",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5209984341155840&Seq=1&PageStart=1628659896691&PrevBundleTime=0&LastActivity=820",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_12_main_url_1_1628659912599.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=If-None-Match:\"65cf0c0ceb852397f0d1e6732cd3c533+gzip\"", "HEADER=If-Modified-Since:Mon, 12 Jul 2021 23:59:25 GMT", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("bundle_12", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_34");
    ns_web_url ("baymax_34",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.720Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-309:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://d.agkn.com/pixel/9458/?che=9455745862292176&mcvsid=71747673865418841840298191736677393887", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=ab;u", END_INLINE,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://login.dotomi.com/ucm/UCMController?dtm_com=28&dtm_cid=2621&dtm_cmagic=cc7090&dtm_format=5&dtmc_product_id=5000143961&dtmc_fulfillment_channel=STK&dtmc_brand=GE&dtmc_department=checkout&dtmc_category=shopping-cart&dtm_fid=101&cli_promo_id=shopping-cart&dtmc_ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&dtmc_loc=https%3A%2F%2Fwww.lowes.com%2Fcart", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE
    );

    ns_end_transaction("baymax_34", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_6");
    ns_web_url ("collector_6",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqCgIHEB4QVhAISRBiagsDEAgDAQQCHhBiagsAEAgEBAEeEGJqAAQLEAgDAAoKHhBiagAFAhAIBAEEHhBiagMKBBAIAwAKCh4QYmoDCgcQCAcCAx4QYmoAAQAQCAMACgoeEGJqAAEDEAgHAgMeEGJqCwIKEAgQBAdUCgQAUAIfVFMEBx8DA1dQHwoLB1YfClZUBwsDVlQFAAIGEB4QYmoLAgsQCBAGCwQDVgICAh9UUwQHHwMDV1AfUFQFUx8BCwcDBVRTBAcEAwoQHhBiagsLBBAIEFFRAVcGUAZREB4QYmoKCwAQCEZAR1ceEGJqCwUHEAgDCwoKHhBiagMCAwIQCBBTUBAeEGJqCwMCEAgQBgsEAwEBUQIfVFMEBx8DA1dQH1BUBVMfAQsHAwVUUwQHBAMKEB4QYmoLAgUQCBADHAEcAQoHBBAeEGJqCwMKEAgQBgcHCwQDBQEEChAeEGJqCgACEAgQYmoKAwQQHhBiagsBAhAIXEdeXh4QYmoHBxAIEFpGRkJBFwFzFwB0FwB0RUVFHF5dRVdBHFFdXxcAdEJWFwB0dXcfBAICAh9wZmcfYl1ARlNQXlcfc1tAH3FdXFZbRltdXFdAFwB0BwICAgMGAQsEAxAeEGJqCgcCEAgCHhBiagoHAxAIBwIEBR4QYmoDAgcEEAgDBAAKBAcLCgsFBgoCHhBiagMCAQoQCBAEB1QEAwpRAh9UUwQHHwMDV1AfCwUEUR8KAwoLBVEEAQEHClYQHhBiagEFAxAIVFNeQVceEGJqCwQQCBBaRkZCQQgdHUVFRRxeXUVXQRxRXV8dUVNARhBPTx5JEEYQCBBiagAQHhBWEAhJEGJqCwQQCBBaRkZCQQgdHUVFRRxeXUVXQRxRXV8dUVNARhAeEGJqBAEQCBB W1xHShJKCgRtBAYQHhBiagMLAxAIAh4QYmoKBwIQCAMeEGJqCgcDEAgHAwIHHhBiagMCAgoQCAEEAgIeEGJqAwIHBxAIAwQACgQHCwoLBQYABB4QYmoDAgcEEAgDBAAKBAcLCgsFBgoDHhBiagMCAQoQCBAEB1QEAwpRAh9UUwQHHwMDV1AfCwUEUR8KAwoLBVEEAQEHClYQHhBiagEFAxAIVFNeQVdPT28="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "65f618c0-fa65-11eb-976c-81897c63358d"
, key: "ft"
value: "226"
, key: "seq"
value: "0"
, key: "en"
value: "NTA"
, key: "pc"
value: "1125413557808107"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "1"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://connect.facebook.net/signals/config/625799750871183?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://1060694.collect.igodigital.com/collect.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalst_1370143;igodigitalstdomain", END_INLINE
    );

    ns_end_transaction("collector_6", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_35");
    ns_web_url ("baymax_35",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.732Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-311:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_35", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_36");
    ns_web_url ("baymax_36",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.740Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-334:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/setting/accountproperties/?cb=lpCb70278x49762", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_36", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_37");
    ns_web_url ("baymax_37",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.750Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"}]}},"track":{"baymaxId":"BYM-287:V1"},"path":"/link/baymax","method":"POST"}",
        BODY_END
    );

    ns_end_transaction("baymax_37", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_38");
    ns_web_url ("baymax_38",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;IR_12374;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;_px_4559617368_cs;akavpau_cart;cartid;RT;mbox;akaalb_prod_dual;g_previous;bm_sv;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:36.759Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-287","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"BYM-347:C"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://analytics.twitter.com/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tpx_cb=twttr.conversion.loadPixels&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fcart", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=personalization_id", END_INLINE,
            "URL=https://t.co/i/adsct?type=javascript&version=2.0.1&p_id=Twitter&p_user_id=0&txn_id=nv09u&events=%5B%5B%22pageview%22%2Cnull%5D%5D&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tw_document_href=https%3A%2F%2Fwww.lowes.com%2Fcart", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/Pu4v-tN-kWF2q40ZuKM9Sg_9.28.0/AJF3c7ikkTZsKlD4Mc2H2vA", END_INLINE,
            "URL=https://cdn.krxd.net/partnerjs/xdi/proxy.3d2100fd7107262ecb55ce6847f01fa5.html#!kxcid=r0usxrln4&kxt=https%3A%2F%2Fvice1.lowescdn.com&kxcl=cdn&kxp=", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE
    );

    ns_end_transaction("baymax_38", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("kinesis_collect_2");
    ns_web_url ("kinesis_collect_2",
        "URL=https://api.revlifter.io/v1/kinesis-collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"Data":[{"timeStamp":111111111,"payloadType":"userdata","payload":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-287","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]},"context":{"w":"0l554347-da15-447f-9091-6e8941024cdc","u":"2264cea9-561b-4391-a2cf-df49e5250cf2","s":"9b790476-7d0d-4673-841d-7cd3601cfc6b","se":1631251848}}]}",
        BODY_END,
        INLINE_URLS,
            "URL=https://cdn.krxd.net/controltag/r0usxrln4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://cdn.krxd.net/ctjs/controltag.js.a1705c5ac5f06cf0c202ff70908fc042", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&es=1&e=gtm.init_consent&eid=10&tc=1&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&es=1&e=gtm.init&eid=11&tc=1&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.89cd5bf4.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("kinesis_collect_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax_39");
    ns_web_url ("baymax_39",
        "URL=https://www.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        INLINE_URLS,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://ad.doubleclick.net/activity;src=6450450;type=vfpro00;cat=shopp0;qty=1;cost=349.00;gtm=2od891;auiddc=1926396264.1628659852;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u5=;u6=349;u7=1;u10=1;u13=GE;u14=6100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner;u15=;u18=5000143961;u19=349.00;u20=storePickup;~oref=https%3A%2F%2Fwww.lowes.com%2Fcart?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&es=1&e=gtm.js&eid=4&tc=1&tr=1rep&ti=1rep&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&es=1&e=*&eid=5&tc=1&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&es=1&e=*&eid=6&tc=1&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consumer.krxd.net/consent/get/e30196c7-5053-416c-94a4-c1acfb09b619?idt=device&dt=kxcookie&callback=Krux.ns.lowes.kxjsonp_consent_get_0", END_INLINE,
            "URL=https://beacon.krxd.net/optout_check?callback=Krux.ns.lowes.kxjsonp_optOutCheck", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/1128484153951961?v=2.9.44&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCbd6afff198e94e748b5e2fd73f28d207-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax_39", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_15");
    ns_web_url ("index_15",
        "URL=https://6852bd0e.akstat.io/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://ct.pinterest.com/v3/?tid=2615619520270&pd=%7B%22page%22%3A%22shopping-cart%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fvice1.lowescdn.com%2Fcart%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22if%22%3Atrue%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659898812", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_pinterest_ct_ua", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?event=addtocart&ed=%7B%22value%22%3A349%2C%22order_quantity%22%3A1%2C%22currency%22%3A%22USD%22%2C%22customer_type%22%3A%22%22%2C%22known_state%22%3A%22%22%2C%22identity_id%22%3A%22%22%2C%22line_items%22%3A%5B%7B%22product_id%22%3A%225000143961%22%7D%5D%7D&tid=2615619520270&pd=%7B%22page%22%3A%22shopping-cart%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&ad=%7B%22loc%22%3A%22https%3A%2F%2Fvice1.lowescdn.com%2Fcart%22%2C%22ref%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961%22%2C%22if%22%3Atrue%2C%22sh%22%3A663%2C%22sw%22%3A1360%2C%22mh%22%3A%2289cd5bf4%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1628659898820", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_pinterest_ct_ua", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659898841&cv=9&fst=1628659898841&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1628659898844&cv=9&fst=1628659898844&num=1&bg=ffffff&guid=ON&resp=GooglemKTybQhCsO&eid=376635470&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&ig=1&data=event%3Dpage_view%3Becomm_pagetype%3Dshopping-cart%3Becomm_prodid%3D5000143961%3Becomm_totalvalue%3D349.00&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE
    );

    ns_end_transaction("index_15", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("mboxLoad_4");
    ns_web_url ("mboxLoad_4",
        "URL=https://www.lowes.com/gauge/link/mboxLoad",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;al_sess;region;AKA_A2;bm_sz;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;at_check;ak_bmsc;mboxEdgeCluster;sn;_lgsid;p13n;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;fs_uid;namOgoo;discover-exp-2;REVLIFTER;IR_gbd;_px_uAB;_px_f394gi7Fvmc43dfg_user_id;pxcts;_pxvid;_fbp;_gcl_au;_pin_unauth;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;cd_user_id;__gads;kampyleUserPercentile;salsify_session_id;ecrSessionId;_uetsid;_uetvid;kampyleSessionPageCounter;BVBRANDID;BVBRANDSID;_px3;akavpau_default;L_AT;L_RT;SHOPPINGCART;LPVID;LPSID-22554410;_abck;akavpau_cart;cartid;mbox;g_previous;RT;IR_12374;_px_4559617368_cs;akaalb_prod_dual;bm_sv;_pxff_fp;prodNumber",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisit":"First Visit","prodNum":"2","visitorAPI":"VisitorAPI Present"},"gauge":{"pageCount":"4","resolution":"1360x663","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1288","viewportHeight":"501","charset":"UTF-8","referrer":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","userAgent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.61 Safari/537.36","language":"en-US","timestamp":"2021-08-11T05:31:38.856Z","timezoneOffset":"300","host":"www.lowes.com","boomerID":"bde4fb69-2075-4aef-b0c6-45081221dd74","lowesDigitalId":"","kruxID":"OS0grtrm","respond":false,"scrollDepth":"9|24|15|5894","p_visit":"4","clientVersion":"1.4.0","previousPageType":"product-display","previousSitesections":"heating_cooling,air_conditioners_fans,room_air_conditioners,portable_air_conditioners","previousSiteID":"desktop","previousPageLoad":"9.07","botScore":null,"isPro":false,"proUser":{},"_lgsid":"1628659844121","dbid":"0c4d60e8-af11-4882-8069-11671292895b","bttsessionID":"317235676581651369"},"dataLayers":{"current":{"page":{"pageInfo":{"abtesting":["ABT-3773-A"],"destinationURL":"https://www.lowes.com/cart","referrerURL":"https://www.lowes.com/pd/GE-6000-BTU-Portable-Air-Conditioner/5000143961","siteID":"desktop","pageName":"shopping-cart"},"category":{"pageType":"shopping-cart","siteSections":["checkout","shopping-cart"],"platform":1,"framework":"1","helix":true}},"components":{},"user":{"profile":{"identityID":"0e89ec12-f1fa-45c1-b027-43ed6770e5aa","custType":"","profileInfo":{}},"attributes":{"storeID":"1985"},"status":"guest","companyProfile":{},"segment":"guest"},"cart":{"attributes":{"checkFreeShippingTracker":false,"checkGiftCardImpression":false,"promotions":[]},"cartID":"6831094681533210079","total":{"grandTotal":349,"shippingTax":"0.00","subTotal":"349.00","totalTax":"0.00","promotionCodes":[],"promotions":[]},"items":[{"ivm":"2759118-83-APFD06JASW","productID":"5000143961","orderItemID":"16286598876692180607","name":"6100-BTU DOE (8000-BTU ASHRAE) 115-Volt White Portable Air Conditioner","brand":"GE","quantity":1,"itemStockType":"STK","stockType":"STK","unitPrice":"349.00","wasPrice":"","type":"ANY","available":true,"availability":{"parcel":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"1","deliveryMethodName":"Ship to Home","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"pickup":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"truck":{"availabilityStatus":"NA","availabilityMessage":"NA","productStockType":"STK","availableQuantity":0,"deliveryMethodId":"3","deliveryMethodName":"Truck Delivery","storeNumber":"1985","leadtimeToday":false,"leadTime":null,"itmLdTmDays":0},"bopuis":{"availabilityStatus":"Available","availabilityMessage":"ready_as_soon_as_sat_aug_14_2021","productStockType":"STK","availableQuantity":327,"deliveryMethodId":"2","deliveryMethodName":"Store Pickup","storeNumber":"1436","leadtimeToday":false,"leadTime":1628931600000,"itmLdTmDays":3},"boss":{"availabilityStatus":"NA"}},"fulfillmentType":"10052","promotions":[],"linkedItems":[],"availablelinkedItems":[{"type":"epp","serviceSubOption":"2_year_lowes_protection_plan"}],"serviceComponent":true,"ltlItem":false,"odsItem":false,"hazmatItem":false,"hazmatLevelID":"RGL","shippingOptions":[],"isChildExists":false,"isParentItem":false,"truckOrderThreshold":false}],"pageViewData":{"errors":[],"productGroup":[],"promotionMessage":"undefined","fulfillmentItemAvailabilityError":false,"discountAmount":"0.00","automaticPromo":false}},"mboxes":{"names":["lwscom_global","lwscom_cart"],"tnta":[]},"experiments":[{"expError":null,"qualifiedExperiment":"PV-BYM-215","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-307","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-309","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-311","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-334","qualifiedVariant":"C"},{"expError":null,"qualifiedExperiment":"PV-BYM-287","qualifiedVariant":"V1"},{"expError":null,"qualifiedExperiment":"PV-BYM-347","qualifiedVariant":"C"}]}},"track":{"mboxes":"lwscom_global,lwscom_cart"},"path":"/link/mboxLoad","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://ad.doubleclick.net/activity;dc_pre=COOQz_WeqPICFUJLaAod1FcPHg;src=6450450;type=vfpro00;cat=shopp0;qty=1;cost=349.00;gtm=2od891;auiddc=1926396264.1628659852;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u5=;u6=349;u7=1;u10=1;u13=GE;u14=6100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner;u15=;u18=5000143961;u19=349.00;u20=storePickup;~oref=https%3A%2F%2Fwww.lowes.com%2Fcart?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE
    );

    ns_end_transaction("mboxLoad_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_2");
    ns_web_url ("json_2",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"linux","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","event":[{"download_time_ms":846,"downloaded":45009,"downloader":"direct","eventresult":1,"eventtype":14,"nextversion":"9.28.0","previousversion":"0.0.0.0","total":45009,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/Pu4v-tN-kWF2q40ZuKM9Sg_9.28.0/AJF3c7ikkTZsKlD4Mc2H2vA"},{"eventresult":1,"eventtype":3,"nextfp":"1.91ee417000553ca22ed67530545c4177a08e7ffcf602c292a71bd89ecd0568a5","nextversion":"9.28.0","previousversion":"0.0.0.0"}],"version":"9.28.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":6},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Linux","version":"5.11.0-25-generic"},"prodversion":"90.0.4430.61","protocol":"3.1","requestid":"{2ec1fdcf-5d31-47e6-9bd8-e6ea22278a6c}","sessionid":"{9c6f3495-5bee-4c37-a5c5-e737cb74b912}","updaterversion":"90.0.4430.61"}}",
        BODY_END
    );

    ns_end_transaction("json_2", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("index_16");
    ns_web_url ("index_16",
        "URL=https://ct.pinterest.com/user/?tid=2615619520270&pd=%7B%22page%22%3A%22shopping-cart%22%2C%22pin_unauth%22%3A%22dWlkPVkyUmlOV0kxTWpFdE5HUTVaQzAwWWpreUxUazNNMlF0T1dRNVlqVXhOVGRpTlRKag%22%7D&cb=1628659898810",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=_pinterest_ct_ua",
        INLINE_URLS,
            "URL=https://services.sdiapi.com/reporter/1.0.5.1/reporter.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.13.1.0-release_5043/storage.secure.min.html?loc=https%3A%2F%2Fwww.lowes.com&site=22554410&env=prod&isCrossDomain=true", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.13.1.0-release_5043/storage.secure.min.js?loc=https%3A%2F%2Fwww.lowes.com&site=22554410&env=prod&isCrossDomain=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/p/action/5668750.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=PageView&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659899188&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=PageView&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659899223&sw=1360&sh=663&v=2.9.44&r=stable&ec=0&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=AddToCart&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659899241&cd[customer_type]=&cd[known_state]=&cd[identity_id]=&cd[content_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[content_type]=product&cd[content_category]=shopping-cart&cd[product_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[value]=349.00&cd[currency]=USD&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=AddToCart&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659899260&cd[customer_type]=&cd[known_state]=&cd[identity_id]=&cd[content_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[content_type]=product&cd[content_category]=shopping-cart&cd[product_ids]=%5B%222759118-83-APFD06JASW%22%5D&cd[value]=349.00&cd[currency]=USD&sw=1360&sh=663&v=2.9.44&r=stable&ec=1&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=a583b030-889b-4f12-a523-71975f432e27&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&pi=0&lg=en-US&sw=1360&sh=663&sc=24&tl=Shopping%20Cart%20-%20Lowes.com&p=https%3A%2F%2Fwww.lowes.com%2Fcart&r=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&lt=4448&evt=pageLoad&msclkid=N&sv=1&rn=960917", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://cdn.krxd.net/userdata/get?pub=e30196c7-5053-416c-94a4-c1acfb09b619&callback=Krux.ns.lowes.kxjsonp_userdata", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC07fa4ad32f7b406b8c9c37863504f784-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://adservice.google.com/ddm/fls/z/dc_pre=COOQz_WeqPICFUJLaAod1FcPHg;src=6450450;type=vfpro00;cat=shopp0;qty=1;cost=349.00;gtm=2od891;auiddc=*;u1=;u3=1985;u4=99701;u24=;u25=;u26=;u5=;u6=349;u7=1;u10=1;u13=GE;u14=6100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner;u15=;u18=5000143961;u19=349.00;u20=storePickup;~oref=https%3A%2F%2Fwww.lowes.com%2Fcart", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://services.sdiapi.com/reporter/1.0.5.1/receiver.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.btttag.com/analytics.rcv?pgNm=shopping-cart&trSeg=eCommerce-www.lowes.com&navStart=1628659892373", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://www.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/a?id=AW-1031919983&cv=1&v=3&t=t&pid=1774684362&rv=891&e=gtm.js&eid=4&u=C&tc=1&tr=5rep&ti=1rep&z=0", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nova.collect.igodigital.com/c2/1060694/track_cart?payload=%7B%22cart%22%3A%5B%7B%22item%22%3A%225000143961%22%2C%22quantity%22%3A%221%22%2C%22price%22%3A%22349.00%22%2C%22unique_id%22%3A%225000143961%22%2C%22discount%22%3A%22%22%2C%22shipping%22%3A%22Store_Pickup%22%7D%5D%2C%22url%22%3A%22https%3A%2F%2Fvice1.lowescdn.com%2Fcart%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%22%22%2C%22known_state%22%3A%22%22%7D%7D%2C%22child_ids%22%3A%5B%221370143%22%5D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=igodigitaltc2;igodigitalst_1060694;igodigitalst_1370143;igodigitalstdomain", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/22554410/configuration/domainprotection/refererrestrictions?cb=lpCb91966x75481", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659898841&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&async=1&fmt=3&is_vtc=1&random=3265581555&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659898841&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dgtag.config&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&async=1&fmt=3&is_vtc=1&random=3265581555&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1628659898844&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&eid=376635470&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dshopping-cart%3Becomm_prodid%3D5000143961%3Becomm_totalvalue%3D349.00&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&async=1&fmt=3&is_vtc=1&random=59110578&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.co.in/pagead/1p-user-list/1031919983/?random=1628659898844&cv=9&fst=1628658000000&num=1&bg=ffffff&guid=ON&eid=376635470&u_h=663&u_w=1360&u_ah=636&u_aw=1288&u_cd=24&u_his=5&u_tz=-300&u_java=false&u_nplug=0&u_nmime=0&gtm=2oa891&sendb=1&data=event%3Dpage_view%3Becomm_pagetype%3Dshopping-cart%3Becomm_prodid%3D5000143961%3Becomm_totalvalue%3D349.00&frm=0&url=https%3A%2F%2Fwww.lowes.com%2Fcart&ref=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&tiba=Shopping%20Cart%20-%20Lowes.com&async=1&fmt=3&is_vtc=1&random=59110578&resp=GooglemKTybQhCsO&rmt_tld=1&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_16", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("index_17");
    ns_web_url ("index_17",
        "URL=https://ct.pinterest.com/md/",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"urls":{"loc":"https://vice1.lowescdn.com/cart"},"aux":{"micro_s":940},"tid":"2615619520270"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://nebula-cdn.kampyle.com/wu/392339/onsite/embed.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RC75823becabb5495994ee06e85292e064-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/df09e394a55e/RCa737427ceb15428aa0cc62aee1513675-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://services.sdiapi.com/reporter/1.0.5.1/worker.js", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:same-origin", "HEADER=Sec-Fetch-Dest:sharedworker", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/us/wu/392339/onsite/generic1627562585749.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index_17", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_7");
    ns_web_url ("collector_7",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqARAeEFYQCEkQYmoAAQYQCFRTXkFXHhBiagABBxAIVFNeQVceEGJqAwcDEAhUU15BVx4QYmoAAQsQCFRTXkFXHhBiagAGAhAIVFNeQVceEGJqAwcAEAhUU15BVx4QYmoDBwEQCFRTXkFXHhBiagEDBhAIVFNeQVceEGJqAwsAEAhUU15BVx4QYmoDCwQQCFRTXkFXHhBiagACBRAIVFNeQVceEGJqAAcDEAhUU15BVx4QYmoLCgAQCAMEAAoEBwsKCwUEBQIeEGJqCwoBEAgQBgYKBwACCgcBCgAHAgAHBQEDCwYQHhAEBAgFAgAIBQMIAgUAAgUHAwEJBBAIEAcHCwYBAwsGAAsBBgMBBgQAAgoHEB4QYmoLCgQQCBADAAUBAgQGAwoHAgAABwYCBgICAxAeEGJqCwoHEAgEBgAGHhBiagMCAQEQCBBXAldTVAMCVxAeEGJqAwIDCxAIEFYDCwMFUVMGEB4QYmoDAgACEAgQBQUEBFMHAFYQHhBiagMCAAMQCBBUAAJUVFQEChAeEGJqAwIAABAIEARTCwIBBQpWEB4QYmoDAgEHEAhGQEdXHhBiagMDAQsQCFRTXkFXHhBiagMCAAcQCFRTXkFXHhBiagEHCxAIEAUKB1RTBVRTAAoLBFYLUFcCAwRUAldTA1EHAFMLBwAGEB4QYmoLBgEQCBBRBgtfA1dUXEEGVEQGClhUVllHAhAeEGJqAQcFEAgQUAUBAgMEC1cFAwUABVQBAlADBAEBVwsEAFACCwRQUAAQHhBiagEHChAIEApQUQYDBgMHVwtXBVNUCwFWVAcCAwBTClEHUQZUCwpTEB4QYmoAAAsQCAAGHhBiagABAhAIAAYeEGJqCwMQCAMBBAIeEGJqCwAQCAQEAR4QYmoABAsQCAMACgoeEGJqAAUCEAgEAQQeEGJqCwEQCBADAQQCagQEARAeEGJqAwoHEAgHAgMeEGJqAwoEEAgDAAoKHhBiagMKBRAIAh4QYmoDCgoQCAEBBB4QYmoLBxAIRkBHVx4QYmoGAgIQCAADCgseEGJqBgIGEAgQAwYGTgcGTgcGTgMKAk4EChAeEGJqCwIQCGkQXl1TVmZbX1dBEB4QUUFbEB4QU0JCEB4QQEdcRltfVxBvHhBiagMLAhAIEBAeEGJqBwcAEAgQVFNeQVcQHhBiagELCxAIEFRTXkFXEB4QYmoHBgsQCAMeEGJqBgMDEAgDHhBiagYCBxAIRkBHVx4QYmoHBgUQCEZAR1ceEGJqAwEGEAhGQEdXHhBiagoLEAhGQEdXHhBiagMFAhAIAh4QYmoKBxAIaW8eEGJqAwMKAhAIVFNeQVceEGJqBwsQCBB/XUhbXl5THQccAhIaagMDCRJ W1xHShJKCgRtBAYbEnNCQl5XZVdQeVtGHQcBBRwBBBIaeXpmf34eEl5bWVcSdVdRWV0bEnFaQF1fVx0LAhwCHAYGAQIcBAMSYVNUU0BbHQcBBRwBBBAeEGJqBAMQCBBXXB9nYRAeEGJqAQMBEAhpEFdcH2dhEB4QV1wQbx4QYmoEARAIEH5bXEdKEkoKBG0EBhAeEGJqCgQQCEZAR1ceEGJqAwcGEAgBAgIeEGJqAwMHBRAIBh4QYmoDAwUBEAgAHhBiagMBARAIRkBHVx4QYmoKChAIRkBHVx4QYmoDBAsQCB8DHhBiagQAEAgQdVdRWV0QHhBiagQLEAgQAAICAQIDAgUQHhBiagQGEAgQBxwCEhpqAwMJEn5bXEdKEkoKBG0EBhsSc0JCXldlV1B5W0YdBwEFHAEEEhp5emZ/fh4SXltZVxJ1V1FZXRsScVpAXV9XHQsCHAIcBgYBAhwEAxJhU1RTQFsdBwEFHAEEEB4QYmoEBxAIEHxXRkFRU0JXEB4QYmoEBBAIEH9dSFteXlMQHhBiagMDBgYQCEZAR1ceEGJqAwMHABAIBBwGHhBiagMDBwEQCAACAh4QYmoDAwcGEAhUU15BVx4QYmoDAwcHEAgQBlUQHhBiagQCEAhGQEdXHhBiagoFEAhGQEdXHhBiagoAAxAIAAMFAAQGCwYFAB4QYmoKAAAQCAMBCwEDBwMGAx4QYmoKAAEQCAQHBgAGBQAHHhBiagMGBRAIVFNeQVceEGJqAwcHEAgQZVdWEnNHVRIDAxIAAgADEgICCAEDCAEKEnV/Zh8CBwICEhpxV1xGQFNeEnZTS15bVVpGEmZbX1cbEB4QYmoAAQQQCFRTXkFXHhBiagMLBhAIVFNeQVceEGJqAwsHEAhGQEdXHhBiagABBRAIAh4QYmoAAQoQCBBfW0FBW1xVEB4QYmoAAgoQCBBEW0FbUF5XEB4QYmoAAwoQCAIeEGJqAAEDEAgHAgMeEGJqAAEAEAgDAAoKHhBiagAHBhAIVFNeQVceEGJqAAsHEAhUU15BVx4QYmoABAoQCFRTXkFXHhBiagMEBBAIRkBHVx4QYmoDAQoQCEZAR1ceEGJqAwYBEAhGQEdXHhBiagMDBgAQCAEeEGJqAwMGARAIBx4QYmoDAwYEEAgCHhBiagMDBgUQCAEeEGJqBQMGEAgQV1YEUFECBwUQHhBiagUDBxAIEBAeEGJqBQAGEAgQCwoCCwUBBwsQHhBiagUABxAIEAsKAgsFAQcLEB4QYmoFAAsQCBALAlcEBwYEBxAeEGJqBgYBEAhGQEdXHhBiagYEBBAIRkBHVx4QYmoGBAUQCEZAR1ceEGJqBgQKEAhGQEdXHhBiagMLAxAIAh4QYmoLBhAIBx4QYmoDAAIQCGlvHhBiagMGAxAIVFNeQVceEGJqCwQQCBBaRkZCQQgdHUVFRRxeXUVXQRxRXV8dUVNARhAeEGJqBwcQCBBaRkZCQRcBcxcAdBcAdEVFRRxeXUVXQRxRXV8XAHRCVhcAdHV3HwQCAgIfcGZnH2JdQEZTUF5XH3NbQB9xXVxWW0ZbXVxXQBcAdAcCAgIDBgELBAMQHhBiagEGEAgQd0BAXUBuXBISEhJTRhJkVxIaWkZGQkEIHR1RXltXXEYcQldAW19XRldAShxcV0YdYmoEA2VkQURbCh1fU1tcHF9bXBxYQQgBCAMDBwEEG25cEhISElNGEmNXEhpaRkZCQQgdHVFeW1dcRhxCV0BbX1dGV0BKHFxXRh1iagQDZWRBRFsKHV9TW1wcX1tcHFhBCAEIAAYKBRtuXBISEhJTRhJaRkZCQQgdHVFeW1dcRhxCV0BbX1dGV0BKHFxXRh1iagQDZWRBRFsKHV9TW1wcX1tcHFhBCAEIAAUKBxAeEGJqAwIEBxAIAx4QYmoKBwIQCAAeEGJqCgcDEAgEBwIFHhBiagMCBwYQCAMEAAoEBwsKCwoBBgseEGJqAwICChAIAQQCAh4QYmoDAgcHEAgDBAAKBAcLCgsFBgAEHhBiagMCBwQQCAMEAAoEBwsKCwsBCwoeEGJqAwIBChAIEAQHVAQDClECH1RTBAcfAwNXUB8LBQRRHwoDCgsFUQQBAQcKVhAeEGJqAQUDEAhUU15BV09Pbw=="
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "65f618c0-fa65-11eb-976c-81897c63358d"
, key: "ft"
value: "226"
, key: "seq"
value: "1"
, key: "en"
value: "NTA"
, key: "cs"
value: "dd711a92098919fc2bf841b0cd67730eb0203a864914aef5eb7144d9bd82d29e"
, key: "pc"
value: "8507330849981782"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991\363\240\204\261\363\240\204\266\363\240\204\262\363\240\204\270\363\240\204\266\363\240\204\265\363\240\204\271\363\240\204\270\363\240\204\271\363\240\204\267\363\240\204\266\363\240\204\267\363\240\204\260"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "2"
]",
        BODY_END
    );

    ns_end_transaction("collector_7", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("analytics_rcv_4");
    ns_web_url ("analytics_rcv_4",
        "URL=https://d.btttag.com/analytics.rcv?pgNm=shopping-cart&trSeg=eCommerce-www.lowes.com&navStart=1628659892373",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=collection;enabled;sessionID;lowes15841z-txnName;lowes15841z-BrowserVersion",
        BODY_BEGIN,
            "eyJ0aGlzVVJMIjoiaHR0cHM6Ly93d3cubG93ZXMuY29tL2NhcnQiLCJwYWdlTmFtZSI6InNob3BwaW5nLWNhcnQiLCJuc3QiOiIxNjI4NjU5ODkyMzczIiwidW5sb2FkRXZlbnRTdGFydCI6IjE2Mjg2NTk4OTM3NzMiLCJyZWRpcmVjdFN0YXJ0IjoiMCIsImNfY291bnQiOiIwIiwiY29fY291bnQiOiIwIiwidG90UkQiOiIwIiwiZmV0Y2hTdGFydCI6IjE2Mjg2NTk4OTIzNzgiLCJkb21haW5Mb29rdXBTdGFydCI6IjE2Mjg2NTk4OTIzNzgiLCJjb25uZWN0U3RhcnQiOiIxNjI4NjU5ODkyMzc4Iiwic2VjdXJlQ29ubmVjdGlvblN0YXJ0IjoiMCIsInJlcXVlc3RTdGFydCI6IjE2Mjg2NTk4OTIzOTAiLCJyZXNwb25zZVN0YXJ0IjoiMTYyODY1OTg5Mzc2NSIsIlJFRSI6IjE2Mjg2NTk4OTM3OTYiLCJCUFQiOiIzMSIsImRvbUxvYWRpbmciOiIxNjI4NjU5ODkzODAxIiwiZG9tSW50ZXJhY3RpdmUiOiIxNjI4NjU5ODk0OTEyIiwiZG9tQ29udGVudExvYWRlZFN0YXJ0IjoiMTYyODY1OTg5NTE4NiIsImRvbUNvbnRlbnRMb2FkZWRFbmQiOiIxNjI4NjU5ODk1MTk4IiwibG9hZEV2ZW50U3RhcnQiOiIxNjI4NjU5ODk2Nzc0IiwibmF2aWdhdGlvblR5cGUiOiIxIiwicmVkaXJlY3RDb3VudCI6IjAiLCJwYWdlVHlwZSI6IkdDUCBDYXJ0IC0gSGVsaXggQUIiLCJwYWdlVmFsdWUiOiIwIiwicGdUbSI6IjQ0MDEiLCJkbnMiOiIwIiwidGNwIjoiMCIsImRvbSI6IjI5NzAiLCJmQnl0ZSI6IjEzNzUiLCJzc2wiOiIwIiwiZmlyc3RQYWludCI6IjE2ODUiLCJmQ1BudCI6IjE2ODUiLCJmbXAiOiIwIiwidHRpIjoiMCIsImx0X3R0aSI6IjAiLCJmcHNfdHRpIjoiMCIsImZwcyI6IjAiLCJGSURzIjoiMCIsIkZJRGQiOiIwIiwiTENQIjoiMzcwMiIsIkNMU2UiOiIyODQ2IiwiQ0xTIjoiMC4wMTg2NzM4OTI4MDMxMTUxMDciLCJUQlQiOiIwIiwiU2NybkgiOiI2NjMiLCJTY3JuVyI6IjEzNjAiLCJwV1N6IjoiMjUwODc1IiwicFN6IjoiOTM4MjAzIiwiSU1BR0VfU0laRSI6IjAiLCJKU19TSVpFIjoiMTYwNjkwIiwiZWxlbWVudENvdW50IjoiMTA3IiwiY2FydFZhbHVlIjoiMCIsIk9OdW1CciI6IjAiLCJvcmRlclRORCI6IjAiLCJlVCI6IjUiLCJzaXRlSUQiOiJsb3dlczE1ODQxeiIsInR4bk5hbWUiOiJlQ29tbWVyY2Utd3d3Lmxvd2VzLmNvbSIsImNhbXBhaWduIjoiIiwiQUIiOiJEZWZhdWx0IiwiRENUUiI6ImVhc3QiLCJ0b3AiOiItMzA0OCIsImJ2IjoiMCIsImJ2em4iOiJDaHJvbWUtOTAiLCJ0dWwiOiIwIiwiRVVPUyI6IkxpbnV4IiwiY3VycmVuY3lDb2RlIjoiIiwic0lEIjoiMzE3MjM1Njc2NTgxNjUxMzY5IiwiZ0lEIjoiMzE3MjM1Njc2NTgxNjUxMzY5IiwiU0hpIjoiNjYzIiwiU1dpIjoiMTM2MCIsIkNTSUQiOiIwIiwiQ1YxIjoiMGM0ZDYwZTgtYWYxMS00ODgyLTgwNjktMTE2NzEyOTI4OTViIiwiQ1YyIjoiMCIsIkNWMyI6IjAiLCJDVjQiOiIwIiwiQ1Y1IjoiMCIsIkNWNiI6InN0YWJsZSIsIkNWNyI6IkNvb2tpZSBQcmVzZW50IiwiQ1Y4IjoiWmlwcGVkIiwiQ1Y5IjoidW5kZWZpbmVkIiwiQ1YxMCI6Ik5hbW9nb28gT24iLCJDVjExIjoiMCIsIkNWMTIiOiIwIiwiQ1YxMyI6IjAiLCJDVjE0IjoiMCIsIkNWMTUiOiIwIiwiQ04xIjoiMCIsIkNOMiI6IjAiLCJDTjMiOiIwIiwiQ040IjoiMCIsIkNONSI6IjAiLCJDTjYiOiIwIiwiQ043IjoiMCIsIkNOOCI6IjAiLCJDTjkiOiIwIiwiQ04xMCI6IjAiLCJDTjExIjoiMCIsIkNOMTIiOiIwIiwiQ04xMyI6IjAiLCJDTjE0IjoiMCIsIkNOMTUiOiIwIiwiQ04xNiI6IjAiLCJDTjE3IjoiMCIsIkNOMTgiOiIwIiwiQ04xOSI6IjAiLCJDTjIwIjoiMCIsIndjZCI6IjAiLCJMVE0iOiIxNjI4NjU5ODk1Nzk1IiwiV0NEdHQiOiJjIiwiTlZTVFIiOiIwIiwiUlYiOiIwIiwiY29sbGVjdEF0IjoiMTAwIiwiQ21wUyI6IkRpcmVjdCIsIkNtcE0iOiJOb25lIiwiQ21wTiI6IiIsIlJlZlVSTCI6Imh0dHBzOi8vd3d3Lmxvd2VzLmNvbS9wZC9HRS02MDAwLUJUVS1Qb3J0YWJsZS1BaXItQ29uZGl0aW9uZXIvNTAwMDE0Mzk2MSJ9",
        BODY_END,
        INLINE_URLS,
            "URL=https://wkxppshj-qx.global.ssl.fastly.net/nrse.html", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/ANlaTV2JH2WK9RCoHi__mxg_1.0.6/S3ybLvFx94Hgn9pWLt24ug", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("analytics_rcv_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_3");
    ns_web_url ("json_3",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"linux","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","event":[{"download_time_ms":108,"downloaded":9555,"downloader":"direct","eventresult":1,"eventtype":14,"nextversion":"1.0.6","previousversion":"0.0.0.0","total":9555,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/ANlaTV2JH2WK9RCoHi__mxg_1.0.6/S3ybLvFx94Hgn9pWLt24ug"},{"eventresult":1,"eventtype":3,"nextfp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7","nextversion":"1.0.6","previousversion":"0.0.0.0"}],"version":"1.0.6"}],"arch":"x64","dedup":"cr","hw":{"physmemory":6},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Linux","version":"5.11.0-25-generic"},"prodversion":"90.0.4430.61","protocol":"3.1","requestid":"{e4b6657c-181b-4a77-84d2-44c61cf508a6}","sessionid":"{9c6f3495-5bee-4c37-a5c5-e737cb74b912}","updaterversion":"90.0.4430.61"}}",
        BODY_END
    );

    ns_end_transaction("json_3", NS_AUTO_STATUS);

    //Page Auto split for application/json type
    ns_start_transaction("LLODOWS854_json_4");
    ns_web_url ("LLODOWS854_json_4",
        "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LLODOWS854.json",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:script",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=https://colrep.sitelabweb.com/rp/?d=OMDQfU22f3dcYvGF1BDGjNaNuj-INX4TEXJGy0pogQ9yDScBb0qsgRiTzZYji1p20Q-zqQJ7D032Bxum__cgh9p2FP6Hi4Vltm07BHK2ogMf8z1wQ_ij1tNs4zmNQd-CzFc7YnF14N8mEWZsuuyIdg3WqkTioEtNdpAD8YJ-8l5N0MhSRrO64ipJ0V-T9RJ79i3~EGxj9hNt44kFkktDuMd~t9tr9TNWbOYf3yvNUJhCqkMsDY_2EE-0i5M4zMF15FECybMh04jY8iuCyLMCqB1cBDLVIHYyTp6rUNmjqlNcbzaIUR-C6gSbDN7jUA-yybMgHpxqUQtjPsZ~0r0Ik68jrkaVuv49UAhkutMsbwZJQV-zaEN40l0FBg7W1LcB4liXYhtzqUMSBm-bFKDXMYZjgz399JkTXZdB0pmo0P-2yPMc451FAJ72qiZBmhuFFPt2ScO~-1oZEP8m0TNQ8z39Q_uDupNOx5l2hE-mj4ZsC0DnM8xDnPYO01kIUctzlcMhGm1cYW9CDKc~4mt9hRzHYlJ7uBX2JkyTjbdQQ3-Ix7D2zcLBivyEUcymaHcG3m2bV8PjhRJ~Lzw95BuWjoZAx9rsJWCSz3Yp090VFzyDyaN8ihj2ROuGldO~yinZN382vHM~-0qQV6ijaZYilzc2MQCTqNMpKzC~Ry7zvQN85iuWQd3jaHZxyknZJ6KTCTLxxx-cABt2SqaAxzc6NEG3n9bPsl0FMBxWyfNt_2iqEg4G_bZCB5y6IN82yVYj3y1sQNuWaqM6-y_ZEX-j5ON4030kIzy0r3QNpyilMb4TdcMxBzyoR5Kz5INxLi0NQOtjjUZ7qkaoJEBTyHL48xBVAzxjqaN84xkFAgujyeJFazpsRJQW8Ic-x96wJSuSvgcS39_nZHCXjFPtDyI1U~8mETPt_mzZVa73XbPwCy-o0I&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data=eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTM2MHg2NjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoWDExOyBMaW51eCB4ODZfNjQpIEFwcGxlV2ViS2l0LzUzNy4zNiAoS0hUTUwsIGxpa2UgR2Vja28pIENocm9tZS85MC4wLjQ0MzAuNjEgU2FmYXJpLzUzNy4zNiIsInNlc3Npb25fcGxhdGZvcm0iOiAiTGludXggeDg2XzY0IiwicmVmZXJyaW5nX3VybCI6ICJodHRwczovL3d3dy5sb3dlcy5jb20vcGQvR0UtNjAwMC1CVFUtUG9ydGFibGUtQWlyLUNvbmRpdGlvbmVyLzUwMDAxNDM5NjEiLCJyZWZlcnJpbmdfZG9tYWluIjogInd3dy5sb3dlcy5jb20iLCJ0cmFja2VyX3R5cGUiOiAiamF2YXNjcmlwdCIsInRyYWNrZXJfdmVyc2lvbiI6ICIyLjEuMTUiLCJldmVudF9uYW1lIjogIm5lYnVsYV9wYWdlX3ZpZXciLCJldmVudF90aW1lc3RhbXBfZXBvY2giOiAiMTYyODY1OTkwMDk1MiIsImV2ZW50X3RpbWV6b25lX29mZnNldCI6IC01LCJ1c2VyX2lkIjogIjE3YjMzYjEyNGYwNWNlLTBjZmZjMWJlNDI2ZDZmLTE2MmMxYTBjLWRjMjMwLTE3YjMzYjEyNGYxNzJjIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiAzOTIzMzcsInVybCI6ICJodHRwczovL3d3dy5sb3dlcy5jb20vY2FydCIsIndlYnNpdGVJZCI6IDM5MjMzOSwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiMDYwNi0yYTkyLWJjNzUtZTEwYi1lYTgzLWEzMjUtYjE5Ny0yYzMyIiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIjE2Mjg2NTk4NTIzNzYiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiNjkuNDYxMzEzMTA2MTA5MDYiLCJTVUJNSVRURURfREFURSI6ICIifSwiY29va2llX3NpemUiOiA0ODA5LCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zOS4wIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zOS4wIiwiaGlzdG9yeV9sZW5ndGgiOiA1LCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjI4NjU5OTAwNDgxLCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZCI6IG51bGx9Cl19", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb67512x23609&t=sp&ts=1628659901032&pid=8809011165&tid=7916049064&vid=MwZjUwNjU5YTYyZDUxNjk3&rvt=1628659889992&pt=Shopping%20Cart%20-%20Lowes.com&u=https%3A%2F%2Fwww.lowes.com%2Fcart&r=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&sec=%5B%22lowes%20%3A%20shopping-cart%20%3A%20checkout%2Cshopping-cart%22%2C%221%22%5D&df=0&os=2&identities=%5B%7B%22iss%22%3A%22LivePerson%22%2C%22acr%22%3A%220%22%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("LLODOWS854_json_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_8");
    ns_web_url ("collector_8",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqAAsFEB4QVhAISRBiagEKEAgQX11HQVddRFdAEB4QYmoFAhAIAAAHBR4QYmoDBwUQCBBGQEdXEB4QYmoFABAIEHR9fWZ3YAx2e2QIXEZaH1FaW15WGgMbDHZ7ZAhcRlofUVpbXlYaAxsQHhBiagEGEAgQZktCV3dAQF1ACBJxU1xcXUYSQFdTVhJCQF1CV0BGSxIVAhUSXVQSXEdeXm5cEhISElNGEmRGEhpaRkZCQQgdHVFeW1dcRhxCV0BbX1dGV0BKHFxXRh1iagQDZWRBRFsKHV9TW1wcX1tcHFhBCAAIAwcEAwUbblwSEhISU0YSemZ/fnBdVkt3XldfV1xGHGFAEhpaRkZCQQgdHVFeW1dcRhxCV0BbX1dGV0BKHFxXRh1iagQDZWRBRFsKHV9TW1wcX1tcHFhBCAEIAwUFBwobEB4QYmoFChAIAwIFBR4QYmoFCxAIBgYKHhBiagoHAhAIAR4QYmoKBwMQCAUBAwIeEGJqAwIHBBAIAwQACgQHCwsCAgUKCh4QYmoDAgEKEAgQBAdUBAMKUQIfVFMEBx8DA1dQHwsFBFEfCgMKCwVRBAEBBwpWEB4QYmoBBQMQCFRTXkFXHhBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHVFTQEYQT08eSRBGEAgQYmoAAxAeEFYQCEkQYmoHBRAIEGluEGZLQld3QEBdQAgScVNcXF1GEkBXU1YSQkBdQldARksSFQIVEl1UElxHXl4SU0YSZEYSU0YSemZ/fnZdUUdfV1xGHFVXRndeV19XXEZBcEtmU1V8U19XElNGEksSHhIOU1xdXEtfXUdBDAgDCAQHAAUKGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgEBwsBBxsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIBAoEBwEbElNGElFqEh4SDlNcXVxLX11HQQwIAwgDAQUFBxsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIBAYHBwobbhAebhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJ0R1xRRltdXBxXRFNeEh4SDlNcXVxLX11HQQwIAwgBAwYBCxsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwYEAAMbElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAoBAQEbbhBvEB4QYmoKBwIQCAYeEGJqCgcDEAgFCgEHHhBiagMCBwQQCAMEAAoEBwsLAgIFCgseEGJqAwIBChAIEAQHVAQDClECH1RTBAcfAwNXUB8LBQRRHwoDCgsFUQQBAQcKVhAeEGJqAQUDEAhUU15BV09PHkkQRhAIEGJqAAMQHhBWEAhJEGJqBwUQCBBpbhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJ9UFhXUUYcV0RTXhIeEg5TXF1cS19dR0EMCAMIBgoLBwYbElNGEnRHXFFGW11cHFdEU14SHhIOU1xdXEtfXUdBDAgDCAQDAQQFGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDBgQAAxsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMICgEBARtuEG8QHhBiagoHAhAIBx4QYmoKBwMQCAoGAgAeEGJqAwIHBBAIAwQACgQHCwsCAgULAx4QYmoDAgEKEAgQBAdUBAMKUQIfVFMEBx8DA1dQHwsFBFEfCgMKCwVRBAEBBwpWEB4QYmoBBQMQCFRTXkFXT09v"
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "65f618c0-fa65-11eb-976c-81897c63358d"
, key: "ft"
value: "226"
, key: "seq"
value: "3"
, key: "en"
value: "NTA"
, key: "cs"
value: "dd711a92098919fc2bf841b0cd67730eb0203a864914aef5eb7144d9bd82d29e"
, key: "pc"
value: "0897078408770982"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991\363\240\204\261\363\240\204\266\363\240\204\262\363\240\204\270\363\240\204\266\363\240\204\265\363\240\204\271\363\240\204\270\363\240\204\271\363\240\204\267\363\240\204\266\363\240\204\267\363\240\204\260"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "3"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://beacon.krxd.net/pixel.gif?source=smarttag&fired=user_data_timeout&confid=r0usxrln4&_kpid=e30196c7-5053-416c-94a4-c1acfb09b619&_kcp_s=Lowes&_kcp_d=vice1.lowescdn.com&_knifr=1&_kpref_=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&_kua_kx_tz=300&geo_country=in&geo_region=or&_kua_kx_lang=en-us&_kua_kx_tech_browser_language=en-us&_kua_kx_geo_country=in&_kua_kx_geo_region=or&_kua_kx_tech_browser=Chrome%209&_kua_kx_tech_manufacturer=Other&_kua_kx_tech_device=Computer&_kua_kx_tech_os=Linux&_kua_kx_whistle=0&_kua_userType=diy&_kpa_domain=lowescdn.com&_kpa_lowes_page.sysEnv=lowescdn.com&t_navigation_type=0&t_dns=0&t_tcp=0&t_http_request=-1&t_http_response=5&t_content_ready=407&t_window_load=407&t_redirect=0&interchange_ran=false&userdata_was_requested=true&userdata_did_respond=true&store_user_after=wkiiqd06g&userdata_user=OS0grtrm%2Cwkiiqd06g&sview=4&kplt0=32022&kplt1=35845&kplt2=31609&kplt3=32302&kplt4=32892&kplt5=32365&kplt6=32880&kplt7=45511&kplt8=46780&kplt9=46851&kplt10=47456&jsonp_requests=https%3A%2F%2Fconsumer.krxd.net%2Fconsent%2Fget%2Fe30196c7-5053-416c-94a4-c1acfb09b619%2C532%2Chttps%3A%2F%2Fbeacon.krxd.net%2Foptout_check%2C393%2Chttps%3A%2F%2Fcdn.krxd.net%2Fuserdata%2Fget%2C284", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=_kuid_;e_LfeEca87^0|%7B%22atc_itemid%22%3A%222759118-83-APFD06JASW%22%2C%22atc_category%22%3A%22portable_air_conditioners%22%2C%22atc_prodid%22%3A%225000143961%22%2C%22atc_brand%22%3A%22GE%22%2C%22atc_qty%22%3A1%7D", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb48574x12265&t=uc&ts=1628659897720&pid=8809011165&tid=7916049064&vid=MwZjUwNjU5YTYyZDUxNjk3&sdes=%5B%7B%22type%22%3A%22cart%22%2C%22total%22%3A%22349.00%22%2C%22numItems%22%3A1%2C%22products%22%3A%5B%7B%22product%22%3A%7B%22name%22%3A%226100-BTU%20DOE%20(8000-BTU%20ASHRAE)%20115-Volt%20White%20Portable%20Air%20Conditioner%22%2C%22category%22%3A%22lowes%3Adt%3Acheckout%3Ashopping-cart%22%2C%22sku%22%3A%222759118-83-APFD06JASW%22%2C%22price%22%3A%22349.00%22%7D%2C%22quantity%22%3A1%7D%5D%7D%2C%7B%22type%22%3A%22ctmrinfo%22%2C%22info%22%3A%7B%22accountName%22%3A%22%22%2C%22userName%22%3A%22fairbanks%20lowe%27s%22%2C%22companySize%22%3A%221985%22%2C%22socialId%22%3A%2299701%22%2C%22ctype%22%3A%22diy%22%2C%22cstatus%22%3A%22guest%22%2C%22customerId%22%3A%22-%22%7D%7D%2C%7B%22type%22%3A%22personal%22%2C%22personal%22%3A%7B%22contacts%22%3A%5B%7B%22phone%22%3A%22-%22%2C%22email%22%3A%22-%22%7D%5D%2C%22company%22%3A%22-%22%7D%7D%2C%7B%22type%22%3A%22mrktInfo%22%2C%22info%22%3A%7B%22affiliate%22%3A1%7D%7D%2C%7B%22type%22%3A%22pagediv%22%2C%22divId%22%3A%22liveperson-persist-button%22%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=Microdata&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659901522&cd[DataLayer]=%5B%5D&cd[Meta]=%7B%22title%22%3A%22Shopping%20Cart%20-%20Lowes.com%22%2C%22meta%3Adescription%22%3A%22shopping%20cart%22%7D&cd[OpenGraph]=%7B%7D&cd[Schema.org]=%5B%5D&cd[JSON-LD]=%5B%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=2&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/common.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=1128484153951961&ev=Microdata&dl=https%3A%2F%2Fvice1.lowescdn.com%2Fcart&rl=https%3A%2F%2Fwww.lowes.com%2Fpd%2FGE-6000-BTU-Portable-Air-Conditioner%2F5000143961&if=true&ts=1628659901542&cd[DataLayer]=%5B%5D&cd[Meta]=%7B%22title%22%3A%22Shopping%20Cart%20-%20Lowes.com%22%2C%22meta%3Adescription%22%3A%22shopping%20cart%22%7D&cd[OpenGraph]=%7B%7D&cd[Schema.org]=%5B%5D&cd[JSON-LD]=%5B%5D&sw=1360&sh=663&v=2.9.44&r=stable&ec=2&o=30&fbp=fb.1.1628659850310.738130319&it=1628659897506&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=fr", END_INLINE,
            "URL=https://maps.googleapis.com/maps-api-v3/api/js/44/14/util.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://maps.googleapis.com/maps/api/js/AuthenticationService.Authenticate?1shttps%3A%2F%2Fwww.lowes.com%2Fcart&2sgme-loweshomecenters&callback=_xdc_._pfap7v&client=gme-loweshomecenters&token=18850", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/adsbldglomqp6c5yspd7el6lnt3a_20210805.389539614/obedbbhbpmojnkanicioggnmelmoomoc_20210805.389539614_all_ENUS_hrdc7fmlzlpqmnl3h5b47u7phe.crx3", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb32449x41979&t=pl&ts=1628659901062&pid=8809011165&tid=7916049064&vid=MwZjUwNjU5YTYyZDUxNjk3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collector_8", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collector_9");
    ns_web_url ("collector_9",
        "URL=https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-type:application/x-www-form-urlencoded",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "payload"
value: "aUkQRhAIEGJqAAMQHhBWEAhJEGJqBwUQCBBpbhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAAoLBgobElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMBAgEAARsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMICgEBARtuEB5uEGZLQld3QEBdQAgScVNcXF1GEkBXU1YSQkBdQldARksSFQIVEl1UElxHXl4SU0YSZEYSU0YSemZ/fnZdUUdfV1xGHFVXRndeV19XXEZBcEtmU1V8U19XElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMACgsGChsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwECAQABGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgKAQEBG24QHm4QZktCV3dAQF1ACBJxU1xcXUYSQFdTVhJCQF1CV0BGSxIVAhUSXVQSXEdeXhJTRhJkRhJTRhJ6Zn9 dl1RR19XXEYcVVdGd15XX1dcRkFwS2ZTVXxTX1cSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwAKCwYKGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAQIBAAEbElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAoBAQEbbhAebhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAAoLBgobElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMBAgEAARsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMICgEBARtuEB5uEGZLQld3QEBdQAgScVNcXF1GEkBXU1YSQkBdQldARksSFQIVEl1UElxHXl4SU0YSZEYSU0YSemZ/fnZdUUdfV1xGHFVXRndeV19XXEZBcEtmU1V8U19XElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMACgsGChsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwECAQABGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgKAQEBG24QHm4QZktCV3dAQF1ACBJxU1xcXUYSQFdTVhJCQF1CV0BGSxIVAhUSXVQSXEdeXhJTRhJkRhJTRhJ6Zn9 dl1RR19XXEYcVVdGd15XX1dcRkFwS2ZTVXxTX1cSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwAKCwYKGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAQIBAAEbElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAoBAQEbbhAebhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAAoLBgobElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMBAgEAARsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMICgEBARtuEB5uEGZLQld3QEBdQAgScVNcXF1GEkBXU1YSQkBdQldARksSFQIVEl1UElxHXl4SU0YSZEYSU0YSemZ/fnZdUUdfV1xGHFVXRndeV19XXEZBcEtmU1V8U19XElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMACgsGChsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwECAQABGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgKAQEBG24QHm4QZktCV3dAQF1ACBJxU1xcXUYSQFdTVhJCQF1CV0BGSxIVAhUSXVQSXEdeXhJTRhJkRhJTRhJ6Zn9 dl1RR19XXEYcVVdGd15XX1dcRkFwS2ZTVXxTX1cSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMIAwAKCwYKGxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAQIBAAEbElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAoBAQEbbhAebhBmS0JXd0BAXUAIEnFTXFxdRhJAV1NWEkJAXUJXQEZLEhUCFRJdVBJcR15eElNGEmRGElNGEnpmf352XVFHX1dcRhxVV0Z3XldfV1xGQXBLZlNVfFNfVxJTRhJXRFNeEh4SDlNcXVxLX11HQQwIAwgDAAoLBgobElNGEldEU14SHhIOU1xdXEtfXUdBDAgDCAMBAgEAARsSU0YSV0RTXhIeEg5TXF1cS19dR0EMCAMICgEBARtuEG8QHhBiagoHAhAIBB4QYmoKBwMQCAoHCwIeEGJqAwIHBBAIAwQACgQHCwsCAwUFBx4QYmoDAgEKEAgQBAdUBAMKUQIfVFMEBx8DA1dQHwsFBFEfCgMKCwVRBAEBBwpWEB4QYmoBBQMQCFRTXkFXHhBiagsEEAgQWkZGQkEIHR1FRUUcXl1FV0EcUV1fHVFTQEYQT09v"
, key: "appId"
value: "PX61WVsvi8"
, key: "tag"
value: "v6.9.2"
, key: "uuid"
value: "65f618c0-fa65-11eb-976c-81897c63358d"
, key: "ft"
value: "226"
, key: "seq"
value: "4"
, key: "en"
value: "NTA"
, key: "cs"
value: "dd711a92098919fc2bf841b0cd67730eb0203a864914aef5eb7144d9bd82d29e"
, key: "pc"
value: "0952064066021028"
, key: "sid"
value: "49bdd2b0-fa65-11eb-8dd5-15f5bf611991\363\240\204\261\363\240\204\266\363\240\204\262\363\240\204\270\363\240\204\266\363\240\204\265\363\240\204\271\363\240\204\270\363\240\204\271\363\240\204\267\363\240\204\266\363\240\204\267\363\240\204\260"
, key: "vid"
value: "49bd93fc-fa65-11eb-8ed2-0242ac120008"
, key: "cts"
value: "49bdf9c0-fa65-11eb-8dd5-15f5bf611991"
, key: "rsc"
value: "4"
]",
        BODY_END
    );

    ns_end_transaction("collector_9", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_13");
    ns_web_url ("bundle_13",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5209984341155840&Seq=2&PageStart=1628659896691&PrevBundleTime=1628659898029&LastActivity=15",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/bundle_13_main_url_1_1628659912615.body",
        BODY_END
    );

    ns_end_transaction("bundle_13", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_4");
    ns_web_url ("json_4",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"linux","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"obedbbhbpmojnkanicioggnmelmoomoc","event":[{"download_time_ms":1665,"downloaded":996459,"downloader":"direct","eventresult":1,"eventtype":14,"nextversion":"20210805.389539614","previousversion":"0.0.0.0","total":996459,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/adsbldglomqp6c5yspd7el6lnt3a_20210805.389539614/obedbbhbpmojnkanicioggnmelmoomoc_20210805.389539614_all_ENUS_hrdc7fmlzlpqmnl3h5b47u7phe.crx3"},{"eventresult":1,"eventtype":3,"nextfp":"1.e400fb4af8a1e7de69cb661a1b2249cecc13c467538ef97b975dfbcb6ef5cb83","nextversion":"20210805.389539614","previousversion":"0.0.0.0"}],"version":"20210805.389539614"}],"arch":"x64","dedup":"cr","hw":{"physmemory":6},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Linux","version":"5.11.0-25-generic"},"prodversion":"90.0.4430.61","protocol":"3.1","requestid":"{abd2edbd-59de-424f-b590-275cb4c72c91}","sessionid":"{9c6f3495-5bee-4c37-a5c5-e737cb74b912}","updaterversion":"90.0.4430.61"}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://colrep.sitelabweb.com/rp/?d=w-yVRTP2kIdGov1G1w8GijaS7jeZNI5TzTJFJ0u1UwPzzJcEs9qDA_yTkzJCvwa00cMTnbMCbk3l1t2y0ucmljPXx75GeYVyRxoL5wfGoSPQom42RWzTE~OuuxGINEdDWVJmCy02dm6jVma-WlJp5J53OCZR1MyaRPY1ncNQwm5mVSzTE~L995GHJMPTvWOTnmzaI6sT-yOi61OWgXwTdROfZ1111Ne3FMbDShmTJlxS4zJuqwHlgPMSzYQiXynmxm6ny4JysweGgU3zVXKvUyroFwfGNIV--iv2lWtTJJNuu3IEMWJTnVKEwIwm1JpTmDJyswbJlH5SRTMhdl1ctvNSvVMBto4m9N7SU-R9HwIEAMNDvYMC72n~UvsFqhZGpyaVUOzjRUNQ4zsHZoaXoneExl3nNJA24CMd54a1VHZDXGOGT2poUvtW-4O-wzZZENvWJaYwMz14E4QT3GZTs0rSZXCWlnPuizWEcOYjEcMDojzWdj3GihM-~zYWUX4zRaMwYy1YE0MnoMZAYkqjUYxDlkOh0yVHRDZDwJYzDwnJVguDx5ZyszNmUMvyWRdB00oLhybWzhaEx04HMFw0EoMA4lJFZXd36TbGC3~3Mr22ctJytGY5FOACWXZzdyu48mdXorbj3l-3RF7D13cD1lGHN9MTWYMWX0o-E-s2h0Zlw0ZmYX4mFXMWIz14UybDrVZTk2pSZD6TMCMPnlKjUPNjsGNGUjooY-uWmiNixiM5FBumNXMEVhsIEuPzgCM93j3nZJ7DMCcU1z_ZlNbizXMzPx~-Q~sT-zYy-kY0RCvjiDYBQz1INhbTkHNApl-TYRtTI0Mu4yLjYWMT6VMiX3r_BApTlzMTplNGUNvjKCNjRjsqY2RWkFNAtip2FFwmQ3MC1hKEEMMzkEMCXynWE-uTh5Mi~2OWcC8HJfdkJ120ZyfzTZck-lmmNSzSU6Q80yJIIWMD1WJTLyk-N8sSx3Rh7ucqYauCWJZ~Jvu5RygWvJcj-w33JWzSU6Q80yJFRDYWR~bHnlnGIis0hxJyCEJqJFxTFHcjZ0u1MyPQ-6&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("json_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("bundle_14");
    ns_web_url ("bundle_14",
        "URL=https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5209984341155840&Seq=3&PageStart=1628659896691&PrevBundleTime=1628659903404&SkipResponseBody=true",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "{"Seq":3,"When":5815,"Evts":[{"Kind":63,"Args":["POST","https://collector-px61wvsvi8.px-cloud.net/api/v2/collector",376,200,"content-type: application/x-www-form-urlencoded\r\n","content-length: 10\r\ncontent-type: application/json; charset=utf-8\r\n",1628659901782,3041,10,null,null],"When":5815},{"Kind":9,"Args":[5920,193,177,-20,-23.52941176470588,97,79,-15,-23.52941176470588,80],"When":5820},{"Kind":9,"Args":[6053,174,138,-40.949999999999996,-13.76470588235294,75,28,-46.8,-13.76470588235294,80],"When":5936},{"Kind":9,"Args":[6204,138,139,0,3.970588235294118,27,17,-7.941176470588236,-7.941176470588236,62],"When":6069},{"Kind":57,"Args":[2,"https://va.v.liveperson.net/api/js/22554410?sid=xD2M7VuaRzush56fUXtNkw&cb=lpCb32449x41979&t=pl&ts=1628659901062&pid=8809011165&tid=7916049064&vid=MwZjUwNjU5YTYyZDUxNjk3",9536.31000000007,396.4650000000365,"script",0,0,9536.31000000007,0,0,0,0,0,0,0,9932.775000000107,0,0,0],"When":6157},{"Kind":9,"Args":[6303,139,143,4.882352941176471,5.1875,16,13,0,-5.1875,62],"When":6220},{"Kind":8,"Args":[144,12,62],"When":6337},{"Kind":9,"Args":[6487,145,166,7.941176470588236,23.823529411764707,12,10,0,0,62],"When":6352},{"Kind":9,"Args":[6553,167,171,2.941176470588235,3.125,9,7,0,-3.125,62],"When":6503},{"Kind":9,"Args":[6637,172,176,8.375,4.1875,7,5,-4.1875,0,62],"When":6570},{"Kind":9,"Args":[6703,177,179,0,3,3,0,-2.8235294117647056,-3,62],"When":6655},{"Kind":63,"Args":["POST","https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5209984341155840&Seq=2&PageStart=1628659896691&PrevBundleTime=1628659898029&LastActivity=15",1382,200,"content-type: text/plain\r\n","content-length: 29\r\ncontent-type: application/json; charset=utf-8\r\n",1628659902245,225429,29,null,null],"When":7314},{"Kind":57,"Args":[2,"https://rs.fullstory.com/rec/bundle?OrgId=Q8RZE&UserId=4938477446668288&SessionId=6554343464542208&PageId=5209984341155840&Seq=2&PageStart=1628659896691&PrevBundleTime=1628659898029&LastActivity=15",9876.925000000028,1375.2450000000645,"xmlhttprequest",0,0,9876.925000000028,0,0,0,0,0,0,0,11252.170000000093,0,0,0],"When":7471},{"Kind":53,"Args":[],"When":9405},{"Kind":23,"Args":[7],"When":9503}]}",
        BODY_END
    );

    ns_end_transaction("bundle_14", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("X_4");
    ns_web_url ("X_4",
        "URL=https://bat.bing.com/actionp/0?ti=5668750&Ver=2&mid=a583b030-889b-4f12-a523-71975f432e27&sid=4aa62ac0fa6511ebb446155ff10e7248&vid=4aa72ee0fa6511eb8260079478319ce8&vids=0&evt=pageHide",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://www.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID;MR"
    );

    ns_end_transaction("X_4", NS_AUTO_STATUS);
    ns_page_think_time(0.106);

}
