
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingMegaphonelaser::status::Fire_exec
          (L2CWeaponInklingMegaphonelaser *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xa9bfc9f8e);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) goto LAB_7100039304;
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_FLAG_CHANGE_DEGREE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,
               _WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_FLOAT_SHOOT_DEGREE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14ff10e5d5);
    lib::L2CValue::L2CValue(aLStack144,0x158ca4e3c7);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,60.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14ff10e5d5);
    lib::L2CValue::L2CValue(aLStack176,0xd2c3af022);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14ff10e5d5);
    lib::L2CValue::L2CValue(aLStack192,0xf8497c38f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_(aLStack112,aLStack144);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
        goto LAB_710003904c;
      }
    }
    else {
      lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
LAB_710003904c:
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    lib::L2CValue::operator_(aLStack176);
    lib::L2CValue::L2CValue(aLStack224,aLStack160);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,
               _WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_FLOAT_SHOOT_DEGREE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack240);
    lVar9 = lib::L2CValue::as_number(aLStack256);
    uVar8 = lib::L2CValue::as_number(aLStack272);
    local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
    uStack72 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_INT_FIRE_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_INT_FIRE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x14ff10e5d5);
  lib::L2CValue::L2CValue(aLStack128,0xbd243b832);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INKLING_MEGAPHONELASER_STATUS_KIND_FINISH);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_7100039304:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

