
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialS3_exec(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  undefined8 uVar5;
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
  
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::unable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::unable(this->luaStateAgent);
      pLVar4 = aLStack176;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar1 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack176,(float)uVar5);
      lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar5 >> 0x20));
      lib::L2CValue::operator_(pLVar4,aLStack176);
      lib::L2CValue::operator_(this_00,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack192,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      FUN_7100005f10(this);
      pLVar4 = aLStack112;
    }
    lib::L2CValue::_L2CValue(pLVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) {
      FUN_7100005f10(this);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

