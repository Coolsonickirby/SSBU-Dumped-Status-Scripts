
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow1::status::Vanish_exec(L2CWeaponMasterArrow1 *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Weapon *pWVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar1 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  app::WeaponSpecializer_MasterArrow1::update_fly_posture(pWVar1);
  lib::L2CValue::L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  uVar5 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::operator_(aLStack64,aLStack112);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xc1ab58644);
  lib::L2CValue::L2CValue(aLStack144,0x13631a3dfd);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack64,aLStack112);
  lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

