
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwCatch_init(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_HOLD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_ABSORBER_GROUP_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack80,_SHIELD_STATUS_NORMAL);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    SVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::AbsorberModule__set_status_impl(this->moduleAccessor,iVar3,SVar4,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_REFLECTOR_KIND_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack80,_SHIELD_STATUS_NORMAL);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_REFLECTOR_GROUP_SPECIAL_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    SVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ReflectorModule__set_status_impl(this->moduleAccessor,iVar3,SVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

