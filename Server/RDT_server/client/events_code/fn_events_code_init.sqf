RDT_fnc_spawnflare = {
	params ["_flare"];
	if !(typeof _flare isEqualTo "B_Parachute_02_F") exitwith {};
	_color_flare = [0.1,0.15,0.7];
	_flare_light = "#lightpoint" createVehicle getPosATL _flare;  
	_flare_light setLightAmbient [0.1,0.15,0.7];  
	_flare_light setLightColor [0.1,0.15,0.7];
	_flare_light setLightIntensity 10;
	_flare_light setLightUseFlare true;
	_flare_light setLightFlareSize 10;
	_flare_light setLightFlareMaxDistance 2000;
	_flare_light setLightAttenuation [40, 1, 100,  0, 40, 39]; 
	_flare_light setLightDayLight true;
	_inter_flare = 0;
	while {!isNull _flare} do {
		_int_mic = 0.05 + random 0.01;
		sleep _int_mic;
		_flare_brig = 400 +random 10;
		_flare_light setLightIntensity _flare_brig;
		_inter_flare = _inter_flare + _int_mic;
		_flare_light setpos (getPosATL _flare);
	};
};

