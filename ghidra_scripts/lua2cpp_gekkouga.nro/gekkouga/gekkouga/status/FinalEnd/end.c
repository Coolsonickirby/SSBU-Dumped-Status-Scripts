
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::FinalEnd_end(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  FUN_710001ff50(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

