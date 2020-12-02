Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("bank", 
		"URL=http://localhost:8080/bank/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI4QrYVAOleQUPp24IzX4NdrvuJ3Wve3IiwxNdaj_3Xie90_AgK59XpjPyocwPDuTI98I8JPXjh-PHeGwyB6QcSStzyp7emUJeyakqHUkbN_o1IPGrKjXOOsuvv-AOIJpdXZlJN-el54ecZboah31wqupgkLiC-nlKVEGnDDBcuQWqVDX4HUNw97dARBho1S0JlahwJMw74vYaraGn6Z28yyVVSpc6mMR5ocXyXtkZOsECDmmR32BboyuguXdA0bQahMSbWsoSQ38Cz2_PhOhnwHgwc4w1hAmQkHeXOv7kTP8RVOtsM; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQI0pAB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:iLzlkTTR9yr-5AfBVwp7UKti5uPnIFYGpyCYUKQCa80svHmt8_F7Q1bJIHbfaxcsoYxNUlE3KB4goRNpWPcYMLz9PfBRnJh3ioKwEIpXw8yJ-R3PGjXXE7pajwIRDLzz2jgElEihSkDMdw:MsSjC2MWzGQtRzvo; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUkw6vypr1zU4b9qWtMDYB8-szmga_LukbKdPhxIOTGPOX_PmG6IItp5yDDv; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-11-30-07; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=e3EPI-qgF4MAbb9tn9jtXD828107EC-5Mf2tiOY-OsYs176XMpoIrmqKU4pbFD2TIvzqQrJZF1kF1dV5YYNIKdMH036dHG7sccM6he999Mw4a9kUDaEs7aJkTcCcaQKzLS3Zsy5SmfuRHykWXEQBtQ2l2rghFoIv-JcALy4CnaE5390eB8mUhgsdVquDgxyEW2Ujziv6mn7zqO3H110u; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=87", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.660291669.1540230645; DOMAIN=sec-tws-prod-vip.webex.com");

	web_add_cookie("AMCV_5C0A123F5245AEEA0A490D45%40AdobeOrg=-330454231%7CMCIDTS%7C17954%7CMCMID%7C33134040184154537372368995207871490042%7CMCAAMLH-1551761274%7C3%7CMCAAMB-1551761274%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1551163673s%7CNONE%7CMCAID%7C2DC5B18F852A1772-6000011820051DD9%7CvVersion%7C3.1.2; DOMAIN=sec-tws-prod-vip.webex.com");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_cookie("s_fid=1FA44616AA36DD04-00B33AE941E41D4D; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_vi=[CS]v1|2CF7110285031980-6000118940003139[CE]; DOMAIN=sstats.adobe.com");

	web_add_cookie("WRUIDAWS=2245205702590546; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_D6FAAFAD54CA9F560A4C98A5%40AdobeOrg=1406116232%7CMCMID%7C32016483576609566042410909894830012015%7CMCAAMLH-1562123700%7C12%7CMCAAMB-1562123700%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1561526100s%7CNONE%7CvVersion%7C2.5.0; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_8F99160E571FC0427F000101%40AdobeOrg=1406116232%7CMCAID%7C2CF7110285031980-6000118940003139%7CMCIDTS%7C18092%7CMCMID%7C28599397049753543893074625881950276550%7CMCAAMLH-1512841230%7C3%7CMCAAMB-1563109710%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1512243630s%7CNONE%7CMCSYNCSOP%7C411-17510%7CvVersion%7C2.5.0; DOMAIN=sstats.adobe.com");

	web_add_cookie("__CT_Data=gpv=9&ckp=tld&dm=adobe.com&apv_100_www20=9&cpv_100_www20=9&rpv_100_www20=9; DOMAIN=sstats.adobe.com");

	web_add_cookie("_cs_c=1; DOMAIN=sstats.adobe.com");

	web_add_cookie("ctm={'pgv':966246386408597|'vst':411032096413461|'vstr':5996052189320100|'intr':1577241984921|'v':1|'lvst':244186}; DOMAIN=sstats.adobe.com");

	web_add_cookie("SETTINGS.LOCALE=en%5Fus; DOMAIN=sstats.adobe.com");

	web_add_cookie("mbox=PC#e99f03c9d2254b859648c8251b01a68f.31_2#1640881653|session#2ca8f6df9384450bb5308a632d70dc0c#1580435935; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_nr=1580690022270-Repeat; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=1075005958%7CMCIDTS%7C18293%7CMCMID%7C28383490735923672233060222889073645988%7CMCAAMLH-1581294826%7C12%7CMCAAMB-1581294826%7CRKhpRz8krg2tLO6pguXWp5olkAcUniQYPHaMWWgdJ3xzPWQmdj0y%7CMCOPTOUT-1580697226s%7CNONE%7CMCAID%7C2CF7110285031980-6000118940003139%7CMCSYNCSOP%7C411-17744%7CvVersion%7C4.4.1%7CMCCIDH%7C931823437; DOMAIN=sstats.adobe.com");

	web_add_cookie("adcloud={%22_les_lsc%22:%221580434079405%2Cadobe.com%2C1588296479%22%2C%22_les_v%22:%22y%2Cadobe.com%2C1580691826%22}; DOMAIN=sstats.adobe.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Origin", 
		"chrome-extension://jlhmfgmfgeifomenelglieieghnjghma");

	web_add_header("appId", 
		"65014E32-67C8-4698-9D92-9528BE74F65A");

	web_add_header("appName", 
		"Cisco-WebEx-Extension");

	web_add_header("confId", 
		"00000000");

	web_add_header("metricsTicket", 
		"YzJWakxYUjNjeTF3Y205a0xYWnBjQzUzWldKbGVDNWpiMjA9");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("siteId", 
		"000000");

	web_add_header("timeStamp", 
		"1606720937115");

	web_add_header("ver", 
		"2.0");

	web_custom_request("v1", 
		"URL=https://sec-tws-prod-vip.webex.com/metric/v1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"telemetrics\":[{\"t\":\"PageView\",\"ts\":\"2020-11-30T12:52:17.158+0550\",\"tid\":\"f69f40b7-d267-54da-8b92-65f2bf868fc8\",\"cid\":\"96c418d6-fdef-268b-b480-06988772e004\",\"pd\":\"unknown\",\"ver\":\"2.0\",\"v\":{\"title\":\"\",\"location\":\"chrome-extension://jlhmfgmfgeifomenelglieieghnjghma/_generated_background_page.html\"}}]}", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_6.pb", "Referer=", ENDITEM, 
		"Url=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s08030173839645?AQB=1&ndh=1&pf=1&t=30%2F10%2F2020%2012%3A52%3A19%201%20-330&fid=3840DAAB6C704167-3CE0F62F67D6CD49&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.2.3&v2=sideload&v3=prod&v4=not_set&s=2560x1080&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABCmRhcmtyZWFkZXIDb3JnAAABAAEAACkQAAAAAAAAVQAMAFEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s07439342969348?AQB=1&ndh=1&pf=1&t=30%2F10%2F2020%2012%3A52%3A19%201%20-330&fid=3840DAAB6C704167-3CE0F62F67D6CD49&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.2.3&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA2FwaQhtaXhwYW5lbANjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=http://localhost:8080/bank/css/animate.css", "Referer=http://localhost:8080/bank/scss/style.css", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s08006571955947?AQB=1&ndh=1&pf=1&t=30%2F10%2F2020%2012%3A52%3A19%201%20-330&fid=3840DAAB6C704167-3CE0F62F67D6CD49&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.2.3&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("decide", 
		"URL=https://api.mixpanel.com/decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1606720977989", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBW10YWxrBmdvb2dsZQNjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIXCU35IjnBRbgwEgUN541ADhIFDc5BTHo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"chrome-extension://mbopgmdnpcbohhpnfglgohlbhfongabi");

	web_submit_data("track", 
		"Action=https://api.mixpanel.com/track/?verbose=1&ip=1&_=1606720982983", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value="
		"WwogICAgeyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODcsIiRzY3JlZW5faGVpZ2h0IjogMTA4MCwiJHNjcmVlbl93aWR0aCI6IDI1NjAsIm1wX2xpYiI6ICJ3ZWIiLCIkbGliX3ZlcnNpb24iOiAiMi4zOS4wIiwiJGluc2VydF9pZCI6ICJjOHhmMW02eTd5bzJreHFmIiwidGltZSI6IDE2MDY3MjA5NzkuNTAxLCJkaXN0aW5jdF9pZCI6IDMzOTE3MCwiJGluaX"
		"RpYWxfcmVmZXJyZXIiOiAiJGRpcmVjdCIsIiRpbml0aWFsX3JlZmVycmluZ19kb21haW4iOiAiJGRpcmVjdCIsIiR0aXRsZSI6ICIiLCIkZXZlbnRfdHlwZSI6ICJwYWdldmlldyIsIiRjZV92ZXJzaW9uIjogMSwiJGhvc3QiOiAibWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkiLCIkcGF0aG5hbWUiOiAiL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCJ0b2tlbiI6ICI5NGI1YzMxMTY5MmU3YzlkMDNjZWY5YzlhN2EzMmVhZiJ9fQpd", ENDITEM, 
		LAST);

	/* login */

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blakpkgjpemejpbmfiglncklihnhjkij,blpcfgokakmgnkcojhhkbfbldkacnbeo,cfhdojbkjhnklbpkdaibdccddilifddb,chklaanhfefbnpoihckbnefhakgolnmc,efaidnbmnnnibpcajpcglclefindmkaj,eimadpbcbfnmbkopoojfekhnkhdbieeh,felcaaldnbdncclmgdcncolpebgiejap,fhbjgbiflinjbdggehcddcbncdddomop,fipcbkgepjlnemlkgialpomkajcpneop,fmkadmapgofadopljbjfkapdkoienihi,ghbmnnjooekpmoecnnnilnnbdlolhkhi,jlhmfgmfgeifomenelglieieghnjghma,"
		"jopjeaiilkcibeohjdmejhoifenbnmlh,lcknjpenlfdlffeafcadkbjfodmmgdip,lmjegmlicamnimmfhcmpkclmigmmcbeh,mbopgmdnpcbohhpnfglgohlbhfongabi,nakklajdcijlkfagghhcdofbgbhddoed,nmmhkkegccagdldgiimedpiccmgmieda,ojhbgcchcbdjdenibfmjofobklkkhofc,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-87.0.4280.66");

	lr_think_time(6);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:352593890&cup2hreq=ccf10945e129e44af5df22fc050c6564d1bdc695b8e33da10ab5146d3925e046", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{d9b3b1a9-6805-4bba-ba5d-f0f85db5de82}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{78e3d1e5-8dc4-44c9-bcf8-cc9b2474da72}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.d7089602fa181dfd161165dc1bb34271e7481f88ee2ca06230da2a2269a68c80\"}]},\"ping\":{\"ping_freshness\":\"{4bf753d8-e9ce-4941-93b2-ac72626a0234}\",\"rd\":5081},\"updatecheck\":{},"
		"\"version\":\"14.5\"},{\"appid\":\"blakpkgjpemejpbmfiglncklihnhjkij\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.0.0.26\"}]},\"ping\":{\"ping_freshness\":\"{d411d7a4-88ce-4f63-be20-c70bf4e7425b}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.0.0.26\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{aca9e83c-d89a-4a83-9b20-ff674e642847}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"cfhdojbkjhnklbpkdaibdccddilifddb\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.6dcef1940d9d6a86ee641155e7099fb5d0195418850278177873f7e888d060c3\"}]},\"ping\":{\"ping_freshness\":\"{e00df2db-b816-414e-b8b5-0ac3e93258ab}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"3.10\"},{\"appid\":\""
		"chklaanhfefbnpoihckbnefhakgolnmc\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.0.32.3\"}]},\"ping\":{\"ping_freshness\":\"{112b269a-80fe-44ee-8889-108ff333a90f}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.0.32.3\"},{\"appid\":\"efaidnbmnnnibpcajpcglclefindmkaj\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.b96160360557f62a6ff43c7790a10eaeafa9db74c1d877ebd1f40061c3d3e8ca\"}"
		"]},\"ping\":{\"ping_freshness\":\"{ba4156fb-bcb2-4c81-89f5-7cc4a4f48d69}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"15.1.2.3\"},{\"appid\":\"eimadpbcbfnmbkopoojfekhnkhdbieeh\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.e56c789f4bfab46150d84c581831fa90143ec53bd072bd2ed413f112fe416350\"}]},\"ping\":{\"ping_freshness\":\"{dbabcd7e-160b-4955-b40f-fe5295aacf7d}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.9.26\"},{\"appid\":\""
		"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{6902c802-2082-42fa-862d-6ac0e54ab614}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"fhbjgbiflinjbdggehcddcbncdddomop\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.be17c5b273ae5ca03156edd24af9d6c7099fcba9654e9755cfd2e9477555e13e\"}]},\"ping"
		"\":{\"ping_freshness\":\"{4e9f6e71-245b-4b47-9ac8-277e64cd55b1}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"5.5.5\"},{\"appid\":\"fipcbkgepjlnemlkgialpomkajcpneop\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.16.0.0.15\"}]},\"ping\":{\"ping_freshness\":\"{f86e16da-5220-4e0f-9e83-949203b97205}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"16.0.0.15\"},{\"appid\":\"fmkadmapgofadopljbjfkapdkoienihi\",\"brand\":\"GGLS\",\"enabled\":true"
		",\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.d410998f95ccd87dd6d66193eed17f23f1b76ceb8fe7bc242e35e97504364106\"}]},\"ping\":{\"ping_freshness\":\"{449c4e13-09b3-4291-8886-462e85dc8472}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.10.0\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.2efb05ac54de9cb374eaf236f5d4a95fd553be6a6b92c154f0f51c7f6b261877\"}]},\"ping\":{\""
		"ping_freshness\":\"{f309e9e6-7bd1-4790-9767-f4c7252c926d}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1.21.0\"},{\"appid\":\"jlhmfgmfgeifomenelglieieghnjghma\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.91a2d1382b88442b72513a1940f86872d89537e292c53dc233f6f1c732b59c60\"}]},\"ping\":{\"ping_freshness\":\"{544490a2-7375-4744-a153-c486241e1fb9}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1.9.0\"},{\"appid\":\""
		"jopjeaiilkcibeohjdmejhoifenbnmlh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.0\"}]},\"ping\":{\"ping_freshness\":\"{f512fd0c-2f1c-4f69-8074-4511d11348b8}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"3.4.0\"},{\"appid\":\"lcknjpenlfdlffeafcadkbjfodmmgdip\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{239f116d-b24c-450f-a2f3-c67cde70418c}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"lmjegmlicamnimmfhcmpkclmigmmcbeh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.f65aba0b25837c5b1bd91902737fb8049a7f1c7df0ea3bdfd3949bc5548c2da3\"}]},\"ping\":{\"ping_freshness\":\"{42c74894-4fb8-43ab-9826-ab52ea18a3e0}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"3.3\"},{\"appid\":\""
		"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.554be63c773df6c22f6e966e9dfc1388b6f6f47acf2bbb9aac1666224c27273f\"}]},\"ping\":{\"ping_freshness\":\"{8f92af7e-911c-405d-9242-2762c048cb2a}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.9.13\"},{\"appid\":\"nakklajdcijlkfagghhcdofbgbhddoed\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2\"}]},\""
		"ping\":{\"ping_freshness\":\"{948ad66e-93a3-4113-986f-0ed739a3b061}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{bc95ad41-0f54-4212-a057-4169da9d8a95}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"ojhbgcchcbdjdenibfmjofobklkkhofc\",\"brand\":\"GGLS\",\"disabled\":[{\""
		"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.3\"}]},\"ping\":{\"ping_freshness\":\"{5bffea75-ea9b-43eb-95b0-8c5d3f200a3b}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.3\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.7f4e382d1c6724a5f173f3617e35d5ad74c28ffce9a918f00b48c88f978dc34e\"}]},\"ping\":{\"ping_freshness\":\""
		"{91b2faec-7cd0-4a69-a421-34d557bc4406}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.c54ade3508609ae6acc8224bc245e529d28b5d1284f28b8071d001035879c59d\"}]},\"ping\":{\"ping_freshness\":\"{36fba962-2135-4ad9-b1ef-bf5a2348c586}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"8720.1005.0.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\""
		":false,\"hw\":{\"physmemory\":8},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.630\"},\"prodversion\":\"87.0.4280.66\",\"protocol\":\"3.1\",\"requestid\":\"{a9047905-45e1-450e-aed2-c5da64d27317}\",\"sessionid\":\"{71a375ce-6a2d-49b7-a8da-02c80208eec2}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\""
		"updaterversion\":\"87.0.4280.66\"}}", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"273B93C7316F88F932AFBED68CDDA8B55B17FEEB");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"MCRtRyjnCT6/1XUqhYlMxC+nwaEYPk6WhU2LtME8a94=");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\tq\\x80\\xAC\\xBB\\x9B\\xB5U\\xC2\\x10\\xB6\\x05\\x1A\\x97\\x1B\\x08\\xF5\\xC7\\xCC\\xFD\\x05\\x12\\x0F87.0.4280.66-64\\x18\\xB0\\xB3\\x87\\xCE\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190412\\xB1\\x01\n\\x06x86_64\\x10\\xA4?\\x18\\x80\\x80\\xCC\\xD4\\xC9\\xFF\\x1F\"\\x00(\\x010\\x80\\x148\\xB8\\x08Ba\\x08\\x86\\x81\\x02\\x10\\x96\\x14\\x1A\r20.19.15.46422\\x0BGoogle Inc.:<ANGLE (Intel(R) HD Graphics Family Direct3D11 vs_5_0 ps_5_0)M\\xA9\\xF7\\xA2BUsC\\xA4Be\\x00\\x00\\x80?"
		"j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8C\\x10\\x18\\x04 \\x00\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.453 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r]s\\x81\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r"
		"1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r>\\x0C\\xF7\\xDF\\x15Z\\xE5{7J\n\r[\\x07\\xA7\\x90\\x15\\x97:\\x89\\xD2J\n\r\\xD3\\x11\\xF9D\\x15\\xFBZ\\xF17J\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x87Q\\xF7\\xB0\\x15\\xA2\\xE6\\xED\\x12J\n\r#\\xF6\\xF8\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF.\\xB6\\x82\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xF8h2'\\x15\\x84\\xDE \\xF8J\n\r)\\xB3\\\\f\\x15\\x80\\x8D}\\xCAJ\n\r"
		">\\xC6R\\x1D\\x15\\x80\\x8D}\\xCAJ\n\r\\xBF$\\xE4\\x8A\\x15\\xA2\\xE6\\xED\\x12J\n\r{\\x85j\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r4\\xC3\\xEEa\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\x0F\\xE0f\\xD6J\n\r\\x06\\xC9\\x1B|\\x15N\\xB7%XJ\n\r\\x95\\xABP\\x89\\x15\\x80\\x8D}\\xCAJ\n\r]\\x88\\xB98\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xA9\\x8E\\xB5\\xED\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF\\xFE\\x98\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\xDD\\xDD\\x13\\x9A\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x08J`\\x9E\\x15\\xA2\\xE6\\xED\\x12J\n\rR\\xB0Az\\x15\\x80\\x8D}\\xCAJ\n\r|~;\\x81\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xED-t\\xDC\\x15!\\x98\\xA4\\x1FJ\n\r3\\xB8p\\x84\\x15\\x80\\x8D}\\xCAJ\n\r\\xCE\\x88R\\x19\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x03\\\\\\xA3E\\x15\\x80\\x8D}\\xCAJ\n\r\\x1A\\x14r\\xC5\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7\\xE5\\xE3\\xED\\x15Z\\xE5{7J\n\r\\xC0\\x04Zj\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\x11\\xD7eoJ\n\r\\x97\\x82\\x9C\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x1D|'m\\x15U'\\xAB\\x90J\n\r\\xE4\\x03\\x10\\xEB\\x15cJ\\xB3IJ\n\r.'\\xF0\\x89\\x15Z\\xE5{7J\n\r\\xC0\\x04p$\\x15\\x80\\x8D}\\xCAJ\n\r\\\\)\\x1CR\\x15\\x80\\x8D}\\xCAJ\n\r\\xBE\\xE0\\xC2x\\x15\\x80\\x8D}\\xCAJ\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3\\x0Euh\\x15Z\\xE5{7J\n\r\\xCD\\xE4)\\xC1\\x15Z\\xE5{7J\n\r\\xA7\\x13\\x0C\\x86\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x04A\\xD2\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xCA\\x84gg\\x15\\xA2\\xE6\\xED\\x12J\n\r(\\xB6)'\\x15o\\xC1\\xB5KJ\n\r\\x1A\\xE6!\\xDC\\x15Z\\xE5{7J\n\rq,%\\x05\\x15\\x80\\x8D}\\xCAJ\n\r\\xED\\\\\\x19X\\x15\\x80\\x8D}\\xCAJ\n\ro\\x1B\\xA8.\\x15\\x80\\x8D}\\xCAJ\n\r\\x81\\x9CN\\x16\\x15Z\\xE5{7J\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rM\\xC7\\xB3\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rJjE\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\rX\\xA5\\xED\\x1B\\x15Z\\xE5{7J\n\r\\xD6\\xA0\\xC0R\\x15\\xEC\\x9Ew\\xB4J\n\r"
		"\\xF1u\\\\\\x9E\\x15S\\xAA7\\x19J\n\r<d\\x03\\xF4\\x15\\xAA\\xB4!#J\n\r\\x82$i\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x86/ \\x15\\xEC\\x9Ew\\xB4J\n\r\\xAE8\\x8Ec\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xE4\r\\x9D@\\x15\\x80\\x8D}\\xCAJ\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x82Z\\x03DJ\n\r\\xCB\\xF4S\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\x0B\\x99/\\x15\\x80\\x8D}\\xCAJ\n\rZ\\x9A\\xC9S\\x15\\x80\\x8D}\\xCAJ\n\r\\xBDoV\\xD3\\x15\\x80\\x8D}\\xCAJ\n\r\\x93\\xBB\\x12\\xCE\\x15Z\\xE5{7J\n\rjX\\x85\\xAE\\x15\\x80\\x8D}"
		"\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r|w\\xECA\\x15\\xA2\\xE6\\xED\\x12J\n\r:\\x05\\xC6\\x99\\x15Z\\xE5{7J\n\r6\\xEE\\x8A\\xF4\\x15\\x80\\x8D}\\xCAJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r@\\x14\\xE5,\\x15\\x80\\x8D}\\xCAJ\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n\rm(\\xFFP\\x15Z\\xE5{7J\n\r\\xC0\\x8E\\xFFO\\x15\\xBD\\xE7\\x19TJ\n\rq\\x95]l\\x15Z\\xE5{7J\n\r\\xEC]\\xBE)\\x15\\xBFC&|J\n\r\\x08q\\x16\\xF1\\x15Z\\xE5{7J\n\rc\\xC9\\xA3\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r"
		"t8\\x06x\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7dG\\xEF\\x154\\x91\\xD9-J\n\r\\xFD\\x87V\\xA0\\x15\\xCD_\\xE0mJ\n\r\\xBEp\\xFF\\xD0\\x15\\x80\\x8D}\\xCAJ\n\r\\xB2\\xB5`w\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\xDAT\\x13\\x15\\xA7\\x94\\x12xJ\n\rr_\\x1C\\x93\\x15yF\\x0F\\x1BJ\n\r>\\xB5\\xF5\\x97\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15\\xD0\\xE0\\x90\\xDAJ\n\rF\\xE7\\x06\\xE7\\x15' \\x83\\xACJ\n\r"
		"\\x0C\\x19\\x96\\xF2\\x15P\\xE3\\x9A:J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15\\xE7\\xFF\\xDFkJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15u\\x05\\xD6JJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xF9uL\\xAE\\x15Z\\xE5{7J\n\r\\x0Bh\\xF9\r\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xCA\\xC4\\xFF\\x15\\xA5Xc\\x13J\n\rzZ?\\x7F\\x15\\x03\\xF5\\xFEeJ\n\r\\xB5\\xF5uy\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x96\\x846\\xE1\\x15\\x80\\x8D}\\xCAJ\n\rec\\xFA\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\x03_C'\\x15\\x80\\x8D}\\xCAJ\n\r:\\x7F\\xFA\\xA5\\x15\\x80\\x8D}\\xCAJ\n\r-\\xC6\\xA8+\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\xD7q\\xBF\\x15Z\\xE5{7J\n\r\\x9A,J*\\x15\\xBB\\x06\\x18\\xF6J\n\r/\\xE4\\xB2\\x8D\\x15\\x80\\x8D}\\xCAJ\n\r\\xF9>?\\xB5\\x15\\x80\\x8D}\\xCAJ\n\r\\x88~\\x98\\xA4\\x15\\x037\\xA4\\xF9P\\x04ZE\\x08\\x01\\x10\\xF8\\xA4\\x92\\xFE\\x05\\x18\\x81\\xA3\\x92\\xFE\\x05\"\\x17\n\t"
		"1.3.36.32\\x10\\x81\\xA3\\x92\\xFE\\x05\\x18\\x00 \\x00(\\x00*\\x1C\n\\x0C87.0.4280.66\\x10\\x81\\xA3\\x92\\xFE\\x05\\x18\\x00 \\x1E(\\x80\\x80\\x08b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xB0\\xB3\\x87\\xCE\\x05\\x90\\x01\\x02\\x90\\x01\n"
		"\\x90\\x01U\\x90\\x01x\\x90\\x01\\x8F\\x01\\x90\\x01\\x9B\\x01\\x90\\x01\\xA1\\x01\\x90\\x01\\xA6\\x01\\x90\\x01\\xDB\\x01\\x90\\x01\\xE5\\x01\\x90\\x01\\xAD\\x02\\x90\\x01\\xC4\\x02\\x90\\x01\\x89\\x03\\x90\\x01\\x91\\x03\\x90\\x01\\x9A\\x03\\x90\\x01\\x9C\\x03\\x90\\x01\\xC2\\x03\\x90\\x01\\xD1\\x03\\x90\\x01\\x92\\x04\\x90\\x01\\x95\\x04\\x90\\x01\\xAF\\x04\\x90\\x01\\xB2\\x04\\x90\\x01\\xC5\\x04\\x90\\x01\\xCE\\x04\\x90\\x01\\xD8\\x04\\x90\\x01\\xF0\\x05\\x90\\x01\\xB4\\x06\\x90\\x01\\xC0\\x06"
		"\\x90\\x01\\x9B\\x07\\x90\\x01\\xE2\\x07\\x90\\x01\\xF8\\x07\\x98\\x01\\x01\\xB0\\x01\\x01\\xBA\\x01\\x0C\\x15\\xA8V\\xA7?%6>\\xDA\\xCD(\\x02\\xBA\\x01\\x0C\\x15i\\x04u~%\\x00\\x00\\x00\\x00(\\x01\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n86.249.200\\x1D$nlh\\xC2\\x01\r\\x08\n\\x12\\x046269\\x1D8\\xD7.r\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D "
		"\\xDC\\xD7\\x1C\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.5\\x1D;\\xA9\\xFCb\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.453\\x1D\\xE3\\x04\\xEA\\xD5\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1679.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x01"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x02\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\nx\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02"
		" \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620201125-161856.610588\\xF8\\x01\\xC17\\x80\\x02\\xFD=\\x88\\x02\\x012\\x0F\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10d\\x1A\\x02\\x10e2\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x022\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x01", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"OCGLyJtdKdbV0ZHO1PGvy762dzxP2rOMeoaL+C0f5yc=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"771F19DED665D108CD62E6D96FEA5F0F97040490");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_custom_request("v2_2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		body_variable_1, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,jflookgnkcckhobaglndicnbbgbonegd,"
		"ehgidpndbllacpjalkiimkbadgjfnnmc,bklopemakmnopmghhmccadeonafabnal,ggkkehgbnfjpeggfpleeakpidbkibbmn,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-87.0.4280.66");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:198730171&cup2hreq=bc7ce7c4b3ca092f22d5580a78fd3df34cff2b05850950cd62d8585367e5b301", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{aeadf74b-69a6-464c-a3e0-4cc0f1e96571}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\""
		":true,\"packages\":{\"package\":[{\"fp\":\"1.d5ea04e364a1b5c7e2739dfc53e5df79b1ab6ff5c4b8d3077bfa7c3fbf7a0554\"}]},\"ping\":{\"ping_freshness\":\"{9a157fe8-8ac8-426f-a939-50deb3d3ca19}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"32.0.0.453\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6f36c6ec-e392-4c70-b2ab-241c69b7e56b}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{1ea78199-d0be-4187-8df9-e63440e461d5}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:xa9@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.3c7a41cee94e225a40d1158c97cf08f3039bfc9b1c9102745eca434c6f6994db\"}]},\"ping\":{\"ping_freshness\":\"{dcc5287c-f8c9-488b-a63b-fc4569f2d858}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"9.18.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GGLS\",\"cohort\":\"1:wr3:x23@0.01\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a3163038-9dae-4609-9453-3339a0faca1f}\",\"rd\":5081},\"updatecheck\":{},\"version\":\""
		"0.0.0.0\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9995584823430547e66d746bb3dda0c36ca73f90e823f549af442c82d31536e9\"}]},\"ping\":{\"ping_freshness\":\"{ae365ad5-3482-4704-8a3a-2e6d44260111}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"20201112.343270483\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.926eadbdda22049ecab0bb000f11abb7378933bed695bb681fbe0bb4e65cdbc4\"}]},\"ping\":{\"ping_freshness\":\"{19c9eca4-6854-4640-95a2-10defdd780a1}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2020.11.24.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages"
		"\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{9f1faf73-39f1-48c8-9313-b90100eaa184}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\""
		"ping_freshness\":\"{f010e1ce-90b6-4aa8-a938-1308f5ac49d1}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.722ed738dcc98ddc10ae3a6cb472b4ce793b1e9af28e9d301e7fbd18c1574954\"}]},\"ping\":{\"ping_freshness\":\"{0c3c57af-84d8-4159-9830-e2a24a5236a7}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"6269\"},"
		"{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.62fca93b66ce468f2e445a0c0aee3643e7946aae6f6c86f45dc79de14e67d8ce\"}]},\"ping\":{\"ping_freshness\":\"{8d4a1485-633b-4a45-86e9-524fa97e7d81}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ebd287a8-be63-4e16-89df-c2024c65f1b8}\",\"rd\":5081},\""
		"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.686c6e243003597668933d4b7db6d4437fd94f90bfe5f76db32bb21059c95c42\"}]},\"ping\":{\"ping_freshness\":\"{1ecd6ac5-e958-4772-b1ed-aecdcafba758}\",\"rd\":5081},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"86.249.200\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4d1dd40b83ad72e4491b9ab75b7259d6360c5b3debc5c78ac43a7ae2b0ffcc3d\"}]},\"ping\":{\"ping_freshness\":\"{2c04f46a-9a36-4187-a375-2eab7b5ce88a}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2509\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c3760684-d6c9-4411-b6db-d9faf8b8e3dc}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{90edfc6c-9a0d-4f5d-827b-4ba239e2076b}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:xo3@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a596d8bd770d5a6ad18e078673d2a8461ab60ee56b0e04995125fee9ed65c89a\"}]},\"ping\":{\"ping_freshness\""
		":\"{898553e1-7fd2-47fb-b01c-030c756c5048}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2020.11.16.1201\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{fac41fe3-706c-4eb7-9c44-f5ab2ffc7886}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"1\"},{\""
		"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a4262ad7-c264-4133-9c4c-5e6daaef66dc}\",\"rd\":5081},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":8},\"lang\":\"en-US\","
		"\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.630\"},\"prodversion\":\"87.0.4280.66\",\"protocol\":\"3.1\",\"requestid\":\"{78f1938a-5c5f-4326-b9e5-3d442ea08aec}\",\"sessionid\":\"{90de5e7a-cf75-4323-a7d8-25ea956cefb2}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\"updaterversion\":\"87.0.4280.66\"}}", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"fhUPj+JI7J4Y1fCY0+G4dq/egVShLDpJp5jSmqUEWm4=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"55011A710B4A38777D42CDF9E0360224DD76BAF5");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	lr_think_time(5);

	web_custom_request("v2_3", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\tq\\x80\\xAC\\xBB\\x9B\\xB5U\\xC2\\x10\\xB7\\x05\\x1A\\x9A\\x1B\\x08\\xF5\\xC7\\xCC\\xFD\\x05\\x12\\x0F87.0.4280.66-64\\x18\\xB0\\xB3\\x87\\xCE\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190412\\xB1\\x01\n\\x06x86_64\\x10\\xA4?\\x18\\x80\\x80\\xCC\\xD4\\xC9\\xFF\\x1F\"\\x00(\\x010\\x80\\x148\\xB8\\x08Ba\\x08\\x86\\x81\\x02\\x10\\x96\\x14\\x1A\r20.19.15.46422\\x0BGoogle Inc.:<ANGLE (Intel(R) HD Graphics Family Direct3D11 vs_5_0 ps_5_0)M\\xA9\\xF7\\xA2BUsC\\xA4Be\\x00\\x00\\x80?"
		"j\\x16\n\\x0CGenuineIntel\\x10\\xD1\\x8C\\x10\\x18\\x04 \\x00\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.453 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x03\\xE8\\x01\\x01J\n\r]s\\x81\\xAF\\x15\\x80\\x8D}\\xCAJ\n\r"
		"1V\\x08\\x84\\x15\\xCF\\xA1\\x02\\xABJ\n\r>\\x0C\\xF7\\xDF\\x15Z\\xE5{7J\n\r[\\x07\\xA7\\x90\\x15\\x97:\\x89\\xD2J\n\r\\xD3\\x11\\xF9D\\x15\\xFBZ\\xF17J\n\rT`\\xB1\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x87Q\\xF7\\xB0\\x15\\xA2\\xE6\\xED\\x12J\n\r#\\xF6\\xF8\\x91\\x15\\x80\\x8D}\\xCAJ\n\r\\x12\\xF4\\xB6Y\\x15\\x80\\x8D}\\xCAJ\n\rR\\xB3\\xD4`\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF.\\xB6\\x82\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xF8h2'\\x15\\x84\\xDE \\xF8J\n\r)\\xB3\\\\f\\x15\\x80\\x8D}\\xCAJ\n\r"
		">\\xC6R\\x1D\\x15\\x80\\x8D}\\xCAJ\n\r\\xBF$\\xE4\\x8A\\x15\\xA2\\xE6\\xED\\x12J\n\r{\\x85j\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r4\\xC3\\xEEa\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\x0F\\xE0f\\xD6J\n\r\\x06\\xC9\\x1B|\\x15N\\xB7%XJ\n\r\\x95\\xABP\\x89\\x15\\x80\\x8D}\\xCAJ\n\r]\\x88\\xB98\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xA9\\x8E\\xB5\\xED\\x15\\x80\\x8D}\\xCAJ\n\r\\xCF\\xFE\\x98\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\xDD\\xDD\\x13\\x9A\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x08J`\\x9E\\x15\\xA2\\xE6\\xED\\x12J\n\rR\\xB0Az\\x15\\x80\\x8D}\\xCAJ\n\r|~;\\x81\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xED-t\\xDC\\x15!\\x98\\xA4\\x1FJ\n\r3\\xB8p\\x84\\x15\\x80\\x8D}\\xCAJ\n\r\\xCE\\x88R\\x19\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x03\\\\\\xA3E\\x15\\x80\\x8D}\\xCAJ\n\r\\x1A\\x14r\\xC5\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7\\xE5\\xE3\\xED\\x15Z\\xE5{7J\n\r\\xC0\\x04Zj\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\x08We\\x15\\x11\\xD7eoJ\n\r\\x97\\x82\\x9C\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x1D|'m\\x15U'\\xAB\\x90J\n\r\\xE4\\x03\\x10\\xEB\\x15cJ\\xB3IJ\n\r.'\\xF0\\x89\\x15Z\\xE5{7J\n\r\\xC0\\x04p$\\x15\\x80\\x8D}\\xCAJ\n\r\\\\)\\x1CR\\x15\\x80\\x8D}\\xCAJ\n\r\\xBE\\xE0\\xC2x\\x15\\x80\\x8D}\\xCAJ\n\rK\\xADB0\\x15\\x80\\x8D}\\xCAJ\n\r\\xE9W\\xA3\\xE4\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3\\x0Euh\\x15Z\\xE5{7J\n\r\\xCD\\xE4)\\xC1\\x15Z\\xE5{7J\n\r\\xA7\\x13\\x0C\\x86\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x04A\\xD2\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xCA\\x84gg\\x15\\xA2\\xE6\\xED\\x12J\n\r(\\xB6)'\\x15o\\xC1\\xB5KJ\n\r\\x1A\\xE6!\\xDC\\x15Z\\xE5{7J\n\rq,%\\x05\\x15\\x80\\x8D}\\xCAJ\n\r\\xED\\\\\\x19X\\x15\\x80\\x8D}\\xCAJ\n\ro\\x1B\\xA8.\\x15\\x80\\x8D}\\xCAJ\n\r\\x81\\x9CN\\x16\\x15Z\\xE5{7J\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\rM\\xC7\\xB3\\xFA\\x15\\x80\\x8D}\\xCAJ\n\rJjE\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7X.\\x14\\x15\\x80\\x8D}\\xCAJ\n\rX\\xA5\\xED\\x1B\\x15Z\\xE5{7J\n\r\\xD6\\xA0\\xC0R\\x15\\xEC\\x9Ew\\xB4J\n\r"
		"\\xF1u\\\\\\x9E\\x15S\\xAA7\\x19J\n\r<d\\x03\\xF4\\x15\\xAA\\xB4!#J\n\r\\x82$i\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x86/ \\x15\\xEC\\x9Ew\\xB4J\n\r\\xAE8\\x8Ec\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xE4\r\\x9D@\\x15\\x80\\x8D}\\xCAJ\n\r\\xA1\\xC4\\xBC\\xBD\\x15\\x82Z\\x03DJ\n\r\\xCB\\xF4S\\xE1\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\x0B\\x99/\\x15\\x80\\x8D}\\xCAJ\n\rZ\\x9A\\xC9S\\x15\\x80\\x8D}\\xCAJ\n\r\\xBDoV\\xD3\\x15\\x80\\x8D}\\xCAJ\n\r\\x93\\xBB\\x12\\xCE\\x15Z\\xE5{7J\n\rjX\\x85\\xAE\\x15\\x80\\x8D}"
		"\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r|w\\xECA\\x15\\xA2\\xE6\\xED\\x12J\n\r:\\x05\\xC6\\x99\\x15Z\\xE5{7J\n\r6\\xEE\\x8A\\xF4\\x15\\x80\\x8D}\\xCAJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r@\\x14\\xE5,\\x15\\x80\\x8D}\\xCAJ\n\rl\\x07\\xF4\\xD6\\x15\\x80\\x8D}\\xCAJ\n\rm(\\xFFP\\x15Z\\xE5{7J\n\r\\xC0\\x8E\\xFFO\\x15\\xBD\\xE7\\x19TJ\n\rq\\x95]l\\x15Z\\xE5{7J\n\r\\xEC]\\xBE)\\x15\\xBFC&|J\n\r\\x08q\\x16\\xF1\\x15Z\\xE5{7J\n\rc\\xC9\\xA3\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r"
		"t8\\x06x\\x15\\x80\\x8D}\\xCAJ\n\r\\xD7dG\\xEF\\x154\\x91\\xD9-J\n\r\\xFD\\x87V\\xA0\\x15\\xCD_\\xE0mJ\n\r\\xBEp\\xFF\\xD0\\x15\\x80\\x8D}\\xCAJ\n\r\\xB2\\xB5`w\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\xDAT\\x13\\x15\\xA7\\x94\\x12xJ\n\rr_\\x1C\\x93\\x15yF\\x0F\\x1BJ\n\r>\\xB5\\xF5\\x97\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xA3\\xB6\\xDCc\\x15\\xD0\\xE0\\x90\\xDAJ\n\rF\\xE7\\x06\\xE7\\x15' \\x83\\xACJ\n\r"
		"\\x0C\\x19\\x96\\xF2\\x15P\\xE3\\x9A:J\n\r\\xE2\\xAABD\\x15c(\\x82\\xA5J\n\rd\\xCF\\x90\\xF6\\x15\\xE7\\xFF\\xDFkJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15u\\x05\\xD6JJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xF9uL\\xAE\\x15Z\\xE5{7J\n\r\\x0Bh\\xF9\r\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xCA\\xC4\\xFF\\x15\\xA5Xc\\x13J\n\rzZ?\\x7F\\x15\\x03\\xF5\\xFEeJ\n\r\\xB5\\xF5uy\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x96\\x846\\xE1\\x15\\x80\\x8D}\\xCAJ\n\rec\\xFA\\x12\\x15\\x80\\x8D}\\xCAJ\n\r\\x03_C'\\x15\\x80\\x8D}\\xCAJ\n\r:\\x7F\\xFA\\xA5\\x15\\x80\\x8D}\\xCAJ\n\r-\\xC6\\xA8+\\x15\\x80\\x8D}\\xCAJ\n\r\\xE4\\xD7q\\xBF\\x15Z\\xE5{7J\n\r\\x9A,J*\\x15\\xBB\\x06\\x18\\xF6J\n\r/\\xE4\\xB2\\x8D\\x15\\x80\\x8D}\\xCAJ\n\r\\xF9>?\\xB5\\x15\\x80\\x8D}\\xCAJ\n\r\\x88~\\x98\\xA4\\x15\\x037\\xA4\\xF9P\\x04ZE\\x08\\x01\\x10\\xF8\\xA4\\x92\\xFE\\x05\\x18\\x81\\xA3\\x92\\xFE\\x05\"\\x17\n\t"
		"1.3.36.32\\x10\\x81\\xA3\\x92\\xFE\\x05\\x18\\x00 \\x00(\\x00*\\x1C\n\\x0C87.0.4280.66\\x10\\x81\\xA3\\x92\\xFE\\x05\\x18\\x00 \\x1E(\\x80\\x80\\x08b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xB0\\xB3\\x87\\xCE\\x05\\x90\\x01\\x02\\x90\\x01\n"
		"\\x90\\x01U\\x90\\x01x\\x90\\x01\\x8F\\x01\\x90\\x01\\x9B\\x01\\x90\\x01\\xA1\\x01\\x90\\x01\\xA6\\x01\\x90\\x01\\xDB\\x01\\x90\\x01\\xE5\\x01\\x90\\x01\\xAD\\x02\\x90\\x01\\xC4\\x02\\x90\\x01\\x89\\x03\\x90\\x01\\x91\\x03\\x90\\x01\\x9A\\x03\\x90\\x01\\x9C\\x03\\x90\\x01\\xC2\\x03\\x90\\x01\\xD1\\x03\\x90\\x01\\x92\\x04\\x90\\x01\\x95\\x04\\x90\\x01\\xAF\\x04\\x90\\x01\\xB2\\x04\\x90\\x01\\xC5\\x04\\x90\\x01\\xCE\\x04\\x90\\x01\\xD8\\x04\\x90\\x01\\xF0\\x05\\x90\\x01\\xB4\\x06\\x90\\x01\\xC0\\x06"
		"\\x90\\x01\\x9B\\x07\\x90\\x01\\xE2\\x07\\x90\\x01\\xF8\\x07\\x98\\x01\\x01\\xB0\\x01\\x01\\xBA\\x01\\x0C\\x15\\xA8V\\xA7?%6>\\xDA\\xCD(\\x02\\xBA\\x01\\x0C\\x15i\\x04u~%\\x00\\x00\\x00\\x00(\\x01\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n86.249.200\\x1D$nlh\\xC2\\x01\r\\x08\n\\x12\\x046269\\x1D8\\xD7.r\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D "
		"\\xDC\\xD7\\x1C\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.5\\x1D;\\xA9\\xFCb\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.453\\x1D\\xE3\\x04\\xEA\\xD5\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1679.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x01"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x02\\x10\\x01\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\nx\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02"
		" \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x06\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x02p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620201125-161856.610588\\xF8\\x01\\xC17\\x80\\x02\\xFD=\\x88\\x02\\x012\\x0F\tsh,\\xF9Rw\\x98e\\x104\\x1A\\x02\\x1052\\x11\t\\x14x\\xD0\n\\xD8\\x8D\\xF1)\\x10\\x04\\x1A\\x04\\x10\\x02 \\x042\r\tYr8\\x94d_<\\xE1\\x1A\\x02\\x10\\x012\\x12\t\\xA2\\xB6:t\\xCB\\x91n\\x8C\\x1A\\x07\\x08\\x00\\x10\\xE8\\x07 \\x042\\x17\t\\xAEy&D\\x87\\x02\\x8BI\\x10\\xAC_\\x1A\t\\x08\\x90N\\x10\\xFF\\xFF\\xFF\\xFF\\x072\\x11\t"
		"\\x8B\\x8B\\x85!\\xB8/\\x89/\\x10\"\\x1A\\x04\\x10\\x02 \"2\\x11\t\t\\x1FF\\x12\\xB3\\xFF\\x13h\\x10\\x02\\x1A\\x04\\x10\\x02 \\x022\\x0F\tY\\x9F\\x8B\\xFBDR\\x91\\x9E\\x1A\\x04\\x10\\x01 \\x072\r\t\\xEA]F\\x1C\\xCB\\xF2\\xE6\\xD3\\x1A\\x02\\x10\\x012\\x13\tr\\x10\\xD4\\xC78\\x9D\\xE1\\xCE\\x10\\x07\\x1A\\x02\\x08\\x03\\x1A\\x02\\x10\\x052\\x0F\t\\xE8\\xEDE\\xCA\\x16\\x97\\x95#\\x1A\\x04\\x10\\x01 \n2\\x0F\t\\x08\\xDD\\x87\\x07\\x8Ei*\\x1D\\x1A\\x04\\x10\\x01 \n2\\x0F\t\\xB8}"
		"m\\x08\\xC3#\\xE1C\\x1A\\x04\\x10\\x01 \n2\r\t8\\xA150\\xC6\\x8E\\xD3\\xB6\\x1A\\x02\\x10\\x012\r\t{\nQMHo^\\x0B\\x1A\\x02\\x10\\x012\r\t&\\x7F\\xA5\\xAD\\xAF\\x0C\\xCB\\xBA\\x1A\\x02\\x10\\x012\\x17\t\\xAC\\x9Be\\xBAgs\\x19l\\x10\\x95N\\x1A\t\\x08\\x90N\\x10\\xFF\\xFF\\xFF\\xFF\\x072\\x0F\t\\x15T\\x8F\\xE9\\xE1\\xC4\\xECc\\x10\\x04\\x1A\\x02\\x10\\x05", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Origin", 
		"http://localhost:8080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_submit_data("login", 
		"Action=http://localhost:8080/bank/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/bank/login", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=jsmith@demo.io", ENDITEM, 
		"Name=password", "Value=Demo123!", ENDITEM, 
		EXTRARES, 
		"Url=css/animate.css", "Referer=http://localhost:8080/bank/scss/style.css", ENDITEM, 
		"Url=images/flags/4x3/us.svg", "Referer=http://localhost:8080/bank/css/flag-icon.min.css", ENDITEM, 
		"Url=fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://localhost:8080/bank/css/font-awesome.min.css", ENDITEM, 
		"Url=fonts/themify.woff?-fvbane", "Referer=http://localhost:8080/bank/css/themify-icons.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"XX/pnZXwHfs0Sa5qgalrOTUMVXQDbkcIa+qf+kxNa28=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"C9E5E208C615DB5FC5200A039B253D44064B390E");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_custom_request("v2_4", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		body_variable_2, 
		LAST);

	/* Deposit Link */

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"87\", \"\\\"Not;A\\\\Brand\";v=\"99\", \"Chromium\";v=\"87\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(15);

	web_url("deposit", 
		"URL=http://localhost:8080/bank/account/deposit", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/bank/home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/animate.css", "Referer=http://localhost:8080/bank/scss/style.css", ENDITEM, 
		"Url=../images/flags/4x3/us.svg", "Referer=http://localhost:8080/bank/css/flag-icon.min.css", ENDITEM, 
		"Url=../fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://localhost:8080/bank/css/font-awesome.min.css", ENDITEM, 
		"Url=../fonts/themify.woff?-fvbane", "Referer=http://localhost:8080/bank/css/themify-icons.css", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIXCc7yLED3YangEgUNOXavghIFDf7Zmo4=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Select accounttype */

	/* enter amounut and submit */

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://localhost:8080");

	web_submit_data("deposit_2", 
		"Action=http://localhost:8080/bank/account/deposit", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/bank/account/deposit", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=79", ENDITEM, 
		"Name=amount", "Value=50", ENDITEM, 
		EXTRARES, 
		"Url=../css/animate.css", "Referer=http://localhost:8080/bank/scss/style.css", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=../images/flags/4x3/us.svg", "Referer=http://localhost:8080/bank/css/flag-icon.min.css", ENDITEM, 
		"Url=../fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://localhost:8080/bank/css/font-awesome.min.css", ENDITEM, 
		"Url=../fonts/themify.woff?-fvbane", "Referer=http://localhost:8080/bank/css/themify-icons.css", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIXCe72sNKKLnzOEgUNyGT3bBIFDb2Fgw8=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Logout */

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Logout", 
		"URL=http://localhost:8080/bank/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:8080/bank/account/savings-view?selectSwitch=79", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=css/animate.css", "Referer=http://localhost:8080/bank/scss/style.css", ENDITEM, 
		LAST);

	return 0;
}