
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::SpecialLwHit_init(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
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
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar9 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::operator_(pLVar5,aLStack160);
  lib::L2CValue::operator_(this_00,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack176,pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack192,pLVar5);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar6 = lib::L2CValue::operator__(aLStack208,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_LW_HIT);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) == 0) goto LAB_7100002d58;
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar8);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack256,0x156ab3e3f7);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar8);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack272,0x155ec7e0df);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack256,fVar8);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x1fa110a0f5);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack272,fVar8);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::operator_(aLStack224,aLStack240);
    lib::L2CValue::operator_(aLStack224,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack304,0x1d31f3fe44);
    uVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    uVar6 = lib::L2CValue::operator_(aLStack224,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator_(aLStack224,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_FLAG_IS_ATTACK_ENEMY);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((bVar2 & 1U) == 0) {
      uVar6 = lib::L2CValue::operator_(aLStack256,aLStack224);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack224,aLStack256);
      }
    }
    else {
      uVar6 = lib::L2CValue::operator_(aLStack272,aLStack224);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack224,aLStack272);
      }
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER)
    ;
    fVar8 = (float)lib::L2CValue::as_number(aLStack224);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar5 = aLStack224;
  }
  else {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,iVar3);
    lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x1a5e362ecd);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::operator_(aLStack176,aLStack224);
      lib::L2CValue::operator_(aLStack176,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator_(aLStack192,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack224,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x1af2687305);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0x17875fd1b5);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar8);
      lib::L2CValue::operator_(aLStack240);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x17f389ff93);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar5 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100002d58:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

