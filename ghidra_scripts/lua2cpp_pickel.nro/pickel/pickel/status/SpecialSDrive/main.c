
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialSDrive_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  LinkAttribute LVar5;
  DamageNoReactionMode DVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack160,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
    lib::L2CValue::L2CValue(aLStack176,false);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    HVar8 = lib::L2CValue::as_hash(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (this->moduleAccessor,iVar3,HVar7,HVar8,uVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
    lib::L2CValue::L2CValue(aLStack144,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    LVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
    lib::L2CValue::L2CValue(aLStack144,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    LVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,LINK_ATTRIBUTE_REFERENCE_PARENT_SHAKE);
    lib::L2CValue::L2CValue(aLStack144,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    LVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,_LINK_ATTRIBUTE_REFERENCE_PARENT_LR);
    lib::L2CValue::L2CValue(aLStack144,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    LVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::LinkModule__get_parent_lr_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar11);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    lib::L2CValue::L2CValue(aLStack128,0x1c8a6ea9fd);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar7);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack144,0xfcb07f1ed);
  lib::L2CValue::L2CValue(aLStack160,0xfcb07f1ed);
  lib::L2CValue::L2CValue(aLStack176,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack112,_DAMAGE_NO_REACTION_MODE_REACTION_VALUE);
  lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack224,0x1cd2a277b6);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  uVar10 = lib::L2CValue::as_integer(aLStack224);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack192,fVar11);
  lib::L2CValue::L2CValue(aLStack240,-1.0);
  lib::L2CValue::L2CValue(aLStack256,-1);
  DVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack192);
  fVar12 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar6,fVar11,fVar12,iVar3);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TEAM_2ND_PICKEL_TROLLEY);
  lib::L2CValue::operator_(aLStack112,aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::TeamModule__set_team_second_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TEAM_2ND_PICKEL_TROLLEY);
  lib::L2CValue::operator_(aLStack112,aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::TeamModule__set_hit_team_second_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack112,SpecialSDrive_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

