
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::Spin_main(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x35dbfe258);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar6 = lib::L2CValue::as_hash(aLStack272);
  uVar11 = lib::L2CValue::as_number(this_00);
  lVar12 = lib::L2CValue::as_number(this_01);
  uVar8 = lib::L2CValue::as_number(this_02);
  local_90 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar8;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_100);
  lib::L2CValue::operator_(pLVar4,aLStack240);
  lib::L2CValue::operator_(pLVar5,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar11 = lib::L2CValue::as_number(pLVar3);
  lVar12 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(pLVar5);
  local_100 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack248 = (ulong)uVar8;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0x4120a248f);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  lib::L2CValue::L2CValue(aLStack288,false);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_100);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  fVar10 = (float)lib::L2CValue::as_number(aLStack272);
  bVar1 = lib::L2CValue::as_bool(aLStack288);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack272,0x16c39da61a);
  uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar11,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar9);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack272,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack288,0x16b49a968c);
  uVar11 = lib::L2CValue::as_integer(aLStack272);
  uVar7 = lib::L2CValue::as_integer(aLStack288);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar11,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar9);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack288,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack304,0x1640cacf46);
  uVar11 = lib::L2CValue::as_integer(aLStack288);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar11,uVar7);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack336,fVar9);
  lib::L2CValue::operator_(aLStack336);
  lib::L2CValue::operator_((L2CValue *)&local_100,aLStack320);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::operator_(aLStack272);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            (aLStack304,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_PARTICULAR_GRAVITY_LIMIT_SPEED)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack288,fVar9);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,_WEAPON_PIKMIN_PIKMIN_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,Spin_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

