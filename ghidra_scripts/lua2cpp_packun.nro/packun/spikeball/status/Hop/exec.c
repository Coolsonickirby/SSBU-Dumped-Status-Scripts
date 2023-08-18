
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPackunSpikeball::status::Hop_exec(L2CWeaponPackunSpikeball *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  void **local_50;
  lua_State *plStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf679aaf13);
  lib::L2CValue::L2CValue(aLStack112,0xf476f5c78);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pLVar5 = aLStack128;
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CAgent::math_abs((L2CAgent *)&local_50,pLVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_PACKUN_SPIKEBALL_STATUS_HOP_WORK_FLOAT_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x168);
  uVar2 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x168);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack160,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar4 = lib::L2CValue::as_hash(aLStack160);
  uVar2 = lib::L2CValue::as_number(aLStack144);
  lVar8 = lib::L2CValue::as_number(aLStack176);
  uVar7 = lib::L2CValue::as_number(aLStack192);
  local_50 = (void **)(uVar2 & 0xffffffff | lVar8 << 0x20);
  plStack72 = (lua_State *)(ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar4,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_PACKUN_SPIKEBALL_STATUS_HOP_WORK_FLOAT_DEGREE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack160);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

