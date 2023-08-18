
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwHit_end(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_CANCEL);
  uVar2 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
  lib::L2CValue::L2CValue(aLStack112,0x104481c1ad);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_module_access::effect(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
  lib::L2CValue::L2CValue(aLStack128,0x1bad643cbb);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack160,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_module_access::effect(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
  lib::L2CValue::L2CValue(aLStack144,0x148d4eb02d);
  lib::L2CValue::L2CValue(aLStack160,true);
  lib::L2CValue::L2CValue(aLStack176,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_module_access::effect(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_CLIFF_CATCH._4_4_);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack144);
  lVar4 = lib::L2CValue::as_number(aLStack160);
  uVar3 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar2 & 0xffffffff | lVar4 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

