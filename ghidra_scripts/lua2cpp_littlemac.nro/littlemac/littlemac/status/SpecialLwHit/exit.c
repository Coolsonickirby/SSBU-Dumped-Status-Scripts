
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::SpecialLwHit_exit(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack80,_SHIELD_STATUS_NONE);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    SVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ShieldModule__set_status_impl(this->moduleAccessor,iVar3,SVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

