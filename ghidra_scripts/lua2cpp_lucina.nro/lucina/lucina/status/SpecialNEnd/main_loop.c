
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::SpecialNEnd_main_loop(L2CFighterLucina *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  long lVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
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
  
  ppBVar11 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100018c08;
    }
    iVar4 = 1;
    goto LAB_7100019608;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100018c08:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_7100018c44;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_7100019250;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_7100018c4c;
  }
  else {
LAB_7100018c44:
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100018c4c:
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack128,lVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_AIR_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack144,lVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      fVar12 = (float)app::sv_fighter_util::get_default_fighter_param_air_brake_x
                                (this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar9 = lib::L2CValue::as_hash(aLStack144);
        fVar12 = (float)lib::L2CValue::as_number(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar9,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar4);
        goto LAB_7100019238;
      }
      HVar9 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      fVar12 = (float)app::sv_fighter_util::get_default_fighter_param_ground_brake
                                (this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar9 = lib::L2CValue::as_hash(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar9,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar4);
LAB_7100019238:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        HVar9 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100019250:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
LAB_7100019364:
    iVar4 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_KIND_SPECIAL_N_END_MAX);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_CHARGE_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0x10778517a8);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar10 = lib::L2CValue::as_integer(aLStack160);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack208,0xbb92bf67e);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar10 = lib::L2CValue::as_integer(aLStack208);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
      lib::L2CValue::L2CValue(aLStack176,fVar12);
      lib::L2CValue::operator_(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0x1451ec44f6);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar10 = lib::L2CValue::as_integer(aLStack176);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
      lib::L2CValue::L2CValue(aLStack160,fVar12);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::operator_(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack144,aLStack224);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::operator_(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      fVar12 = (float)lib::L2CValue::as_number(aLStack192);
      app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar11,fVar12);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar7 = -0x60;
      goto LAB_71000195fc;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100019364;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lVar7 = -0x50;
LAB_71000195fc:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar7));
  }
  iVar4 = 0;
LAB_7100019608:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

