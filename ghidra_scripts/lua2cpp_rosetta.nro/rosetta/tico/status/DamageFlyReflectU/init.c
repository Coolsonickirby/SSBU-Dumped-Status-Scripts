
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::DamageFlyReflectU_init
          (L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100029e10();
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  fVar3 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xa6d37292a);
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_710002b270(this,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,3);
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_CHECK_REFLECT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_DAMAGE_FLY_REFLECT_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::HitModule__set_xlu_frame_global_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_710002b4c0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

