civKia = 0;
publicvariable "civKia";

private ["_allCivs"];
while { true } do {
  _allCivs = allUnits - ( playableUnits + switchableUnits );
  {
    if(isNil { _x getVariable "CivilHasEventHandler" } && {side _x == civilian} && {!captive _x}) then {
      _x addMPEventHandler ["MPKilled", {_this call aegis_player_civkiller} ];
      //_x addEventHandler ["Killed", aegis_player_civkiller];
      //_x addEventHandler ["Killed",{hint format ["%1 was killed by %2",name (_this select 0),name (_this select 1)];}]
      _x setVariable ["CivilHasEventHandler", true];
      "Adicionado event handler em um civil" call aegis_log;

      // Aumentar caso de zica de performance
      sleep 1;

    };
  } forEach _allCivs;
};
