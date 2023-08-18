
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWiifitSilhouette::status::Regular_init
          (L2CWeaponWiifitSilhouette *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = aLStack208;
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_WEAPON_WIIFIT_SILHOUETTE_INSTANCE_WORK_ID_INT_TYPE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),iVar1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_WIIFIT_SILHOUETTE_TYPE_FIRST);
  uVar2 = lib::L2CValue::operator__((L2CValue *)(auStack128 + 0x10),aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_WEAPON_WIIFIT_SILHOUETTE_INSTANCE_WORK_ID_INT_TYPE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),iVar1);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_WIIFIT_SILHOUETTE_TYPE_SECOND);
    uVar2 = lib::L2CValue::operator__((L2CValue *)(auStack128 + 0x10),aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x10c5f97066);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
      uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x10f9f44f3f);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
      uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x119747021f);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
      uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x11ab4a3d46);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
      uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0x10e581838b);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0x107e7fd4ca);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0x10d98cbcd2);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack128 + 0x10));
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar7);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0x77a08c3fc);
  HVar4 = lib::L2CValue::as_hash(aLStack160);
  fVar7 = (float)app::sv_math::randf(HVar4,1.0);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::operator_(aLStack144,aLStack64);
  pLVar5 = aLStack80;
  lib::L2CValue::operator_((L2CValue *)auStack128,pLVar5);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CAgent::math_rad((L2CAgent *)(auStack128 + 0x10),pLVar5);
  lib::L2CValue::L2CValue(aLStack160,0x107e7fd4ca);
  lib::L2CValue::L2CValue(aLStack176,0x50f26fef6);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack160);
  uVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar5,uVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CAgent::math_cos((L2CAgent *)auStack128,pLVar5);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::operator_(aLStack176,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CAgent::math_sin((L2CAgent *)auStack128,pLVar6);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

