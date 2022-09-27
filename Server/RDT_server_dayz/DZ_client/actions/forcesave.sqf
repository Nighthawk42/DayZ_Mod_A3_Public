private["_object"];

//["dayzUpdateVehicle",[_this select 3,"all"]] call callRpcProcedure;
[_this select 3,"all"] remoteexec ["server_updateObject",2];
