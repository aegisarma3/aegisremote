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
	Description - Called by the player when the dialog is closed (with the dialog close button or by pressing escape)
	© All Fucks Reserved
*/

{
    deleteVehicle _x;
} forEach HG_VEHICLE_PREVIEW;

{
    if(_x != player) then
	{
	    _x hideObject false;
	};
} forEach playableUnits;

HG_CAMERA_PREVIEW cameraEffect ["TERMINATE","BACK"];
camDestroy HG_CAMERA_PREVIEW;

HG_VEHICLE_PREVIEW = nil;
HG_CAMERA_PREVIEW = nil;
