#define HG_NO_IDC                     -1

#define HG_WEAPONS_SHOP_IDD	    	  5000
#define HG_WEAPONS_ITEM_LIST_IDC	  5001
#define HG_WEAPONS_ITEM_TEXT_IDC	  5002
#define HG_WEAPONS_ITEM_PICTURE_IDC	  5003
#define HG_WEAPONS_ITEM_PRICE_IDC	  5004
#define HG_WEAPONS_ITEM_SWITCH_IDC	  5005
#define HG_WEAPONS_BUY_IDC			  5006
#define HG_WEAPONS_MC_IDC             5007

#define HG_VEHICLES_SHOP_IDD	      6000
#define HG_VEHICLES_SWITCH_IDC		  6001
#define HG_VEHICLES_LIST_IDC          6002
#define HG_VEHICLES_TEXT_IDC	      6003
#define HG_VEHICLES_SP_IDC            6004
#define HG_VEHICLES_BUY_IDC           6005
#define HG_VEHICLES_MC_IDC            6006

#define HG_WEAPONS_SHOP			  findDisplay HG_WEAPONS_SHOP_IDD
#define HG_WEAPONS_ITEM_LIST	  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_ITEM_LIST_IDC)
#define HG_WEAPONS_ITEM_TEXT	  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_ITEM_TEXT_IDC)
#define HG_WEAPONS_ITEM_PICTURE	  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_ITEM_PICTURE_IDC)
#define HG_WEAPONS_ITEM_PRICE	  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_ITEM_PRICE_IDC)
#define HG_WEAPONS_ITEM_SWITCH	  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_ITEM_SWITCH_IDC)
#define HG_WEAPONS_BUY			  (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_BUY_IDC)
#define HG_WEAPONS_MC             (HG_WEAPONS_SHOP displayCtrl HG_WEAPONS_MC_IDC)

#define HG_VEHICLES_SHOP		  findDisplay HG_VEHICLES_SHOP_IDD
#define HG_VEHICLES_SWITCH	      (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_SWITCH_IDC)
#define HG_VEHICLES_LIST		  (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_LIST_IDC)
#define HG_VEHICLES_TEXT          (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_TEXT_IDC)
#define HG_VEHICLES_SP            (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_SP_IDC)
#define HG_VEHICLES_BUY           (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_BUY_IDC)
#define HG_VEHICLES_MC            (HG_VEHICLES_SHOP displayCtrl HG_VEHICLES_MC_IDC)
/*
    Author - HoverGuy
	Description - Called when selection in listbox has changed
	© All Fucks Reserved
*/
params["_ctrl","_index"];
private["_vehicle","_price","_veh","_light"];

disableSerialization;

_vehicle = _ctrl lbData _index;
_price = _ctrl lbValue _index;

{
    deleteVehicle _x;
} forEach HG_VEHICLE_PREVIEW;

HG_VEHICLES_TEXT ctrlSetStructuredText parseText format
[
    "<br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_SPEED")+ " </t><br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_ARMOR")+ " </t><br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_SEATS")+ " </t><br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_ENGINE")+ " </t><br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_FUEL_MAX")+ " </t><br/>"+
	" <t align='center' size='1'> "+ (localize "STR_HG_DLG_PRICE_TAG")+ " </t>",
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "maxSpeed"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "armor"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "transportSoldier"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "enginePower"),
	getNumber(configFile >> "CfgVehicles" >> _vehicle >> "fuelCapacity"),
	[_price] call BIS_fnc_numberText
];

_veh = _vehicle createVehicleLocal (getPosATL player);
_veh setPos (player modelToWorld [0,8,0.2]);
_veh setDir ([_veh,player] call BIS_fnc_dirTo);
_veh enableSimulation false;

_light = "#lightpoint" createVehicleLocal getPos _veh;
_light setlightbrightness 0.5;
_light setlightcolor [1,1,1];
_light setlightambient [1,1,1];
_light lightAttachObject [_veh,[0,0,2]];

[_veh] spawn HG_fnc_vehicleRotate;

{
    HG_VEHICLE_PREVIEW pushBack _x;
} forEach [_veh,_light];

HG_CAMERA_PREVIEW = "CAMERA" camCreate getPos player;
showCinemaBorder false;
HG_CAMERA_PREVIEW cameraEffect ["Internal","Back"];
HG_CAMERA_PREVIEW camSetTarget (_veh modelToWorld [0,0,0]);
HG_CAMERA_PREVIEW camSetPos (player modelToWorld [0,0,2]);
//HG_CAMERA_PREVIEW camSetFOV .33;
HG_CAMERA_PREVIEW camSetFovRange [0.1,0.7];
HG_CAMERA_PREVIEW camSetFocus [50,0];
HG_CAMERA_PREVIEW camCommit 0;
