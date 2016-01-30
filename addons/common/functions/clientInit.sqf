private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);

    missionNamespace setVariable [_function, _code];
}
forEach
[
  ['aegis_notice', 'aegisremote\addons\common\functions\aegis_notice.sqf'],
  ['aegis_respawn_manager', 'aegisremote\addons\common\functions\aegis_respawn_manager.sqf']
];

true
