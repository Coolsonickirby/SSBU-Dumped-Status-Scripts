
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialLwCatch_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,0);
  FUN_7100023d50(return_value,this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

