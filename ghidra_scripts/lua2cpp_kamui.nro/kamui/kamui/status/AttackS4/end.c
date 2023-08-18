
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKamui::status::AttackS4_end(L2CFighterKamui *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = aLStack112;
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_REBOUND_STOP);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) goto LAB_7100011228;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
      pLVar5 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
LAB_7100011228:
  lua2cpp::L2CFighterCommon::status_end_AttackS4(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

