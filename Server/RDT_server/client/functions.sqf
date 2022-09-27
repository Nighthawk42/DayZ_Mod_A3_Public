/*
    File: functions.sqf
    Author: Cytech Dev Team (Cytech)
    Description: Init for any plugin container
*/
//TF_server_addon_version = TF_ADDON_VERSION;
0 spawn {
	0 spawn {	
		// Client Side INIT 
		#include "\RDT_server\client\fn_init.sqf"
	};	
	
	0 spawn {
		//Character Creation System Client Side code
		#include "\RDT_server\client\character_code\fn_character_code_init.sqf"	
	};

};	