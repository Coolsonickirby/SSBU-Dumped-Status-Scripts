
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::LucinaSpecialNEndMax_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  long lVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_71001f71c4;
    }
    iVar3 = 1;
    goto LAB_71001f7928;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71001f71c4:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71001f7200;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_71001f780c;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_71001f7208;
  }
  else {
LAB_71001f7200:
    lib::L2CValue::_L2CValue(aLStack112);
LAB_71001f7208:
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_AIR_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,lVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      fVar9 = (float)app::sv_fighter_util::get_default_fighter_param_air_brake_x
                               (this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
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
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_71001f77f4;
      }
      HVar8 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      fVar9 = (float)app::sv_fighter_util::get_default_fighter_param_ground_brake
                               (this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
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
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        fVar9 = (float)lib::L2CValue::as_number(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
LAB_71001f77f4:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71001f780c:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_71001f7920;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
LAB_71001f7920:
  iVar3 = 0;
LAB_71001f7928:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

