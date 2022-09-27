cytech_fnc_inittransfer = {
	params ["_worldinfo"];
	systemChat str [player,(_worldinfo)];
	[player,(_worldinfo)] remoteexec ["cytech_fnc_servertransfer",2];
};
//[[worldname,"ExitA"]] call cytech_fnc_inittransfer;


cytech_fnc_exectransfer = {
	#include "\A3\Ui_f\hpp\defineResincl.inc"

	if (
		isServer 
		|| 
		!(
			isRemoteExecuted 
			&& 
			remoteExecutedOwner isEqualTo 2
		)
	) 
	exitWith {diag_log "Must be remote executed from dedicated server"};
	diag_log "Running Server change";
	_worldinfo = _this;
	_serverinfo = (getArray (MissionconfigFile >> "CfgTransferWorlds" >> (_worldinfo select 0) >> "Serverinfo"));
	diag_log str _this;
	diag_log str _serverinfo;
		diag_log format["%1 %2 %3",(_serverinfo select 0), (_serverinfo select 1), (_serverinfo select 2)];
		
	_this resize 0;

	onEachFrame format [
	"
		private _allDisplays = allDisplays select 
		[
			allDisplays find findDisplay %5, 
			count allDisplays
		];
		reverse _allDisplays;
		{_x closeDisplay %4} forEach _allDisplays;
		
		onEachFrame 
		{
			findDisplay %6 closeDisplay  %4;
			findDisplay %7 closeDisplay  %4;
			
			onEachFrame
			{
				ctrlActivate (findDisplay %8 displayCtrl %9);
				
				onEachFrame
				{
					private _ctrlServerAddress = findDisplay %10 displayCtrl 2300;
					_ctrlServerAddress controlsGroupCtrl %11 ctrlSetText ""%1""; 
					_ctrlServerAddress controlsGroupCtrl %12 ctrlSetText ""%2"";
					ctrlActivate (_ctrlServerAddress controlsGroupCtrl %14);
					
					onEachFrame 
					{   
						findDisplay %8 displayCtrl %13 lbData 0 call 
						{
							if (diag_tickTime > %18) then
							{
								diag_log ""RCTS Timeout (no server)"";
								onEachFrame {};
							};  
						
							if (_this isEqualTo ""%1:%2"") then
							{
								findDisplay %8 displayCtrl %13 lbSetCurSel 0;
								
								onEachFrame 
								{
									ctrlActivate (findDisplay %8 displayCtrl %15);
									
									onEachFrame 
									{                       
										if (diag_tickTime > %18) then
										{
											diag_log ""RCTS Timeout (cannot join)"";
											onEachFrame {};
										};
										
										if (!isNull findDisplay %16) then
										{
											private _ctrlPassword = findDisplay %16 displayCtrl %17;
											_ctrlPassword ctrlSetTextColor [0,0,0,0];
											_ctrlPassword ctrlSetText ""%3"";
											ctrlActivate (findDisplay %16 displayCtrl %14);
										};
										
										if (getClientStateNumber >= 3) then
										{
											diag_log ""RCTS Success"";
											onEachFrame {};
										};
									};
								};
							};
						};
					};
				};
			};
		};
	",(_serverinfo select 0), (_serverinfo select 1), (_serverinfo select 2), IDC_CANCEL, IDD_MISSION, IDD_DEBRIEFING, IDD_MP_SETUP, IDD_MULTIPLAYER, 
	IDC_MULTI_TAB_DIRECT_CONNECT, IDD_IP_ADDRESS, IDC_IP_ADDRESS, IDC_IP_PORT, IDC_MULTI_SESSIONS, 
	IDC_OK, IDC_MULTI_JOIN, IDD_PASSWORD, IDC_PASSWORD, diag_tickTime + 30];
};