
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyBullet::status::Fly_init(L2CWeaponBuddyBullet *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack160 + 0x10));
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar1);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
  uVar2 = lib::L2CValue::operator__((L2CValue *)auStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0xce2c373c3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0xc5004ec8c);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0xc5fa35773);
    pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack192);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,(ulong)pLVar4,uVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::operator_(aLStack80,aLStack208);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,fVar5);
    lib::L2CValue::operator_(aLStack192,aLStack224);
    pLVar4 = (L2CValue *)auStack176;
    lib::L2CValue::operator_(aLStack96,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::operator_(aLStack80,aLStack192);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0xe7c749ab1);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0x122e093aca);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)auStack176);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0xce2c373c3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0xd1338f2d2);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0xd1c9f492d);
    pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack192);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,(ulong)pLVar4,uVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::operator_(aLStack80,aLStack208);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,fVar5);
    lib::L2CValue::operator_(aLStack192,aLStack224);
    pLVar4 = (L2CValue *)auStack176;
    lib::L2CValue::operator_(aLStack96,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::operator_(aLStack80,aLStack192);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0xfa2439434);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
    lib::L2CValue::L2CValue(aLStack208,0x130f7c0e2e);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar5);
    lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)auStack176);
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::operator_(aLStack128);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack160 + 0x10));
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

