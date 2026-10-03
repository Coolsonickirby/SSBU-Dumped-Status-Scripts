
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c090(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ArticleOperationTarget AVar6;
  ulong uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_STATUS_SPECIAL_N_FLAG_GENERATE_ARTICLE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    lVar1 = -0x40;
LAB_710001c1f8:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_NESS_STATUS_SPECIAL_N_FLAG_ALREADY_GENERATED);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_N_FLAG_GENERATE_ARTICLE);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_N_FLAG_ALREADY_GENERATED);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_GENERATE_ARTICLE_PK_FLASH);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__generate_article_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,false,-1);
      lVar1 = -0x30;
      goto LAB_710001c1f8;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_STATUS_SPECIAL_N_FLAG_ALREADY_GENERATED);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar3 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_N_WORK_INT_TIME);
  lib::L2CValue::L2CValue(aLStack80,0);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_N_WORK_INT_NOBANG_TIME);
  lib::L2CValue::L2CValue(aLStack80,0);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_GENERATE_ARTICLE_PK_FLASH);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar3 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_N_WORK_INT_NOBANG_TIME);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar7 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_off_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_GENERATE_ARTICLE_PK_FLASH);
      lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      AVar6 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::ArticleModule__shoot_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,AVar6,(bool)(bVar2 & 1));
      goto LAB_710001c554;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_N_WORK_INT_TIME);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar7 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_GENERATE_ARTICLE_PK_FLASH);
  lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
  lib::L2CValue::L2CValue(aLStack96,false);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  AVar6 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ArticleModule__shoot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,AVar6,(bool)(bVar2 & 1));
LAB_710001c554:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

