
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014db0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_GENERATE_BIRD)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__generate_article_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false,-1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(param_2);
      app::lua_bind::ArticleModule__change_status_exist_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_VISIBLE_BIRD);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
      lib::L2CValue::L2CValue(aLStack80,true);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::ArticleModule__set_visibility_whole_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1),0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_GENERATE_BIRD);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_PUNCH_VISIBLE_BIRD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
      lib::L2CValue::L2CValue(aLStack80,false);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::ArticleModule__set_visibility_whole_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1),0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
      lib::L2CValue::L2CValue(aLStack80,true);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::ArticleModule__set_visibility_whole_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1),0);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

