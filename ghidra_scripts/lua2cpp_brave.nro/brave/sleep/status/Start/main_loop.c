
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveSleep::status::Start_main_loop(L2CWeaponBraveSleep *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_BRAVE_SLEEP_INSTANCE_WORK_ID_FLAG_TOUCH_GROUND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_GROUND_CORRECT_KIND_NONE);
      GVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_RESET);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_BRAVE_SLEEP_INSTANCE_WORK_ID_FLAG_TOUCH_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

