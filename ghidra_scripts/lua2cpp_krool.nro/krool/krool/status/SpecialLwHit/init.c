
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialLwTurn_init(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
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
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  uVar7 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::operator_(pLVar3,aLStack160);
  lib::L2CValue::operator_(this_00,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack176,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack192,pLVar3);
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,iVar1);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar4 = lib::L2CValue::operator__(aLStack208,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_LW_HIT);
    uVar4 = lib::L2CValue::operator__(aLStack208,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_71000083a8;
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KROOL_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    iVar1 = lib::L2CValue::as_integer(aLStack224);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack160,fVar6);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack256,0x1b578d107f);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack224,fVar6);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack272,0x1b63f91357);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar6);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x1b5ff42c0e);
    uVar4 = lib::L2CValue::as_integer(aLStack272);
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack256,fVar6);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::operator_(aLStack160,aLStack224);
    lib::L2CValue::operator_(aLStack160,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack288,aLStack160);
    lib::L2CValue::L2CValue(aLStack304,aLStack256);
    lib::L2CValue::L2CValue(aLStack320,aLStack240);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::operator_(aLStack160,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KROOL_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    fVar6 = (float)lib::L2CValue::as_number(aLStack160);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  else {
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,iVar1);
    lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(aLStack224,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KROOL_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar2 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x1ed2960ae4);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack224,fVar6);
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
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack224,fVar6);
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
      lib::L2CValue::L2CValue(aLStack272,0x161e51d555);
      uVar4 = lib::L2CValue::as_integer(aLStack256);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack240,fVar6);
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
      lib::L2CValue::L2CValue(aLStack256,0x166a87fb73);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack224,fVar6);
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
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KROOL_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar2 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
LAB_71000083a8:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

