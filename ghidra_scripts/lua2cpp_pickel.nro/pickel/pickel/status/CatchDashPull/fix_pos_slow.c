
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::CatchDashPull_fix_pos_slow(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_CATCH_PULL_FLAG_INIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    FUN_7100008d80(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

