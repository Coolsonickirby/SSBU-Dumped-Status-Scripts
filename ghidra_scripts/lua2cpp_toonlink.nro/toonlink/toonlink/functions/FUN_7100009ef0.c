
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009ef0(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)(param_2 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_PULL);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710000a070;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
LAB_710000a070:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

