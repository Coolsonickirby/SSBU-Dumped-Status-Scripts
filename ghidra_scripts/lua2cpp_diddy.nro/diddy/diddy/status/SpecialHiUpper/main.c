
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiUpper_main(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x1ab4b1f753);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_INT_SITUATION);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x22ceb8bd03);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_VALUE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack224,0x1ebc88152e);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::operator_(aLStack160,aLStack192);
  lib::L2CValue::operator_(aLStack112,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0x2610129855);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::operator_(aLStack112,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_UPPER_START_ANGLE);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack144,pLVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar7 = (L2CValue *)0x1fbdb2615;
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack96,pLVar7);
  lib::L2CValue::operator_(aLStack224,aLStack112);
  pLVar7 = aLStack128;
  lib::L2CValue::operator_(aLStack208,pLVar7);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack96,pLVar7);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::operator_(pLVar5,aLStack192);
  lib::L2CValue::operator_(this_00,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_UPPER_START_ANGLE);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_UPPER_ANGLE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack192);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack208,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack240,0xba18057d9);
  lib::L2CValue::L2CValue(aLStack256,0);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::operator_(aLStack224);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0x12ec5626fe);
  lib::L2CValue::L2CValue(aLStack240,0);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0xbcd2c83a6);
  lib::L2CValue::L2CValue(aLStack240,0);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack240,0x1183ff9f6a);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_AIR);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack224,0x12ec5626fe);
  lib::L2CValue::L2CValue(aLStack240,0);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack240,0x1183ff9f6a);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  FUN_710000ba40(aLStack192,this);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack192);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack288,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
  lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack96,0x13e5efd33f);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack304,&DAT_710001ff50);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack304);
  return;
}

