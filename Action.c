//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************
//This is My First Git Pull and Commit

Action()
{
	lr_start_transaction("01C_OnBoard_User_001_Launch_URL");
	truclient_step("1", "Navigate to 'https://qa.fintechmart....etplace/landing'", "snapshot=Action_1.inf");
	truclient_step("3", "Wait until Discover exists", "snapshot=Action_3.inf");
	lr_end_transaction("01C_OnBoard_User_001_Launch_URL",0);
	truclient_step("4", "Resize browser window to 1024 px / 758 px", "snapshot=Action_4.inf");
	truclient_step("5", "Wait 5 seconds", "snapshot=Action_5.inf");
	lr_start_transaction("01C_OnBoard_User_002_ClickSignUp");
	truclient_step("6", "Click on SIGN UP link", "snapshot=Action_6.inf");
	lr_end_transaction("01C_OnBoard_User_002_ClickSignUp",0);
	truclient_step("7", "Wait 5 seconds", "snapshot=Action_7.inf");
	truclient_step("8", "Click on email@email.com textbox", "snapshot=Action_8.inf");
	truclient_step("9", "Type TC.getParam('Email'); in email@email.com textbox", "snapshot=Action_9.inf");
	truclient_step("10", "Wait 5 seconds", "snapshot=Action_10.inf");
	lr_start_transaction("01C_OnBoard_User_003_Click_Onboard_User");
	truclient_step("11", "Click on ONBOARD AS USER button", "snapshot=Action_11.inf");
	truclient_step("12", "Wait until First name label exists", "snapshot=Action_12.inf");
	lr_end_transaction("01C_OnBoard_User_003_Click_Onboard_User",0);
	truclient_step("13", "Wait 3 seconds", "snapshot=Action_13.inf");
	truclient_step("14", "Click on PROFILE IMAGE OPTIONALChoose... textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Type TC.getParam('FirstName'); in PROFILE IMAGE OPTIONALChoose... textbox", "snapshot=Action_15.inf");
	truclient_step("16", "Type TC.getParam('LastName'); in First name textbox", "snapshot=Action_16.inf");
	truclient_step("17", "Wait 5 seconds", "snapshot=Action_17.inf");
	truclient_step("18", "Click on PROFILE IMAGE OPTIONALChoose... textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Type TC.getParam('Biography'); in PROFILE IMAGE OPTIONALChoose... textbox", "snapshot=Action_19.inf");
	truclient_step("20", "Wait 3 seconds", "snapshot=Action_20.inf");
	lr_start_transaction("01C_OnBoard_User_004_Upload_ProfileImage");
	truclient_step("21", "Click on Choose a file JavaScript link", "snapshot=Action_21.inf");
	truclient_step("22", "Set C:\Users\Administrator\D...er-city-logo.png on PROFILE filebox", "snapshot=Action_22.inf");
	lr_end_transaction("01C_OnBoard_User_004_Upload_ProfileImage",0);
	truclient_step("23", "Wait 5 seconds", "snapshot=Action_23.inf");
	lr_start_transaction("01C_OnBoard_User_005_Click_Agree_Terms_Conditions");
	truclient_step("24", "Click on *Agree to terms & conditi... checkbox", "snapshot=Action_24.inf");
	lr_end_transaction("01C_OnBoard_User_005_Click_Agree_Terms_Conditions",0);
	truclient_step("25", "Wait 5 seconds", "snapshot=Action_25.inf");
	lr_start_transaction("01C_OnBoard_User_006_Click_Submit");
	truclient_step("26", "Click on SUBMIT button", "snapshot=Action_26.inf");
	truclient_step("27", "Verify SUCCESSFULLY SUBMITTED... 's Visible Text contains SUCCESSFULLY SUBMITTED USER PROFILE", "snapshot=Action_27.inf");
	lr_end_transaction("01C_OnBoard_User_006_Click_Submit",0);
	truclient_step("28", "Wait 3 seconds", "snapshot=Action_28.inf");
	lr_start_transaction("01C_OnBoard_User_007_Click_GoBacktoHomeLink");
	truclient_step("29", "Click on GO BACK TO HOME link", "snapshot=Action_29.inf");
	lr_end_transaction("01C_OnBoard_User_007_Click_GoBacktoHomeLink",0);

	return 0;
}
