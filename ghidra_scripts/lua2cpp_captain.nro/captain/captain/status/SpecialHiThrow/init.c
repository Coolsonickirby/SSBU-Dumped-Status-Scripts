
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialHiThrow_init(L2CFighterCaptain *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,
             _CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION |
             _CONSTRAINT_FLAG_OFFSET_TRANSLATE | CONSTRAINT_FLAG_OFFSET_ROT);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::LinkModule__set_model_constraint_flag_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,180.0);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::LinkModule__set_constraint_rot_offset_y_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x54f934137);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  iVar5 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::LinkModule__send_event_nodes_throw_impl
            (this->moduleAccessor,HVar6,HVar7,(bool)(bVar1 & 1),iVar3,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

