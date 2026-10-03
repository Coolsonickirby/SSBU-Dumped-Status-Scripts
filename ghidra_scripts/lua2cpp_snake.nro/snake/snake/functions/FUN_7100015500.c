
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015500(long param_1)

{
  int iVar1;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar2;
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
  app::FighterSnakeFinalModule::end_final(pBVar2);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SNAKE_GENERATE_ARTICLE_FLARE_GRENADES);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SNAKE_GENERATE_ARTICLE_RETICLE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SNAKE_GENERATE_ARTICLE_RETICLE_CURSOR);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SNAKE_GENERATE_ARTICLE_LOCK_ON_CURSOR);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SNAKE_GENERATE_ARTICLE_LOCK_ON_CURSOR_READY);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

