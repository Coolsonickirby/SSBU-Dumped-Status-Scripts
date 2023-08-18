
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntGunman::status::Dead_init(L2CWeaponDuckhuntGunman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_X);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack112,0x1741a22c2b);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack128,0x177daf1372);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar4 = lib::L2CValue::operator__(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,aLStack80);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(aLStack96);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,aLStack80);
    lib::L2CValue::L2CValue(aLStack144,aLStack96);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack208,0x17a6bac9c4);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::operator_(aLStack176,aLStack192);
  lib::L2CValue::L2CValue(aLStack224,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack240,0x1287963275);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  lib::L2CValue::operator_(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(aLStack208,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_NORMAL);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_NORMAL);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

