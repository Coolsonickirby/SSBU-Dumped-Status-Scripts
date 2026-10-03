
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000209e0(long param_1)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

