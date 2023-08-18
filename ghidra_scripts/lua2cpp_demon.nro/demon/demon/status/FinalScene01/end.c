
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::FinalScene01_end(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  Fighter *pFVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_FINAL_MODULE_SCENE_01_EXIT);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Demon::call_final_module(pFVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_FINAL_END);
  uVar5 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERHEAD);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_GENERATE_ARTICLE_DEMONP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERCHEST);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_GENERATE_ARTICLE_BLASTERWING);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::FighterUtil::set_stage_disable_reverse_screen((bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

