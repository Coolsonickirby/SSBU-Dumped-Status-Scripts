
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001abc0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  int iVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_GENERATE_ARTICLE_GBEAM);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUSD_GENERATE_ARTICLE_GBEAM);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_end_CatchPull(param_2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

