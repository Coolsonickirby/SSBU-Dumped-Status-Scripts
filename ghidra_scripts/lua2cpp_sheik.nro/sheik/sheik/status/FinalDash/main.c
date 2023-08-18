
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::FinalDash_main(L2CFighterSheik *this,L2CValue *return_value)

{
  int *piVar1;
  byte bVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xa584c4b41);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar2 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar2 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0xadec47ea3);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  piVar1 = (int *)&ENERGY_STOP_RESET_TYPE_GROUND;
  if ((uVar4 & 1) == 0) {
    piVar1 = &ENERGY_STOP_RESET_TYPE_AIR;
  }
  lib::L2CValue::L2CValue(aLStack112,*piVar1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalDash_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

