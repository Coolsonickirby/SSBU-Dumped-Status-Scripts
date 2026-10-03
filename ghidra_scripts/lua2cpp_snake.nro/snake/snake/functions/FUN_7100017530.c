
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017530(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *this;
  Fighter *pFVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_GENERATE_ARTICLE_C4);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SNAKE_GENERATE_ARTICLE_C4);
    lib::L2CValue::L2CValue(aLStack128,_ARTICLE_OPE_TARGET_ALL);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(this);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    AVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::FighterSpecializer_Snake::is_constraint_article(pFVar5,iVar3,AVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      FUN_7100017100(param_2);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

