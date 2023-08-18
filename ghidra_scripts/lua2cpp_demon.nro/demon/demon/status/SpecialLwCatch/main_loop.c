
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialLwCatch_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_SPECIAL_LW_FALL);
  FUN_7100023a00(aLStack48,this,aLStack64);
  lib::L2CValue::operator_cast_to_bool(aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

