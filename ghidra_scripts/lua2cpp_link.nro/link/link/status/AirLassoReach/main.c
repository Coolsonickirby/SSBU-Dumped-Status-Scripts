
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLink::status::AirLassoReach_main(L2CFighterLink *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710000e3a8;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710000e3a8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710000e3a8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000e3a8:
  lib::L2CValue::L2CValue(aLStack80,0x61e93d2e8);
  lib::L2CValue::L2CValue(aLStack96,0xb8f067556);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar6,lVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TOONLINK_HOOKSHOT_STATUS_KIND_REACH);
  lua2cpp::L2CFighterCommon::status_AirLassoReach(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

