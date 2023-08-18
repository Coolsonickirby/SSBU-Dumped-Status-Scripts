
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialSThrow_check_dmg(L2CFighterLucario *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *in_x1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,in_x1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_THROW_DONE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack64);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  else {
    bVar1 = app::lua_bind::CatchModule__check_damage_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

