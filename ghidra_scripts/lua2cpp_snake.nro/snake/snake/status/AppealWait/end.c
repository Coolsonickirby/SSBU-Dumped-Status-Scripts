
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::AppealWait_end(L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *this_00;
  Fighter *pFVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_GENERATE_ARTICLE_CBOX);
  lib::L2CValue::L2CValue(aLStack112,_ARTICLE_OPE_TARGET_ALL);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  AVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::FighterSpecializer_Snake::is_constraint_article(pFVar5,iVar3,AVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_APPEAL_FLAG_EXIT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_GENERATE_ARTICLE_CBOX);
    lib::L2CValue::L2CValue(aLStack96,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    AVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__shoot_impl(this->moduleAccessor,iVar3,AVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

