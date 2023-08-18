
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiThrow_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack128,0x108cd60ace);
  lib::L2CValue::L2CValue(aLStack144,0x140d63858e);
  FUN_7100008540(this,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack176,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,uVar3);
  lib::L2CValue::L2CValue(aLStack96,0x50000000);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x54f934137);
    lib::L2CValue::L2CValue(aLStack160,0x166f285bd6);
    lib::L2CValue::L2CValue(aLStack176,true);
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
    lib::L2CValue::L2CValue(aLStack224,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    HVar8 = lib::L2CValue::as_hash(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    iVar5 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::LinkModule__send_event_nodes_throw_impl
              (this->moduleAccessor,HVar7,HVar8,(bool)(bVar1 & 1),iVar2,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack160,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,SpecialHiThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

