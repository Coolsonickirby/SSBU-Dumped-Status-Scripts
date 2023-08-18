
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerStealthbomb::status::Move_exec
          (L2CWeaponMiigunnerStealthbomb *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [32];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack352,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLAG_REFLECT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__((L2CValue *)auStack336,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  if ((uVar3 & 1) != 0) {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack336,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_((L2CValue *)auStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    fVar6 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    pLVar5 = aLStack80;
    lib::L2CValue::operator_((L2CValue *)auStack208,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0x11c431dff8);
    lib::L2CValue::L2CValue(aLStack368,0x9b4c59d7c);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar4 = lib::L2CValue::as_integer(aLStack368);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar6);
    uVar3 = lib::L2CValue::operator_((L2CValue *)auStack336,aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack352,0x11c431dff8);
      lib::L2CValue::L2CValue(aLStack368,0x9f9dc92d8);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack352);
      uVar3 = lib::L2CValue::as_integer(aLStack368);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar5,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar6);
      lib::L2CAgent::math_rad((L2CAgent *)auStack336,pLVar5);
      lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,0x11c431dff8);
      lib::L2CValue::L2CValue(aLStack368,0x999b0c3b6);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack352);
      uVar3 = lib::L2CValue::as_integer(aLStack368);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar5,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar6);
      lib::L2CAgent::math_rad((L2CAgent *)auStack336,pLVar5);
      lib::L2CValue::operator_(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack208);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack96);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)auStack336);
      pLVar5 = aLStack80;
      lib::L2CValue::operator_((L2CValue *)auStack160,pLVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar5);
      uVar3 = lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar3 = lib::L2CValue::operator_(aLStack80,(L2CValue *)auStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator_((L2CValue *)auStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        else {
          lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)(auStack336 + 0x10));
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLOAT_ANGLE);
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack336,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLOAT_SPEED);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0x11c431dff8);
    lib::L2CValue::L2CValue(aLStack368,0x55dfc36e5);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    uVar4 = lib::L2CValue::as_integer(aLStack368);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar6);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0x11c431dff8);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0x99f2bb267);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack288,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    uVar3 = lib::L2CValue::operator_(aLStack288,aLStack128);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack128,aLStack288);
    }
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLOAT_SPEED);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_
                ((L2CValue *)(auStack208 + 0x10),
                 (L2CValue *)&FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
    }
    pLVar5 = (L2CValue *)auStack160;
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),pLVar5);
    lib::L2CAgent::math_cos((L2CAgent *)auStack352,pLVar5);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    pLVar5 = (L2CValue *)auStack160;
    lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),pLVar5);
    lib::L2CAgent::math_sin((L2CAgent *)auStack352,pLVar5);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack336);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack336,_WEAPON_MIIGUNNER_STEALTHBOMB_STATUS_WORK_FLOAT_COUNT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack336);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,0x11c431dff8);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0x585d94462);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack336);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,0x11c431dff8);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0x86fec4d80);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack336);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,0x11c431dff8);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0x853e172d9);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack336);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack304,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::operator_(aLStack304,aLStack176);
  lib::L2CValue::operator_(aLStack368,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack352);
  lib::L2CValue::operator_((L2CValue *)auStack336,aLStack176);
  lib::L2CValue::operator_(aLStack272,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue(aLStack368);
  fVar6 = (float)lib::L2CValue::as_number(aLStack272);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

