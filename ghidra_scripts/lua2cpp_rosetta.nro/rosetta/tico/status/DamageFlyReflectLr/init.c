
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::DamageFlyReflectLr_init
          (L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100029e10();
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  fVar4 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  fVar4 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_RIGHT);
  uVar3 = lib::L2CValue::operator__(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xa6d37292a);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_710002b270(this,aLStack64,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xa6d37292a);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_710002b270(this,aLStack64,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
    fVar4 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar4);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue(aLStack144,3);
  lib::L2CValue::L2CValue
            (aLStack160,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_CHECK_REFLECT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0xf);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::HitModule__set_xlu_frame_global_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_710002b4c0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

