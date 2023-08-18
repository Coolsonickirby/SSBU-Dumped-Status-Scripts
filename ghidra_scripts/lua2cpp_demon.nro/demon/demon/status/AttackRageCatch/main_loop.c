
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackRageCatch_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE_FALL);
  FUN_7100023a00(aLStack64,this,aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    FUN_7100028850(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

