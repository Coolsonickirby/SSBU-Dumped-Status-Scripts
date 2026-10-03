
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018070(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

