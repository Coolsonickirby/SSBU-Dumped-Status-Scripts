
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSWall_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
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
  
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (this,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack96,ENERGY_STOP_RESET_TYPE_GROUND);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xee7065b0b);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar4);
  lib::L2CValue::operator_(aLStack192);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack96,ENERGY_STOP_RESET_TYPE_AIR);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xe90016b9d);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xeb5f1f994);
  lib::L2CValue::L2CValue(aLStack112,0x12f7a30c5b);
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,SpecialSWall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

