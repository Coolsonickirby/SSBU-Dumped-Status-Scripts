
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::FinalMoney_main(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_MURABITO);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SHIZUE);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_7100018fe4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_GENERATE_ARTICLE_MONEYBAG);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_GENERATE_ARTICLE_MONEYBAG);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__set_visibility_whole_impl
              (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_GENERATE_ARTICLE_MONEYBAG);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_GENERATE_ARTICLE_MONEYBAG);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__set_visibility_whole_impl
              (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100018fe4:
  lib::L2CValue::L2CValue(aLStack80,FinalMoney_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

