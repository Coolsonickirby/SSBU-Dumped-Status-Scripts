
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiiswordsmanWave::status::Fly_init(L2CWeaponMiiswordsmanWave *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = aLStack144;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_ANGLE);
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack80,pLVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_SPEED);
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_cos((L2CAgent *)&stack0xffffffffffffffc0,pLVar2);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::operator_(aLStack112,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CAgent::math_sin((L2CAgent *)&stack0xffffffffffffffc0,pLVar3);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

