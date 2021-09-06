/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 08/31/2021 06:55:04
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
    ns_page_think_time(16.818);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.58:9013/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=hello&password=world&login.x=59&login.y=15&JSFormSubmit=off",
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
    ns_page_think_time(3.213);

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
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(18.5);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?depart=London&departDate=09-01-2021&arrive=Paris&returnDate=09-02-2021&numPassengers=5&seatPref=Window&seatType=Coach&findFlights.x=29&findFlights.y=16",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(5.485);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?hidden_outboundFlight_button0=240%7C108%7C09-01-2021&hidden_outboundFlight_button1=241%7C99%7C09-01-2021&outboundFlight=button2&hidden_outboundFlight_button2=242%7C103%7C09-01-2021&hidden_outboundFlight_button3=243%7C89%7C09-01-2021&numPassengers=5&advanceDiscount=&seatType=Coach&seatPref=Window&reserveFlights.x=63&reserveFlights.y=14",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(8.573);

    //Page Auto split for 
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:729174379&cup2hreq=ba2c88234fd5e28124336f97ad966d5e1fc5bae1d83c815d848647c0419eafeb",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:gcmjkmgdlgnkkcocmoeiminaijmmjnii,llkgjffcdpffmhiakmfcdcblohccpfmo,giekcmmlnklenlaomppkphknjmnnpneh,jflookgnkcckhobaglndicnbbgbonegd,obedbbhbpmojnkanicioggnmelmoomoc,oimompecagnajdejgnnjijobebaeigek,aemomkdncapdnfajjbbcbdebjljbpmpj,ojhpjlocmbogdgmfpkhlaaeamibhnphh,ggkkehgbnfjpeggfpleeakpidbkibbmn,hfnkpimlhhgieaddgfemjhofmfblmnib,jamhcnnkihinmdlkakkaopbjbbcngflc,cmahhnpholdijhjokonmfdjbfmklppij,pdafiollngonhoadbmdoemagnfpdphbe,khaoiebndkojlmppeemjhbpbandiljpe,eeigpngbgcognadeebkilcpcaedhellh",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:","cohorthint":"M54ToM99","cohortname":"M54ToM99","enabled":true,"packages":{"package":[{"fp":"1.b45fc5f3479dc7b07e8e5822a11785819b7f1c249c9b47dcffcb28edbbc2d706"}]},"ping":{"ping_freshness":"{a427c2ea-5dff-4f6a-b03c-8fdb6b04f71c}","rd":5356},"updatecheck":{},"version":"9.29.4"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"ping":{"ping_freshness":"{7811103f-9eb2-4db9-bac5-df40ed96b050}","rd":5356},"updatecheck":{},"version":"0.0.0.0"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{8f79dcf6-344f-41ad-8ffd-cc8fe7fde76b}","rd":5356},"updatecheck":{},"version":"7"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.87a7864f0923c4a98c227e49dff236f257e13f8e046b3fba6c6338ce6439f043"}]},"ping":{"ping_freshness":"{d6f460ad-7fa7-4b8a-82d4-c500b5053563}","rd":5356},"updatecheck":{},"version":"2687"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.47b2ab949538dd83ed2b59a3f3feffafb559b55d62a1cd377895a03024c68641"}]},"ping":{"ping_freshness":"{56395a6c-8d90-4bee-bb2b-55ec7e60166a}","rd":5356},"updatecheck":{},"version":"20210817.392344495"},{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.60341eb69770633861e303657417e6a30c6948742291dd2e1478ca2c2c510d49"}]},"ping":{"ping_freshness":"{b323f12f-2065-4b45-9205-e29f9b6e59d7}","rd":5356},"updatecheck":{},"version":"4.10.2209.0"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{adc245f3-5da8-4279-8b0b-be9c20470c1f}","rd":5356},"updatecheck":{},"version":"1.0.6.0"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{44d26b42-432d-4410-acfd-7199de506c98}","rd":5356},"updatecheck":{},"version":"1"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.0dc23b37d1fa49e00e0a208bfcb91839be99b9e85162814b05987c2eba1b3701"}]},"ping":{"ping_freshness":"{2a1b36f4-7dc1-4f19-ae76-85afe75b3866}","rd":5356},"updatecheck":{},"version":"2021.8.23.1140"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.14f73e1a7c2cda11c73ef6ad56407ca320aca23afd205c786f6d7b7f815509a8"}]},"ping":{"ping_freshness":"{0e7b4ba0-bb43-453d-8155-b2f2f98fabd8}","rd":5356},"updatecheck":{},"version":"6825"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.f68488b90fd8d1e06d10086ffa627609306365aea06606536872b1bd0fe49b8b"}]},"ping":{"ping_freshness":"{77640e87-dab1-452f-9a8c-4bce7d0a219a}","rd":5356},"updatecheck":{},"version":"95.0.4628.0"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{cd590498-4a78-46cd-aaeb-4d934617fa4d}","rd":5356},"updatecheck":{},"version":"1.0.6"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a"}]},"ping":{"ping_freshness":"{c810c662-89c8-4de1-83a1-ea4b4baa2ebb}","rd":5356},"updatecheck":{},"version":"2021.8.17.1300"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4"}]},"ping":{"ping_freshness":"{45ab40f2-e8ab-4080-b79e-d0febe29d920}","rd":5356},"updatecheck":{},"version":"43"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{0958d73d-a129-4df0-b6d6-c9172541cf74}","rd":5356},"updatecheck":{},"version":"2020.11.2.164946"}],"arch":"x86","dedup":"cr","domainjoined":false,"hw":{"physmemory":16},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{f12cd679-e196-4b91-b0e5-2a3ed779703e}","sessionid":"{1ad12df5-0fce-473e-b763-a6a78debff84}","updaterversion":"90.0.4430.93","wow64":true}}",
        BODY_END,
        INLINE_URLS,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE,
            "URL=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAHAABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "HEADER=Accept-Language:*", END_INLINE
    );

    ns_end_transaction("json", NS_AUTO_STATUS);
    ns_page_think_time(39.234);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?firstName=Prachi&lastName=Naik&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&pass2=prachi1&pass3=prachi2&pass4=prachi3&pass5=prachi4&creditCard=1234567890123456&expDate=07%2F22&oldCCOption=&numPassengers=5&seatType=Coach&seatPref=Window&outboundFlight=242%7C103%7C09-01-2021&advanceDiscount=&buyFlights.x=61&buyFlights.y=18&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/bookanother.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(6.325);

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
    ns_page_think_time(5.778);

}
