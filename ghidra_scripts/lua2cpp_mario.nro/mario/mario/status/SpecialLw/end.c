
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMario::status::SpecialLw_end(L2CFighterMario *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::operator_(aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_SHOOT);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_GENERATE_ARTICLE_PUMP);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MARIO_PUMP_STATUS_KIND_WAIT);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack112,0x174f90b797);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_SHOOT);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_REMOVE_COMMON);
      lib::L2CValue::L2CValue(aLStack112,0xaec2db62e);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

