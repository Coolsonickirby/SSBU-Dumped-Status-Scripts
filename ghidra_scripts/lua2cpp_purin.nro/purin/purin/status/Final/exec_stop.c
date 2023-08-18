
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::FinalEnd_exec_stop(L2CFighterPurin *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_ATTACK_SCALE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack48,fVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar2,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

