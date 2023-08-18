
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialHi2Landing_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_HI2_LIMIT_BREAK);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x157796fdb6);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator_(aLStack128,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x10e15d421a);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator_(aLStack128,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x13997022d6);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    uVar3 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar6);
    lib::L2CValue::L2CValue(aLStack80,uVar3);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x13997022d6);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack144);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_landing_fall_special_air_fall_special(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

