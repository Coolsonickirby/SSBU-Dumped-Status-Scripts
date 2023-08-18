
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::FinalReady_end(L2CFighterEflame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  Fighter *pFVar3;
  FighterModuleAccessor *pFVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_FINAL_MODULE_READY_EXIT);
  pFVar3 = (Fighter *)lib::L2CValue::as_pointer(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_EFlame::call_final_module(pFVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar4 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::FighterSpecializer_EFlame::detach_esword_diver(pFVar4);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_STATUS_KIND_FINAL_SCENE01);
  uVar5 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue(aLStack80);
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

