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
	Description - Called when you click "Buy" button in dialog
	© All Fucks Reserved
*/
private["_price","_cash"];

disableSerialization;

_price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);
_cash = SALDO;

if(_cash >= _price) then
{
    private["_spawnPoint","_spawnBusy"];
    _spawnPoint = HG_VEHICLES_SP lbData (lbCurSel HG_VEHICLES_SP);
	_spawnBusy = nearestObjects [(getMarkerPos _spawnPoint),["Car","Air","Tank"],3];
	_spawnBusy = _spawnBusy - [HG_VEHICLE_PREVIEW];
	if((count _spawnBusy) > 0) then
	{
	    titleText [(localize "STR_HG_SPAWN_BUSY"),"PLAIN DOWN",1];
	} else {
	    private["_vehicle","_displayName"];
		_vehicle = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
	    _displayName = getText(configFile >> "CfgVehicles" >> _vehicle >> "displayName");
	    _vehicle = _vehicle createVehicle (getMarkerPos _spawnPoint);
		_vehicle setDir (markerDir _spawnPoint);
    [_price, player, "retirada"] remoteExecCall ["aegis_transaction",2];
		closeDialog 0;
    ["Transaction", ["Compra", format["Você comprou um veículo no valor de $%1.",_price]]] call BIS_fnc_showNotification;
    playSound "cash";
    //hint format[(localize "STR_HG_VEHICLE_BOUGHT"),_displayName,[_price] call BIS_fnc_numberText];
	};
} else {
    //titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),[_price] call BIS_fnc_numberText,[_cash] call BIS_fnc_numberText],"PLAIN DOWN",1];
    ["saldo_insuficiente"] call aegis_notice;
};
