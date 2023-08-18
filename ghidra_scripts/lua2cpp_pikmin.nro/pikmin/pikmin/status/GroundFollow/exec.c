
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::GroundFollow_exec(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_AUTONOMY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
    pLVar6 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_OPTION_FLAG_FOLLOW);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_INFO_OPTION_FLAG_CLIFF_STOP_CORRECT);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_AIR);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      pLVar6 = aLStack96;
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND);
        GVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
        lib::L2CValue::_L2CValue(aLStack64);
        pLVar6 = aLStack96;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
      pLVar6 = aLStack64;
    }
    lib::L2CValue::_L2CValue(pLVar6);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

