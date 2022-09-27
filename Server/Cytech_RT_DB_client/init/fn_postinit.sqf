diag_log "#########################################";
diag_log "########### post Init Started ###########";
diag_log "#########################################";

0 spawn {
	sleep (60 * 60 * 4);
	0 call Cytech_fnc_savedbvehicles;

	["Server Shutddown in 60 Seconds"] remoteexec ["hint",-2];
	sleep 60;	
	"sdfhjjopwsejr3-fsdyhflkhesrlkh2" serverCommand "#shutdown";
};

_handle = execVM "\Cytech_RT_DB_client\DB\fn_db_init.sqf";	
waitUntil { scriptDone _handle };
	
_handle = execVM "\Cytech_RT_DB_client\DB\fn_db_vehicles.sqf";
waitUntil { scriptDone _handle };

_handle = execVM "\Cytech_RT_DB_client\events\fn_events_init.sqf";
waitUntil { scriptDone _handle };

_handle = execVM "\Cytech_RT_DB_client\character\fn_character_init.sqf";
waitUntil { scriptDone _handle };	

_handle = execVM "\Cytech_RT_DB_client\servertransfer\fn_servertransfer_init.sqf";
waitUntil { scriptDone _handle };	

0 call Cytech_fnc_spawndbvehicles;



diag_log "#########################################";
diag_log "############ post Init Ended ############";
diag_log "#########################################";