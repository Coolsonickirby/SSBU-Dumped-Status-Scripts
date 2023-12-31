
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLinkBoomerang::status::Turn_init(L2CWeaponLinkBoomerang *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [32];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong local_f0;
  ulong uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_f0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack176,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,fVar9);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_f0);
  }
  else {
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_f0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_ANGLE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack192,0xca01cd677);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar3);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WN_LINK_BOOMERANG_TURN_WORK_INT_FOLLOW_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack176,_WN_LINK_BOOMERANG_POSTURE_ROT_NODE_TOPN);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  pfVar7 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar7);
  lib::L2CValue::L2CValue(aLStack224,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack208,pfVar7[2]);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_f0);
  lib::L2CValue::operator_(aLStack160,aLStack224);
  lib::L2CValue::operator_(aLStack96,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack192,0xc522c1ce3);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack192,_WN_LINK_BOOMERANG_POSTURE_ROT_NODE_TOPN);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  lVar11 = lib::L2CValue::as_number(aLStack176);
  uVar10 = lib::L2CValue::as_number(aLStack96);
  local_f0 = uVar5 & 0xffffffff | lVar11 << 0x20;
  uStack232 = (ulong)uVar10;
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_f0,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
  lib::L2CValue::L2CValue(aLStack192,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_TURN_DIST);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_f0);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack256,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLAG_FLICK);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x91d6c0a1b);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_f0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xf071a30b0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_f0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack256,0xf39cee014);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,fVar9);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack288,0xc1fc2c893);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = lib::L2CValue::as_integer(aLStack288);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack256,fVar9);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack288,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack304,0xf39cee014);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0x55dfc36e5);
  uVar5 = lib::L2CValue::as_integer(aLStack304);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack288,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0xf39cee014);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,0x9a3268d3e);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack336);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack304,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::operator_(aLStack272,aLStack304);
  pLVar8 = aLStack288;
  lib::L2CValue::operator_(aLStack352,pLVar8);
  lib::L2CAgent::math_floor((L2CAgent *)auStack336,pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::operator_(aLStack256,aLStack176);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,_WN_LINK_BOOMERANG_TURN_WORK_INT_BACK_ROT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
  iVar4 = lib::L2CValue::as_integer(aLStack352);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_f0);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

