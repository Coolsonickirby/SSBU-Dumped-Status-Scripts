
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::ThrowCommand_init(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HitStatus HVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  ulong uVar9;
  ulong uVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x54f934137);
  lib::L2CValue::L2CValue(aLStack112,0x14ea15f043);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  HVar7 = lib::L2CValue::as_hash(aLStack96);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::LinkModule__send_event_nodes_throw_impl
            (this->moduleAccessor,HVar7,HVar8,(bool)(bVar1 & 1),iVar2,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,uVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack144,0x1687ff50b5);
  uVar9 = lib::L2CValue::as_integer(aLStack96);
  uVar10 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar9 = lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_INVINCIBLE);
    HVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_THROW_FLAG_INVINCIBLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::HitModule__set_invincible_frame_global_impl
              (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::JostleModule__set_ignore_owner_id_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

