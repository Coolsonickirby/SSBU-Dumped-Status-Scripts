
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLinkSwordbeam::status::Fly_main_loop(L2CWeaponLinkSwordbeam *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_SWORDBEAM_INSTANCE_WORK_ID_FLAG_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_710002eba0;
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_SWORDBEAM_STATUS_KIND_HIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_SWORDBEAM_STATUS_KIND_HIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_SWORDBEAM_STATUS_KIND_VANISH);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710002eba0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

