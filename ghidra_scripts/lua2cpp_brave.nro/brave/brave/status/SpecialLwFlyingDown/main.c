
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingDown_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  int iVar4;
  float *pfVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
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
  ulong local_70;
  ulong uStack104;
  
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,*pfVar5);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
  FUN_7100004a60(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLOAT_TARGET_POS_X);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  uVar11 = lib::L2CValue::as_number(aLStack192);
  lVar12 = lib::L2CValue::as_number(this_00);
  uVar9 = lib::L2CValue::as_number(this_01);
  local_70 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack104 = (ulong)uVar9;
  app::lua_bind::PostureModule__init_pos_impl(this->moduleAccessor,(Vector3f *)&local_70,true,true);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_HIT_STATUS_OFF);
  HVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack192,0x1e61567377);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0xf369907f1);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,1.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  HVar6 = lib::L2CValue::as_hash(aLStack192);
  fVar8 = (float)lib::L2CValue::as_number(aLStack208);
  fVar10 = (float)lib::L2CValue::as_number(aLStack224);
  bVar1 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack224,0x136a137966);
  uVar11 = lib::L2CValue::as_integer(aLStack208);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar11,uVar7);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::operator_(aLStack192);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,SpecialLwFlyingDown_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}
