
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::FinalReady_end(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  long lVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack96,0x9b7cb3e40);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  lVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar2,lVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack96,0x9b0ef525e);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  lVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar2,lVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_FINAL_MODULE_READY_EXIT);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Tantan::call_final_module(pFVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_FINAL_SCENE01);
  uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

