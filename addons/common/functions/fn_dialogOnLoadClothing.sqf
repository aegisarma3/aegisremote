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

#define HG_CLOTHING_SHOP_IDD	    7000
#define HG_CLOTHING_SWITCH_IDC		7001
#define HG_CLOTHING_LIST_IDC        7002
#define HG_CLOTHING_TEXT_IDC	    7003
#define HG_CLOTHING_RESET_IDC       7004
#define HG_CLOTHING_BUY_IDC         7005
#define HG_CLOTHING_MC_IDC          7006


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

#define HG_CLOTHING_SHOP		  findDisplay HG_CLOTHING_SHOP_IDD
#define HG_CLOTHING_SWITCH	      (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_SWITCH_IDC)
#define HG_CLOTHING_LIST		  (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_LIST_IDC)
#define HG_CLOTHING_TEXT          (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_TEXT_IDC)
#define HG_CLOTHING_RESET         (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_RESET_IDC)
#define HG_CLOTHING_BUY           (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_BUY_IDC)
#define HG_CLOTHING_MC            (HG_CLOTHING_SHOP displayCtrl HG_CLOTHING_MC_IDC)
/*
    Author - HoverGuy
	Description - Called by the player to open and feed the dialog with data
	© All Fucks Reserved
*/
params["_target","_caller","_id","_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

disableSerialization;

createDialog "HG_ClothingShopDialog";

private["_shopList","_ind"];

_shopList = "true" configClasses (configFile >> "CfgClientShop" >> "HG_ClothingShopCfg" >> _whatShop);

lbClear HG_CLOTHING_SWITCH;

{
	_ind = HG_CLOTHING_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_CLOTHING_SWITCH lbSetData [_ind,format["%1/%2/%3",_whatShop,(configName _x),(getNumber(_x >> "type"))]];
} forEach _shopList;

HG_CLOTHING_SWITCH lbSetCurSel 0;

/*if(isNil "HG_PLAYER_BOX") then
{
    HG_PLAYER_BOX = "Box_NATO_Wps_F" createVehicleLocal getPos player;
    HG_PLAYER_BOX addAction ["<img image='HG_MSS\UI\crate.paa' size='1.5'/><t color='#FF0000'>Delete Crate</t>",{deleteVehicle (_this select 0); HG_PLAYER_BOX = nil},"",0,false,false,"",'(alive player) && !dialog && player distance _target < 2'];
	HG_PLAYER_BOX addAction ["<img image='HG_MSS\UI\crate.paa' size='1.5'/><t color='#FF0000'>Empty Crate</t>",{clearItemCargo HG_PLAYER_BOX; clearMagazineCargo HG_PLAYER_BOX; clearWeaponCargo HG_PLAYER_BOX; clearBackpackCargo HG_PLAYER_BOX;},"",0,false,false,"",'(alive player) && !dialog && player distance _target < 2'];
};*/

/*HG_PLAYER_BOX setPos [(getPos player select 0)+1,(getPos player select 1),(getPos player select 2)];
HG_PLAYER_BOX setDir (getDir player)+90;*/
clearItemCargo HG_PLAYER_BOX;
clearMagazineCargo HG_PLAYER_BOX;
clearWeaponCargo HG_PLAYER_BOX;
clearBackpackCargo HG_PLAYER_BOX;

HG_PLAYER_PREVIEW = "#lightpoint" createVehicleLocal getPos player;
HG_PLAYER_PREVIEW setlightbrightness 0.5;
HG_PLAYER_PREVIEW setlightcolor [1,1,1];
HG_PLAYER_PREVIEW setlightambient [1,1,1];
HG_PLAYER_PREVIEW lightAttachObject [player,[0,0,2]];

player setBehaviour "SAFE";
player switchMove "AmovPercMstpSnonWnonDnon";

HG_CAMERA_PREVIEW = "CAMERA" camCreate getPos player;
showCinemaBorder false;
HG_CAMERA_PREVIEW cameraEffect ["Internal","Back"];
HG_CAMERA_PREVIEW camSetTarget (player modelToWorld [0,0,1]);
HG_CAMERA_PREVIEW camSetPos (player modelToWorld [1,4,2]);
HG_CAMERA_PREVIEW camSetFOV .33;
HG_CAMERA_PREVIEW camSetFocus [50,0];
HG_CAMERA_PREVIEW camCommit 0;

HG_GEAR_PREVIEW = [[],[],[],[],[]];
HG_GEAR_SAVED = [(goggles player),(headgear player),(vest player),(vestItems player),(uniform player),(uniformItems player),(backpack player),(backpackItems player)];
HG_CLOTHING_BOUGHT = false;

{
    if(_x != player) then
	{
	    _x hideObject true;
	};
} forEach playableUnits;
