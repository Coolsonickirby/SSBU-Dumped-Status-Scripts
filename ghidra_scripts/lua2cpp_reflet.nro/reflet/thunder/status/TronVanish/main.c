
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRefletThunder::status::TronVanish_main(L2CWeaponRefletThunder *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  Hash40 HVar3;
  uint uVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  int in_stack_fffffffffffffe94;
  undefined in_stack_fffffffffffffe9c;
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
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack144,0x11a03d6be6);
  lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  lib::L2CValue::L2CValue(aLStack288,false);
  HVar2 = lib::L2CValue::as_hash(aLStack144);
  HVar3 = lib::L2CValue::as_hash(aLStack160);
  uVar6 = lib::L2CValue::as_number(aLStack176);
  lVar7 = lib::L2CValue::as_number(aLStack192);
  uVar4 = lib::L2CValue::as_number(aLStack208);
  local_50 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar4;
  uVar6 = lib::L2CValue::as_number(aLStack224);
  lVar7 = lib::L2CValue::as_number(aLStack240);
  uVar4 = lib::L2CValue::as_number(aLStack256);
  local_60 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack88 = (ulong)uVar4;
  fVar5 = (float)lib::L2CValue::as_number(aLStack272);
  bVar1 = lib::L2CValue::as_bool(aLStack288);
  uVar4 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar2,HVar3,(Vector3f *)&local_50,(Vector3f *)&local_60,
                     fVar5,(bool)(bVar1 & 1),0,0,-1,in_stack_fffffffffffffe94,0,
                     (bool)in_stack_fffffffffffffe9c,false);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,TronVanish_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

