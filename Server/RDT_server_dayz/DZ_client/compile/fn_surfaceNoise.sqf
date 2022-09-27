private["_unit","_pos","_type","_typeA","_soundType","_soundVal","_array","_test"]; 
_unit = _this; 
_pos = getPosATL _unit; 
 
_suface = surfaceType (_pos);  
_soundType = (_suface splitString "#") select 0;  
 
_stance = stance _unit; 
if (_stance isEqualTo "STAND" || _stance isEqualTo "UNDEFINED") then { 
 _soundVal = 50; 
}; 
if (_stance isEqualTo "CROUCH") then { 
 _soundVal = 50; 
}; 
if (_stance isEqualTo "PRONE") then { 
 _soundVal = 10; 
}; 
_array = [_soundType,_soundVal]; 
_array 
