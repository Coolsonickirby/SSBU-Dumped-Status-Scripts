
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000e900(L2CFighterLink *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_TOONLINK_HOOKSHOT_STATUS_KIND_REWIND);
  lua2cpp::L2CFighterCommon::sub_air_lasso_failure_uniq(this,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

