
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelTrolley::status::Start_main_loop(L2CWeaponPickelTrolley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar4 = (float)app::lua_bind::LinkModule__get_parent_scale_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar4);
      fVar4 = (float)lib::L2CValue::as_number(aLStack64);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar4,false);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    FUN_71000af080(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CWeaponCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,false);
    FUN_71000afb10(this,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

