
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::AirFollow_exec(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_OPTION_FLAG_FOLLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_INFO_OPTION_FLAG_UNABLE_PASSABLE_CHECK);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

