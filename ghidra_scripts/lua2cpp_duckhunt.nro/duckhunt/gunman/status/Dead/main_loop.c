
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntGunman::status::Dead_main_loop
          (L2CWeaponDuckhuntGunman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_DEAD_DAMAGE_FLY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_DAMAGE_FLY_BOUND_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_X)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_Y)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack144,0x16844f07d9);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack160,0x16b8423880);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack176,0x16b92f2e69);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack192,0x1685221130);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,aLStack96);
      lib::L2CValue::L2CValue(aLStack208,aLStack128);
      lib::L2CValue::L2CValue(aLStack224,aLStack144);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,aLStack96);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CValue::operator_(aLStack128);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack240,aLStack112);
    lib::L2CValue::L2CValue(aLStack256,aLStack160);
    lib::L2CValue::L2CValue(aLStack272,aLStack176);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack304,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack320,0x1287963275);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack288,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_NORMAL);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_NORMAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_DEAD_DAMAGE_FLY)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

