
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntClay::status::Ready_main_loop(L2CWeaponDuckhuntClay *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 uStack64;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CLAY_LINK_NO);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_FLY);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::operator_(aLStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) == 0) goto LAB_7100024384;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,-5);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_RELEASE_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_RELEASE_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar4);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_RELEASE_POS_Z);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar4);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_DUCKHUNT_CLAY_LINK_NO);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack96);
    uStack64 = CONCAT44(uVar6,uVar5);
    uStack56 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&uStack64);
  }
  uVar5 = lib::L2CValue::as_number(aLStack176);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  uStack64 = CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&uStack64,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_DUCKHUNT_CLAY_STATUS_KIND_FLY);
  lib::L2CValue::L2CValue(aLStack192,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
LAB_7100024384:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

