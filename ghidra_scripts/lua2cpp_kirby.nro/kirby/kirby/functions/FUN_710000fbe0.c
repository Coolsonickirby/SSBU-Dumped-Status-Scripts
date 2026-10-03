
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000fbe0(long param_1,L2CValue *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
      lib::L2CValue::L2CValue(aLStack80,false);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::ArticleModule__set_visibility_whole_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar2 & 1),0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::VisibilityModule__set_whole_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
      lib::L2CValue::L2CValue(aLStack80,true);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::ArticleModule__set_visibility_whole_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar2 & 1),0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::VisibilityModule__set_whole_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

