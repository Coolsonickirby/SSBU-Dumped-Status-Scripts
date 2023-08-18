
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialNShoot_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar8 = &this->moduleAccessor;
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,true);
  FUN_710002b420(this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_HOP);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_SUCCESS_SP);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar9);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_HOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  this_00 = &this->globalTable;
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack240,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack272,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      FUN_710002d900(this);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_CONTROL_ENERGY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_REVERT_FALL_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_REVERT_FALL_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_NORMAL_FALL_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack272,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack288,0);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      lib::L2CValue::operator_(aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack288,0);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack240,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xf0);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack288,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar5 & 1) != 0) goto LAB_710002d3a4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002d504;
  }
  lib::L2CValue::_L2CValue(aLStack240);
LAB_710002d3a4:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002d504;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002d504;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002d504:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

