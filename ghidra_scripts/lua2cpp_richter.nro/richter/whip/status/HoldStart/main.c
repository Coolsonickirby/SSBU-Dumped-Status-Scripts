
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterWhip::status::HoldStart_main(L2CWeaponRichterWhip *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack96,0x10abe75caf);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack112,0xc6e1b9cc3);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack128,0xe81be1d33);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_GRAVITY);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_AIR_RESISTANCE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack144,0x118a9f675b);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PhysicsModule__set_2nd_restitution_range_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::PhysicsModule__set_2nd_restitution_rate_impl(this->moduleAccessor,fVar4,fVar5);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::PhysicsModule__set_2nd_gravity_impl(this->moduleAccessor,fVar4);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::PhysicsModule__set_2nd_air_resistance_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::L2CValue(aLStack128,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack144,0x101d4f113c);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PhysicsModule__set_2nd_water_resistance_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710002d3b0(this);
  lib::L2CValue::L2CValue(aLStack64,HoldStart_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

