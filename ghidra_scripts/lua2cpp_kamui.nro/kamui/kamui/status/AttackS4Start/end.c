
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::AttackS4Start_end(L2CFighterKamui *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar6 = aLStack112;
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_S4_HOLD);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_S4);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_7100011410;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
        pLVar6 = aLStack80;
      }
      lib::L2CValue::_L2CValue(pLVar6);
    }
  }
LAB_7100011410:
  lua2cpp::L2CFighterCommon::status_end_AttackS4Start(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

