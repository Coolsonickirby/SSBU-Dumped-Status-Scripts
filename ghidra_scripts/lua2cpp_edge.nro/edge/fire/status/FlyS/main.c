
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponEdgeFire::status::FlyS_main(L2CAgent *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xaeadc3bf8);
  lib::L2CValue::L2CValue(aLStack112,0x6fea8bbb7);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xa1b1b0ad5);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::L2CValue(aLStack144,0xaeadc3bf8);
  lib::L2CValue::L2CValue(aLStack160,0x953d11109);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0xaeadc3bf8);
  lib::L2CValue::L2CValue(aLStack176,0x9707333cd);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0xaeadc3bf8);
  lib::L2CValue::L2CValue(aLStack176,0xd4c7ab711);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CAgent::clear_lua_stack(this);
  lib::L2CAgent::push_lua_stack(this,aLStack160);
  lib::L2CAgent::push_lua_stack(this,aLStack112);
  lib::L2CAgent::push_lua_stack(this,aLStack176);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CAgent::clear_lua_stack(this);
  lib::L2CAgent::push_lua_stack(this,aLStack160);
  lib::L2CAgent::push_lua_stack(this,aLStack128);
  lib::L2CAgent::push_lua_stack(this,aLStack176);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack176,-1.0);
  lib::L2CAgent::clear_lua_stack(this);
  lib::L2CAgent::push_lua_stack(this,aLStack160);
  lib::L2CAgent::push_lua_stack(this,aLStack144);
  lib::L2CAgent::push_lua_stack(this,aLStack176);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,FlyS_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

