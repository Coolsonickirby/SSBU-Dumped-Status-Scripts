
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDaisyKinopiospore::status::Shot_exec
          (L2CWeaponDaisyKinopiospore *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined8 uVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0x122f88d516);
  lib::L2CValue::L2CValue(aLStack64,0x9a1e48cd3);
  uVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  uVar6 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack64,aLStack144);
  lib::L2CValue::L2CValue(aLStack80,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar3);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

