params["_notice_type",["_balance",0]];

switch (toLower(_notice_type)) do {
    case "saldo_insuficiente":  {

      hintC "Seu saldo é insuficiente para esta ação.";
      hintC_arr_EH = findDisplay 57 displayAddEventHandler ["unload", {
        0 = _this spawn {
          _this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
          hintSilent "";
        };
      }];


    };
    case "saldo": {

      hintC format ["Saldo na Conta Corrente: $%1", _balance];
      hintC_arr_EH = findDisplay 57 displayAddEventHandler ["unload", {
      	0 = _this spawn {
      		_this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
      		hintSilent "";
      	};
      }];

    };
    default { "Um tipo de notice deve ser definida na call" call aegis_log; };
};
