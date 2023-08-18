
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ThrowFLw_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack96,0x9c72950bb);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x9c04494a2);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xa249b58ab);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x122daa1b33);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x12b3c9e354);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x114026e3a9);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x11474b27b0);
    lib::L2CValue::operator_(aLStack128,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xe9b37bc21);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  HVar8 = lib::L2CValue::as_hash(aLStack96);
  HVar9 = lib::L2CValue::as_hash(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::LinkModule__send_event_nodes_throw_impl
            (this->moduleAccessor,HVar8,HVar9,(bool)(bVar1 & 1),iVar2,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar5);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

