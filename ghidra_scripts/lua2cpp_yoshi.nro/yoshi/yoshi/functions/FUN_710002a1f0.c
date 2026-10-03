
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a1f0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *pLVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_HI_WORK_INT_EGG_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_SPECIAL_HI_FLAG_EGG_APPEAR);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar5 = aLStack80;
LAB_710002a3a8:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_YOSHI_GENERATE_ARTICLE_TAMAGO);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_HI_FLAG_EGG_APPEAR);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_GENERATE_ARTICLE_TAMAGO);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__generate_article_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,false,-1);
      pLVar5 = aLStack64;
      goto LAB_710002a3a8;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_SPECIAL_HI_FLAG_EGG_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar5 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_GENERATE_ARTICLE_TAMAGO);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_710002a4ec;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_HI_FLAG_EGG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_GENERATE_ARTICLE_TAMAGO);
    lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    AVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__shoot_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,AVar4,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_710002a4ec:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

