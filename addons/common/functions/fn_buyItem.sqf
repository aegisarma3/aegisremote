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

_price = HG_WEAPONS_ITEM_LIST lbValue (lbCurSel HG_WEAPONS_ITEM_LIST);
_cash = SALDO;

if(_cash >= _price) then
{
    private "_selectedItem";
    _selectedItem = HG_WEAPONS_ITEM_LIST lbData (lbCurSel HG_WEAPONS_ITEM_LIST);
	if([_selectedItem] call HG_fnc_handleItems) then
	{
	    private["_itemClass","_displayName"];
	    _itemClass = [_selectedItem] call HG_fnc_getConfig;
	    _displayName = getText(configFile >> _itemClass >> _selectedItem >> "displayName");
        [_price, player, "retirada"] remoteExecCall ["aegis_transaction",2];
        //hint format[(localize "STR_HG_ITEM_BOUGHT"),_displayName,[_price] call BIS_fnc_numberText];
        ["Transaction", ["Compra", format["Você comprou um equipamento no valor de $%1.",_price]]] call BIS_fnc_showNotification;
        playSound "cash";
	};
} else {
    //hint format[(localize "STR_HG_NOT_ENOUGH_MONEY"),[_price] call BIS_fnc_numberText,[_cash] call BIS_fnc_numberText];
    ["saldo_insuficiente"] call aegis_notice;
};
