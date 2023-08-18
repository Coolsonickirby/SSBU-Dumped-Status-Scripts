
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::SpecialSReturn_main_loop(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  HitStatus HVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) goto LAB_7100025ed8;
    lib::L2CValue::L2CValue(aLStack96,0x4dba80bb2);
    lib::L2CValue::L2CValue(aLStack112,0x92a14bcad);
    lVar9 = lib::L2CValue::as_integer(aLStack96);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar9,lVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x5cfdd826f);
    lib::L2CValue::L2CValue(aLStack112,0xca97b4300);
    lVar9 = lib::L2CValue::as_integer(aLStack96);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar9,lVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x148534aa3f);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar11,-1.0,1.0,0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ItemModule__set_have_item_visibility_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue(aLStack112,_ATTACH_ITEM_GROUP_ALL);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ItemModule__set_attach_item_visibility_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),uVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x4dba80bb2);
    lib::L2CValue::L2CValue(aLStack112,0xa6c3406a7);
    lVar9 = lib::L2CValue::as_integer(aLStack96);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar9,lVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x51a36341b);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x4a7f3f69c);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x90fa00879);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x9f5af351a);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x49bf3f6be);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x461fccbdd);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x48a1f731c);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x470104e7f);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x51ba4b748);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x6f478230c);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xbdd8b0afc);
    lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
    HVar11 = lib::L2CValue::as_hash(aLStack96);
    HVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar11,HVar6,0);
LAB_71000266a0:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
LAB_7100025ed8:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x4dba80bb2);
        lib::L2CValue::L2CValue(aLStack112,0xbb499cbe2);
        lVar9 = lib::L2CValue::as_integer(aLStack96);
        lVar10 = lib::L2CValue::as_integer(aLStack112);
        ppBVar12 = &this->moduleAccessor;
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar12,lVar9,lVar10);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x5cfdd826f);
        lib::L2CValue::L2CValue(aLStack112,0xab7b4831a);
        lVar9 = lib::L2CValue::as_integer(aLStack96);
        lVar10 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar12,lVar9,lVar10);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x100481257f);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        fVar13 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue(aLStack96,fVar13);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack112,_ENERGY_STOP_RESET_TYPE_RUN_BRAKE);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__enable_energy_impl(*ppBVar12,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar12,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar12,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,true);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ItemModule__set_have_item_visibility_impl(*ppBVar12,(bool)(bVar1 & 1),0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::L2CValue(aLStack112,_ATTACH_ITEM_GROUP_ALL);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        uVar2 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ItemModule__set_attach_item_visibility_impl
                  (*ppBVar12,(bool)(bVar1 & 1),uVar2);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x4dba80bb2);
        lib::L2CValue::L2CValue(aLStack112,0xbb499cbe2);
        lVar9 = lib::L2CValue::as_integer(aLStack96);
        lVar10 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar12,lVar9,lVar10);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x51a36341b);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x4a7f3f69c);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x90fa00879);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x9f5af351a);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x49bf3f6be);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x461fccbdd);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x48a1f731c);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x470104e7f);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x51ba4b748);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x6f478230c);
        lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0xbdd8b0afc);
        lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        HVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::HitModule__set_status_joint_impl(*ppBVar12,HVar11,HVar6,0);
        goto LAB_71000266a0;
      }
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100026990;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_air_check_dive(this);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar3 & 1U) == 0) {
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710002693c:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100026990;
    }
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_7100026744;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) goto LAB_710002693c;
  }
  else {
LAB_7100026744:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar7 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar7 = aLStack224;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_7100026990:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

