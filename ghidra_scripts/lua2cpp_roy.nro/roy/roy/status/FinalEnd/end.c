
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::FinalEnd_end(L2CFighterRoy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_JOSTLE);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_TREAD_JUMP_CHECK);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_TREAD_PASSIVE);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_ITEM_PICKUP);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_ITEM_PICKUP_AIR);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_BODY_WATER);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_LADDER_CHECK);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_LADDER_CHECK_BOTTOM);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_JOSTLE);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_TREAD_JUMP_CHECK);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_TREAD_PASSIVE);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_ITEM_PICKUP);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_ITEM_PICKUP_AIR);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_BODY_WATER);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_LADDER_CHECK);
    lib::L2CValue::L2CValue(aLStack112,true);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_AREA_KIND_LADDER_CHECK_BOTTOM);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100011770(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

