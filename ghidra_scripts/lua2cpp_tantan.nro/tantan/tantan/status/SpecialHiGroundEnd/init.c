
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiGroundEnd_init(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  float fVar2;
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_ANGLE_RAD);
  pLVar1 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,90.0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack144,pLVar1);
  lib::L2CValue::operator_(aLStack64,(L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  app::sv_kinetic_energy::set_angle(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

