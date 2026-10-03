
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023390(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_SPECIAL_S_INT_SHOOT_STATUS);
  iVar2 = lib::L2CValue::as_integer(param_2);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_GENERATE_ARTICLE_CLAYROCKET);
  lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
  lib::L2CValue::L2CValue(aLStack96,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  AVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ArticleModule__shoot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,AVar4,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

