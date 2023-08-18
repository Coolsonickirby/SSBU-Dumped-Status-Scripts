
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioLucariom::status::FinalEnd_exec
          (L2CWeaponLucarioLucariom *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_CURRENT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,aLStack64);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_REVERT_DELTA);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::operator_(aLStack64,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_CURRENT_ANGLE);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
  lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

