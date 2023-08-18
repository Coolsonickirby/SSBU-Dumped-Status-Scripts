
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialHiFinish_main_loop(L2CFighterElight *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x11a8c91fc5);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar5 = lib::L2CValue::operator_(aLStack96,pLVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack128,0x1b256511b8);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
        fVar7 = (float)lib::L2CValue::as_number(aLStack128);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack112);
        return;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_ENABLE_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_ENABLE_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x12d64f2ef4);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack144,0x1298cd5dd0);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::set_accel_x_mul(this->luaStateAgent);
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
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_CHECK_DIVE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_dive(this);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_DIVE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack96,fVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x189c3ee7d5);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_ACCEL_MUL);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x1c00040bf9);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x19dca96e70);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_SPREADBULLET);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack144,0x197fffe8d9);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      fVar7 = (float)lib::L2CValue::as_number(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

