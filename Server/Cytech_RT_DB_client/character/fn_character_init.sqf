cytech_fnc_runfirstsave_server = {
	// [player,[player_firstname,player_lastname,player_face,player_hat,player_glass,player_clothing,player_job,player_hobby]]
	[(_this select 0),((_this select 1) select 2)] remoteExec ["setface", -2, true]; 
	(_this select 0) setVariable ["player_firstname",((_this select 1) select 0), true];
	(_this select 0) setVariable ["player_lastname",((_this select 1) select 1), true];
	[(format["UPDATE players SET charinfo = '%2' WHERE uid = '%1'",getplayeruid (_this select 0),str (_this select 1)])] call db_fnc_update;
};

Cytech_tempfirsttime = [];
_objectarray = [["Land_cytech_atm_WoodCrate_01",[583.821,835.497,0.277957],[[0,-0,90.195]]],["Land_cytech_atm_WoodCrate_01",[583.83,835.497,1.27389],[[0,-0,90.195]]],["land_cytech_SM_Box02",[579.609,838.616,0.218704],[[-0,0,0]]],["Item_U_C_CBRN_Suit_01_Blue_F",[579.745,838.324,1.17523],[[-0,0,0]]],["Item_U_C_CBRN_Suit_01_Blue_F",[578.329,836.518,1.74444],[[-0,0,0]]],["Item_U_C_Man_casual_3_F",[579.452,838.386,1.39425],[[0,0,319.539]]],["cytech_rt_Ammo_9x18",[580.12,838.032,1.13793],[[0,0,149.501]]],["cytech_rt_Ammo_5_45x39",[579.766,837.97,1.11761],[[0,-0,155.603]]],["Weapon_arifle_AKM_F",[579.525,837.994,1.15915],[[-0,0,0]]],["Weapon_hgun_Pistol_01_F",[579.97,837.984,1.08892],[[0,-0,135.914]]],["cytech_rt_Ammo_7_62x39_AP",[579.774,837.989,1.16082],[[-0,0,0]]],["Land_CratesPlastic_F",[579.595,838.387,1.15649],[[-0,0,0]]],["Item_U_C_CBRN_Suit_01_Blue_F",[579.745,838.324,1.24848],[[-0,0,0]]],["Land_MapBoard_Enoch_F",[582.02,836.131,0.228751],[[0,0,54.8486]]],["Land_DirtPatch_05_F",[572.492,831.481,0],[[0,0,0]]],["Land_DirtPatch_05_F",[578.655,830.729,0],[[0,0,0]]],["Land_DirtPatch_05_F",[585.946,830.041,-9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[583.113,831.432,1.90735e-006],[[0,0,0]]],["Land_DirtPatch_05_F",[576.875,827.063,0],[[0,0,0]]],["Land_DirtPatch_05_F",[572.183,828.101,-9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[569.072,828.777,0],[[0,0,0]]],["Land_DirtPatch_05_F",[569.598,827.631,0],[[0,0,0]]],["Land_DirtPatch_05_F",[574.857,825.292,0],[[0,0,0]]],["Land_DirtPatch_05_F",[582.805,825.027,0],[[0,0,0]]],["Land_DirtPatch_05_F",[587.484,827.054,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[582.752,828.169,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[588.19,829.293,0],[[0,0,0]]],["Land_DirtPatch_05_F",[594.399,833.708,0],[[0,0,0]]],["Land_DirtPatch_05_F",[593.873,831.453,0],[[0,0,0]]],["Land_DirtPatch_05_F",[588.495,823.387,0],[[0,0,0]]],["Land_DirtPatch_05_F",[584.413,822.305,0],[[0,0,0]]],["Land_DirtPatch_05_F",[576.046,823.303,0],[[0,0,0]]],["Land_DirtPatch_05_F",[572.729,823.752,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[566.616,832.708,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[566.972,832.442,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[565.52,827.827,9.53674e-007],[[0,0,0]]],["Land_DirtPatch_05_F",[565.866,824.09,0],[[0,0,0]]],["Land_DirtPatch_05_F",[571.452,821.696,1.90735e-006],[[0,0,0]]],["Land_DirtPatch_05_F",[579.277,820.975,0],[[0,0,0]]],["Land_ClutterCutter_large_F",[573.027,818.461,9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[573.699,823.67,9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[571.225,826.398,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[568.774,826.611,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[565.737,826.183,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[572.398,823.998,9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[583.375,822.136,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[589.002,826.37,9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[586.819,826.724,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[581.187,827.883,-9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[578.12,828.916,-9.53674e-007],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[575.982,829.724,0],[[0.0197823,359.837,0]]],["Land_ClutterCutter_large_F",[574.06,830.296,-9.53674e-007],[[0.0197823,359.837,0]]],["RDT_ural_apoc",[575.733,837.563,0.156975],[[0,0,89.771]]],["land_cytech_graffiti_02_2m2",[570.906,839.49,2.01073],[[0,359.856,0]]],["land_cytech_q3",[574.428,832.131,2.329],[[0,0,0]]],["Weapon_arifle_AKS_F",[571.203,837.073,1.23218],[[0,0,211.601]]],["Weapon_arifle_AKS_F",[571.328,838.269,1.2295],[[0,0,110.003]]],["Weapon_arifle_AKM_F",[571.506,836.556,0.673821],[[293.435,0,270.285]]],["Weapon_arifle_MX_F",[571.175,836.556,0.586292],[[302.017,347.259,276.426]]],["Land_cytech_atm_WoodCrate_01",[573.045,838.455,1.5493],[[0,0,268.916]]],["Land_cytech_atm_WoodCrate_01",[573.051,837.225,1.56919],[[0,0,268.916]]],["Land_cytech_atm_WoodCrate_01",[569.516,838.308,0.190897],[[0,0,268.916]]],["Land_cytech_atm_WoodCrate_01",[569.512,837.192,0.193677],[[0,0,268.916]]],["Land_cytech_atm_WoodCrate_01",[569.51,837.696,1.28305],[[0,0,268.916]]],["Land_cytech_atm_WoodCrate_01",[570.242,838.785,1.27801],[[0,0,268.916]]],["Land_cytech_atm_BunkerFloor_9m",[572.391,836.32,-0.0639868],[[0,0,0]]],["Land_cytech_atm_BunkerFloor_9m",[578.353,836.32,-0.0494928],[[0,0,0]]],["Land_cytech_dt_MetalFloor_combo_04",[580.445,836.749,0.188524],[[0,0,0]]],["Land_cytech_atm_BunkerFloor_9m",[572.391,836.32,-0.0639868],[[0,0,0]]],["Land_cytech_atm_BunkerFloor_9m",[584.331,836.32,-0.039422],[[0,0,0]]],["Land_cytech_dt_MetalFloor_combo_04",[574.455,836.749,0.174626],[[0,0,0]]],["Land_cytech_dt_MetalFloor_combo_04",[580.445,836.749,0.188524],[[0,0,0]]],["Land_cytech_dt_MetalFloor_combo_04",[568.451,836.749,0.160819],[[0,0,0]]],["cytech_rt_Building_09",[577.506,836.327,-0.0599165],[[0,0,0]]],["Land_cytech_atm_WoodCrate_cloth_01",[571.164,837.792,0.196303],[[0,0,0]]],["Land_Garbage_square3_F",[558.744,832.857,-3.8147e-006],[[359.848,359.857,0]]],["Land_Garbage_square5_F",[558.55,832.724,-9.53674e-007],[[359.848,359.819,0]]],["Land_Garbage_line_F",[558.67,832,0],[[359.934,359.857,0]]],["land_cytech_paper_01",[558.046,831.246,0],[[359.857,359.934,0]]],["land_cytech_paper_03",[559.015,832.786,0],[[359.934,359.857,0]]],["Land_Garbage_square3_F",[571.474,835.426,0.207889],[[359.848,359.857,0]]],["Land_Garbage_square5_F",[571.28,835.293,0.208312],[[359.848,359.819,0]]],["Land_Garbage_line_F",[571.4,834.57,0.209561],[[359.934,359.857,0]]],["land_cytech_paper_01",[570.776,833.815,0.210127],[[359.857,359.934,0]]],["land_cytech_paper_03",[571.746,835.355,0.208042],[[359.934,359.857,0]]],["Land_Garbage_square3_F",[573.747,835.368,0.215811],[[0.143279,359.849,269.679]]],["Land_Garbage_square5_F",[573.88,835.174,0.217344],[[0.181995,359.85,269.679]]],["Land_Garbage_line_F",[574.603,835.299,0.216327],[[0.142713,359.936,269.68]]],["land_cytech_paper_01",[575.361,834.679,0.221312],[[0.0663323,359.858,269.68]]],["land_cytech_paper_03",[573.816,835.64,0.213798],[[0.142713,359.936,269.68]]],["Land_Garbage_square3_F",[579.335,835.494,0.228284],[[359.801,0.0614209,60.287]]],["Land_Garbage_square5_F",[579.124,835.597,0.227607],[[359.768,0.0423028,60.287]]],["Land_Garbage_line_F",[578.555,835.134,0.226082],[[359.844,359.986,60.2872]]],["land_cytech_paper_01",[577.59,835.302,0.223639],[[359.873,0.0915103,60.2871]]],["land_cytech_paper_03",[579.408,835.224,0.228757],[[359.844,359.986,60.2872]]],["Land_Garbage_square3_F",[575.769,838.685,0.209732],[[359.848,359.857,0]]],["Land_Garbage_square5_F",[575.575,838.552,0.210159],[[359.848,359.819,0]]],["Land_Garbage_line_F",[575.695,837.828,0.210389],[[359.934,359.857,0]]],["land_cytech_paper_01",[575.071,837.074,0.210845],[[359.857,359.934,0]]],["land_cytech_paper_03",[576.04,838.614,0.209517],[[359.934,359.857,0]]],["Land_cytech_dt_MetalFloor_combo_04",[586.44,836.749,0.189426],[[0,0,0]]],["land_cytech_SM_CartonGarbage04",[591.687,819.071,9.53674e-007],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[579.934,833.441,0.897825],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[581.261,833.46,0.902682],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[579.934,833.441,1.93425],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[581.261,833.46,1.93911],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[581.261,833.46,2.93892],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[579.934,833.441,2.93407],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[579.934,833.441,3.88032],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[581.261,833.46,3.88517],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[575.793,833.441,0.889297],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[575.793,833.441,3.87179],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[577.12,833.46,3.87705],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[575.793,833.441,2.92554],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[577.12,833.46,2.93079],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[575.793,833.441,1.92572],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[577.12,833.46,0.894553],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[577.12,833.46,1.93098],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[572.206,833.46,0.881617],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[570.88,833.441,0.874743],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[570.88,833.441,1.91117],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[572.206,833.46,1.91804],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[572.206,833.46,2.91786],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[570.88,833.441,2.91098],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[570.88,833.441,3.85724],[[0,0,0]]],["Land_cytech_atm_wood_fence_02",[572.206,833.46,3.86411],[[0,0,0]]]];
{ 
	private  _pos = (_x select 1);
	private _type = (_x select 0);
	private _dir =  (_x select 2) select 0;
	systemchat str [_type, _pos,_dir];	
	private	_obj = _type createVehicle [0,0,0];
	if (_type isequalto "RDT_ural_apoc") then {
		_obj animate ["RDT_extra_armour",1];
		_obj animateDoor ['Door_1_source', 1];
	};	
	_obj enableSimulation false;
	_obj allowdamage false;
	_obj setposAtL _pos;
	Cytech_tempfirsttime pushBack _obj;
	
	
	private _setdir = {
		private ["_object","_rotations","_aroundX","_aroundY","_aroundZ","_dirX","_dirY","_dirZ","_upX","_upY","_upZ","_dir","_up","_dirXTemp",
		"_upXTemp"];
		_object = _this select 0; 
		_rotations = _this select 1; 
		_aroundX = _rotations select 0; 
		_aroundY = _rotations select 1; 
		_aroundZ = (360 - (_rotations select 2)) - 360; 
		_dirX = 0; 
		_dirY = 1; 
		_dirZ = 0; 
		_upX = 0; 
		_upY = 0; 
		_upZ = 1; 
		if (_aroundX != 0) then { 
			_dirY = cos _aroundX; 
			_dirZ = sin _aroundX; 
			_upY = -sin _aroundX; 
			_upZ = cos _aroundX; 
		}; 
		if (_aroundY != 0) then { 
			_dirX = _dirZ * sin _aroundY; 
			_dirZ = _dirZ * cos _aroundY; 
			_upX = _upZ * sin _aroundY; 
			_upZ = _upZ * cos _aroundY; 
		}; 
		if (_aroundZ != 0) then { 
			_dirXTemp = _dirX; 
			_dirX = (_dirXTemp* cos _aroundZ) - (_dirY * sin _aroundZ); 
			_dirY = (_dirY * cos _aroundZ) + (_dirXTemp * sin _aroundZ);        
			_upXTemp = _upX; 
			_upX = (_upXTemp * cos _aroundZ) - (_upY * sin _aroundZ); 
			_upY = (_upY * cos _aroundZ) + (_upXTemp * sin _aroundZ); 
		}; 
		_dir = [_dirX,_dirY,_dirZ]; 
		_up = [_upX,_upY,_upZ]; 
		_object setVectorDirAndUp [_dir,_up]; 
	};
	[_obj,_dir] call _setdir;
} foreach (_objectarray); 