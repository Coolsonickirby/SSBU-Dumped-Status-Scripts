
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanBigpacman::status::Move_end(L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  uVar4 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar4);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar4 >> 0x20));
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  fVar2 = (float)app::sv_math::vec2_length(fVar2,fVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar2);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_SPEED);
  fVar2 = (float)lib::L2CValue::as_number(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

