
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009ce0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchPull(param_2);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_7100009e3c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT_HAND);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar1,0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100009e3c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

