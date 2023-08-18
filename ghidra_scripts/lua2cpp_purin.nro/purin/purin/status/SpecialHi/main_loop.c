
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialHi_main_loop(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) goto LAB_710001f798;
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710001ec88:
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::_L2CValue(aLStack112);
          goto LAB_710001ecd0;
        }
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
LAB_710001ef14:
        pLVar6 = aLStack112;
        goto LAB_710001f4e8;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710001ecd0;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710001ecd0:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack112,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
        lib::L2CValue::L2CValue(aLStack128,0.0);
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
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__enable_energy_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack128,0xf71f4d4f8);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar9 = lib::L2CValue::as_integer(aLStack128);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack96,fVar11);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack144,0xf3f76a7dc);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_LW_WORK_INT_MOTION_KIND_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack128,lVar7);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar8 = lib::L2CValue::as_hash(aLStack128);
          fVar11 = (float)lib::L2CValue::as_number(aLStack160);
          fVar12 = (float)lib::L2CValue::as_number(aLStack176);
          bVar2 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          pLVar6 = aLStack128;
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_LW_WORK_INT_MOTION_KIND_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack128,lVar7);
          HVar8 = lib::L2CValue::as_hash(aLStack128);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack128);
          pLVar6 = aLStack144;
        }
        lib::L2CValue::_L2CValue(pLVar6);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_LW_WORK_INT_MOTION_KIND_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack96,lVar7);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack96);
          goto LAB_710001ef14;
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_LW_WORK_INT_MOTION_KIND_GROUND);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      }
      pLVar6 = aLStack96;
LAB_710001f4e8:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) goto LAB_710001f5f8;
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
LAB_710001f5f8:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_SONG_EFFECT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_SONG_EFFECT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_ATTACK_WHOLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) goto LAB_710001f798;
    lib::L2CValue::L2CValue(aLStack112,0);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar10,iVar3,false);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) goto LAB_710001f798;
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AttackModule__set_whole_impl(*ppBVar10,iVar3,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_HI_FLAG_ATTACK_WHOLE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_710001f798;
      goto LAB_710001ec88;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar6 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001f798:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

