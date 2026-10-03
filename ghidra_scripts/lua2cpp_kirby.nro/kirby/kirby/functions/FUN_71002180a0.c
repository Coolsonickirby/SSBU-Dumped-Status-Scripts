
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002180a0(long param_1)

{
  byte bVar1;
  int iVar2;
  ArticleOperationTarget AVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
  lib::L2CValue::L2CValue(aLStack80,true);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_GENERATE_ARTICLE_BOWARROW);
  lib::L2CValue::L2CValue(aLStack80,true);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_GENERATE_ARTICLE_BOWARROW);
  lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_FIRST);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  AVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__shoot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,AVar3,true);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

