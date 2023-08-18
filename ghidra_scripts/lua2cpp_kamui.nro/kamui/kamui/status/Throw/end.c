
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKamui::status::Throw_end(L2CFighterKamui *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = aLStack96;
  this_00 = aLStack96;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100011a10:
    lib::L2CValue::_L2CValue(pLVar4);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      pLVar4 = aLStack64;
      goto LAB_7100011a10;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100011ad8;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100011ad8:
  lua2cpp::L2CFighterCommon::status_end_Throw(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

