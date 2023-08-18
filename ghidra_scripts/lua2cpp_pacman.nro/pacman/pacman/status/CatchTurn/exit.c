
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::CatchTurn_exit(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar4,true,true);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

