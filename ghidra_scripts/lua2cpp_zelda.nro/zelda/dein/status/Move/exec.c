
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaDein::status::Move_exec(L2CWeaponZeldaDein *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLAG_REFLECT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__((L2CValue *)auStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  if ((uVar3 & 1) != 0) {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    fVar6 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    pLVar5 = aLStack80;
    lib::L2CValue::operator_((L2CValue *)auStack192,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0xa772b1805);
    lib::L2CValue::L2CValue(aLStack288,0x9b4c59d7c);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar6);
    uVar3 = lib::L2CValue::operator_((L2CValue *)auStack256,aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0xa772b1805);
      lib::L2CValue::L2CValue(aLStack288,0x9f9dc92d8);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack272);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar5,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar6);
      lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0xa772b1805);
      lib::L2CValue::L2CValue(aLStack288,0x999b0c3b6);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack272);
      uVar3 = lib::L2CValue::as_integer(aLStack288);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar5,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar6);
      lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
      lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack192);
      lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack256);
      pLVar5 = aLStack80;
      lib::L2CValue::operator_(aLStack128,pLVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar5);
      uVar3 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar3 = lib::L2CValue::operator_(aLStack80,aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::operator_(aLStack96);
          lib::L2CValue::operator_(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        else {
          lib::L2CValue::operator_(aLStack128,aLStack96);
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_ANGLE);
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_SPEED);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0xa772b1805);
    lib::L2CValue::L2CValue(aLStack288,0x55dfc36e5);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar6);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack256);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa772b1805);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0x99f2bb267);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    uVar3 = lib::L2CValue::operator_(aLStack224,aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack112,aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_SPEED);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator__((L2CValue *)(auStack256 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_
                (aLStack144,(L2CValue *)&FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP);
    }
    pLVar5 = aLStack128;
    lib::L2CValue::operator_(aLStack144,pLVar5);
    lib::L2CAgent::math_cos((L2CAgent *)auStack272,pLVar5);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack256);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    pLVar5 = aLStack128;
    lib::L2CValue::operator_(aLStack144,pLVar5);
    lib::L2CAgent::math_sin((L2CAgent *)auStack272,pLVar5);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack256);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack192 + 0x10));
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

