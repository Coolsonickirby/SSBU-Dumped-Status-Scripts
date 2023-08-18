
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DemonSpecialNAirShoot_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  void *pvVar9;
  FighterKineticEnergyController *pFVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_71001174bc:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_SPECIAL_N_INT_AIR_FRAME);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar5);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0x14b2c1c21e);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      uVar6 = lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
          goto LAB_7100117bb8;
        }
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar4 & 1U) == 0) goto LAB_7100117bc8;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack80,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar5)
      ;
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack96,0x216611cef6);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      uVar8 = lib::L2CValue::as_integer(aLStack96);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack80,fVar11);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x1220fc2660);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack80,aLStack96);
        lib::L2CValue::operator_(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0xf71f4d4f8);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack144,pvVar9);
      lib::L2CValue::_L2CValue(aLStack64);
      pFVar10 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack144);
      fVar11 = (float)app::lua_bind::FighterKineticEnergyController__get_accel_x_mul_impl(pFVar10);
      lib::L2CValue::L2CValue(aLStack160,fVar11);
      pFVar10 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack144);
      fVar11 = (float)app::lua_bind::FighterKineticEnergyController__get_accel_x_add_impl(pFVar10);
      lib::L2CValue::L2CValue(aLStack176,fVar11);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack160,aLStack128);
        lib::L2CValue::operator_(aLStack160,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = aLStack96;
      goto LAB_7100117b84;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
LAB_7100117bb8:
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_7100117bc8;
      goto LAB_71001174bc;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = aLStack112;
LAB_7100117b84:
    lib::L2CValue::_L2CValue(pLVar7);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100117bc8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

