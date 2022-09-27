//player additem "ItemMap_SE";
//player additem "ItemMap_SW";
//player additem "ItemMap_NE";
//player additem "ItemMap_NW";

/*
//NW
_NW_marker = createMarker ["NW", [worldSize/4, worldSize/4 * 3,0]];
"NW" setMarkerShape "RECTANGLE";
"NW" setMarkerSize [worldSize/4, worldSize/4];
"NW" setMarkerAlpha 1;
"NW" setMarkerBrush "SolidFull";

//SW
_SW_marker = createMarker ["SW", [worldSize/4, worldSize/4,0]];
"SW" setMarkerShape "RECTANGLE";
"SW" setMarkerSize [worldSize/4, worldSize/4];
"SW" setMarkerAlpha 1;
"SW" setMarkerBrush "SolidFull";

//NE
_NE_marker = createMarker ["NE", [worldSize/4 * 3, worldSize/4 * 3,0]];
"NE" setMarkerShape "RECTANGLE";
"NE" setMarkerSize [worldSize/4, worldSize/4];
"NE" setMarkerAlpha 1;
"NE" setMarkerBrush "SolidFull";

//SE
_SE_marker = createMarker ["SE", [worldSize/4 * 3, worldSize/4 ,0]];
"SE" setMarkerShape "RECTANGLE";
"SE" setMarkerSize [worldSize/4, worldSize/4];
"SE" setMarkerAlpha 1;
"SE" setMarkerBrush "SolidFull";

addMissionEventHandler
[	"Map",
	{	
		params ["_isOpened","_isForced"];
		"NW" setMarkerAlpha 1;
		"SW" setMarkerAlpha 1;
		"NE" setMarkerAlpha 1;
		"SE" setMarkerAlpha 1;
		sleep 1;
		if ("ItemMap_NW" in ((backpackItems player + uniformItems player + vestItems player + assignedItems player))) then {"NW" setMarkerAlpha 0; };
		if ("ItemMap_NE" in ((backpackItems player + uniformItems player + vestItems player + assignedItems player))) then {"NE" setMarkerAlpha 0; };
		if ("ItemMap_SW" in ((backpackItems player + uniformItems player + vestItems player + assignedItems player))) then {"SW" setMarkerAlpha 0; };
		if ("ItemMap_SE" in ((backpackItems player + uniformItems player + vestItems player + assignedItems player))) then {"SE" setMarkerAlpha 0; };
	}
];
*/