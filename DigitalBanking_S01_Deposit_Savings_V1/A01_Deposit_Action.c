A01_Deposit_Action()
{
	
	

	/******  COMMENT: Launch the homepage URL from browser ******/
	
	web_reg_find("SaveCount=T01_TextSearch",
		"Text=Remember Me",
		LAST);

	
	lr_start_transaction("DB_S01_Deposit_T01_LaunchHome");

	web_url("bank", 
		"URL=http://{P_Host}:{P_Port}/bank/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	if(atoi(lr_eval_string("{T01_TextSearch}")) > 0) {
		lr_end_transaction("DB_S01_Deposit_T01_LaunchHome", LR_PASS);
	} else {
		lr_end_transaction("DB_S01_Deposit_T01_LaunchHome", LR_FAIL);
		return 0;
	}	
	
	lr_think_time(thinktime);
	
	/******  COMMENT: Enter username and passwrd and click Login ******/
	
	web_reg_find("SaveCount=T02_TextSearch",
		"Text=Account Balance Summary",
		LAST);
	
	lr_start_transaction("DB_S01_Deposit_T02_Login");


	web_submit_data("login", 
		"Action=http://{P_Host}:{P_Port}/bank/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{P_Host}:{P_Port}/bank/login", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value={P_Username}", ENDITEM, 
		"Name=password", "Value={P_Password}", ENDITEM, 
		EXTRARES, 
//		"Url=css/animate.css", "Referer=http://{P_Host}:{P_Port}/bank/scss/style.css", ENDITEM, 
//		"Url=images/flags/4x3/us.svg", "Referer=http://{P_Host}:{P_Port}/bank/css/flag-icon.min.css", ENDITEM, 
//		"Url=fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://{P_Host}:{P_Port}/bank/css/font-awesome.min.css", ENDITEM, 
//		"Url=fonts/themify.woff?-fvbane", "Referer=http://{P_Host}:{P_Port}/bank/css/themify-icons.css", ENDITEM, 
		LAST);
	
	if(atoi(lr_eval_string("{T02_TextSearch}")) > 0) {
		lr_end_transaction("DB_S01_Deposit_T02_Login", LR_PASS);
	} else {
		lr_end_transaction("DB_S01_Deposit_T02_Login", LR_FAIL);
		return 0;
	}	
	
	
	lr_think_time(thinktime);
	
	/******  COMMENT: Click the "deposit" from the side menu bar ******/
	
	//<option value="79">Personal Savings (Money Market)</option>
	
	web_reg_save_param("C_AccountTypeID",
		"LB=<option value=\"",
		"RB=\">Personal Savings (Money Market)</option>",
		LAST);
	
	web_reg_find("SaveCount=T03_TextSearch",
		"Text=Deposit Amount",
		LAST);

	
	lr_start_transaction("DB_S01_Deposit_T03_ClickDepositMenu");
	
	web_url("deposit", 
		"URL=http://{P_Host}:{P_Port}/bank/account/deposit", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_Host}:{P_Port}/bank/home", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=../css/animate.css", "Referer=http://{P_Host}:{P_Port}/bank/scss/style.css", ENDITEM, 
//		"Url=../images/flags/4x3/us.svg", "Referer=http://{P_Host}:{P_Port}/bank/css/flag-icon.min.css", ENDITEM, 
//		"Url=../fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://{P_Host}:{P_Port}/bank/css/font-awesome.min.css", ENDITEM, 
//		"Url=../fonts/themify.woff?-fvbane", "Referer=http://{P_Host}:{P_Port}/bank/css/themify-icons.css", ENDITEM, 
//		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIXCc7yLED3YangEgUNOXavghIFDf7Zmo4=?alt=proto", "Referer=", ENDITEM, 
		LAST);
	
	if(atoi(lr_eval_string("{T03_TextSearch}")) > 0) {
			lr_end_transaction("DB_S01_Deposit_T03_ClickDepositMenu", LR_PASS);
		} else {
			lr_end_transaction("DB_S01_Deposit_T03_ClickDepositMenu", LR_FAIL);
			return 0;
		}	
		
	
	lr_think_time(thinktime);
	
	/******  COMMENT: Select accounttype, enter amounut and submit ******/
	
	web_add_header("Origin", 
		"http://{P_Host}:{P_Port}");
	
	web_reg_find("SaveCount=T04_TextSearch",
		"Text=View Savings Accounts",
		LAST);
	
	lr_start_transaction("DB_S01_Deposit_T04_EnterAmount_Submit");
	
	web_submit_data("deposit_2", 
		"Action=http://{P_Host}:{P_Port}/bank/account/deposit", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{P_Host}:{P_Port}/bank/account/deposit", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value={C_AccountTypeID}", ENDITEM, 
		"Name=amount", "Value=100", ENDITEM, 
		EXTRARES, 
//		"Url=../css/animate.css", "Referer=http://{P_Host}:{P_Port}/bank/scss/style.css", ENDITEM, 
//		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABAmdjA2tpcwJ2MgNzY3IOa2FzcGVyc2t5LWxhYnMDY29tAAABAAEAACkQAAAAAAAAQwAMAD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
//		"Url=../images/flags/4x3/us.svg", "Referer=http://{P_Host}:{P_Port}/bank/css/flag-icon.min.css", ENDITEM, 
//		"Url=../fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=http://{P_Host}:{P_Port}/bank/css/font-awesome.min.css", ENDITEM, 
//		"Url=../fonts/themify.woff?-fvbane", "Referer=http://{P_Host}:{P_Port}/bank/css/themify-icons.css", ENDITEM, 
//		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIXCe72sNKKLnzOEgUNyGT3bBIFDb2Fgw8=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	if(atoi(lr_eval_string("{T04_TextSearch}")) > 0) {
			lr_end_transaction("DB_S01_Deposit_T04_EnterAmount_Submit", LR_PASS);
		} else {
			lr_end_transaction("DB_S01_Deposit_T04_EnterAmount_Submit", LR_FAIL);
			return 0;
		}
	
	lr_think_time(thinktime);
	
	/******  COMMENT: Click Logout from the user icon ******/
	
	
	web_reg_find("SaveCount=T05_TextSearch",
		"Text=Remember Me",
		LAST);
	
	lr_start_transaction("DB_S01_Deposit_T05_Logout");

	web_url("Logout", 
		"URL=http://{P_Host}:{P_Port}/bank/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{P_Host}:{P_Port}/bank/account/savings-view?selectSwitch=79", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=css/animate.css", "Referer=http://{P_Host}:{P_Port}/bank/scss/style.css", ENDITEM, 
		LAST);
	
	if(atoi(lr_eval_string("{T05_TextSearch}")) > 0) {
			lr_end_transaction("DB_S01_Deposit_T05_Logout", LR_PASS);
		} else {
			lr_end_transaction("DB_S01_Deposit_T05_Logout", LR_FAIL);
			return 0;
		}

	return 0;
}