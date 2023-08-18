
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMario::status::Final_end(L2CFighterMario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ArticleOperationTarget AVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_GENERATE_ARTICLE_HUGE_FLAME);
  lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
  lib::L2CValue::L2CValue(aLStack96,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  AVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ArticleModule__shoot_impl(this->moduleAccessor,iVar2,AVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

