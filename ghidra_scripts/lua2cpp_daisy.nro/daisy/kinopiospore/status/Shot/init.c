
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDaisyKinopiospore::status::Shot_init
          (L2CWeaponDaisyKinopiospore *this,L2CValue *return_value)

{
  Hash40 HVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack320,0x66933a7e6);
  HVar1 = lib::L2CValue::as_hash(aLStack320);
  fVar5 = (float)app::sv_math::randf(HVar1,1.0);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x122f88d516);
  lib::L2CValue::L2CValue(aLStack144,0x9a3268d3e);
  uVar2 = lib::L2CValue::as_integer(aLStack320);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x122f88d516);
  lib::L2CValue::L2CValue(aLStack160,0x99f2bb267);
  uVar2 = lib::L2CValue::as_integer(aLStack320);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::operator_(aLStack320,aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::operator_(aLStack128,aLStack160);
  lib::L2CValue::L2CValue(aLStack320,0x66933a7e6);
  HVar1 = lib::L2CValue::as_hash(aLStack320);
  fVar5 = (float)app::sv_math::randf(HVar1,1.0);
  lib::L2CValue::L2CValue(aLStack192,fVar5);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x122f88d516);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0xdde5bfbad);
  uVar2 = lib::L2CValue::as_integer(aLStack320);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,2);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::operator_(aLStack240,aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::operator_((L2CValue *)auStack224,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar5);
  lib::L2CValue::L2CValue(aLStack320,1.0);
  lib::L2CValue::operator_(aLStack320,aLStack272);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  pLVar4 = aLStack256;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  fVar5 = (float)lib::L2CValue::as_number(this_01);
  fVar6 = (float)lib::L2CValue::as_number(this_02);
  fVar7 = (float)lib::L2CValue::as_number(aLStack272);
  uVar8 = app::sv_math::vec2_rot(fVar5,fVar6,fVar7);
  lib::L2CValue::L2CValue(aLStack320,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::operator_(pLVar4,aLStack320);
  lib::L2CValue::operator_(this_00,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack176);
  lib::L2CValue::L2CValue(aLStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

