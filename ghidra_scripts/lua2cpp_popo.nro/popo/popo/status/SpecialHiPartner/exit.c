
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPopo::status::SpecialHiPartner_exit(L2CFighterPopo *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  LinkAttribute LVar3;
  ulong uVar4;
  Hash40 HVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined8 local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  ulong uStack104;
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_LINK_GET_MODEL_CONSTRAINT_NODE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    app::sv_module_access::link(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    local_60._0_4_ = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    local_60._4_4_ = (float)lib::L2CValue::as_number(aLStack240);
    uVar6 = lib::L2CValue::as_number(aLStack256);
    uStack88 = (ulong)uVar6;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_60,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)local_60);
    lib::L2CValue::L2CValue(aLStack208,local_60._4_4_);
    lib::L2CValue::L2CValue(aLStack192,(float)uStack88);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_e0);
    lib::L2CValue::operator_(aLStack128,aLStack208);
    lib::L2CValue::operator_(aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    fVar7 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar7);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    uVar9 = lib::L2CValue::as_number(aLStack128);
    uVar6 = lib::L2CValue::as_number(aLStack176);
    local_60 = CONCAT44(uVar9,uVar8);
    uStack88 = (ulong)uVar6;
    uVar8 = lib::L2CValue::as_number(aLStack240);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    uVar6 = lib::L2CValue::as_number(aLStack272);
    local_70 = CONCAT44(uVar9,uVar8);
    uStack104 = (ulong)uVar6;
    app::lua_bind::ModelModule__top_joint_global_position_from_joint_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_60,(Vector3f *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)local_70);
    lib::L2CValue::L2CValue(aLStack208,local_70._4_4_);
    lib::L2CValue::L2CValue(aLStack192,(float)uStack104);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_e0);
    lib::L2CValue::operator_(aLStack128,aLStack208);
    lib::L2CValue::operator_(aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    uVar9 = lib::L2CValue::as_number(aLStack128);
    uVar6 = lib::L2CValue::as_number(aLStack176);
    local_e0 = CONCAT44(uVar9,uVar8);
    uStack216 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x23d64b1ec2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_LINK_ATTRIBUTE_ADJUST_PARENT_SHAPE);
    lib::L2CValue::L2CValue(aLStack240,false);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    LVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

