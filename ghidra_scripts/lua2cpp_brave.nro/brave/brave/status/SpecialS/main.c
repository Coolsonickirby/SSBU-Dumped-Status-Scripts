
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBrave::status::SpecialS_main(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_DECIDE_SPARK_RIGHT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_DECIDE_SPARK_LEFT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_HOLD_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,99);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_STORE_TARGET_PRIORITY_RIGHT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,99);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_STORE_TARGET_PRIORITY_LEFT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = app::lua_bind::TeamModule__team_no_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_TEAM_NO);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_OWNER);
  iVar1 = lib::L2CValue::as_integer(pLVar3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xf3c6351ed);
  lib::L2CValue::L2CValue(aLStack112,0x1337fadc39);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack224);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0x15be2ab29a);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack224,fVar6);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack272,0x15a951a6d9);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar6);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::operator_(aLStack80,aLStack224);
    lib::L2CValue::operator_(aLStack80,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::operator_(aLStack208,aLStack240);
    lib::L2CValue::operator_(aLStack208,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack256);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack272,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack272,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack240,0x11a028e49b);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::operator_(aLStack80,aLStack208);
    lib::L2CValue::operator_(aLStack80,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack240,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

