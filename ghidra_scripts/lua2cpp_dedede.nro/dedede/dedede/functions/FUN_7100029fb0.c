
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029fb0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710002a27c;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_FAILURE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_GENERATE_ARTICLE_GORDO);
      lib::L2CValue::L2CValue(aLStack96,_ARTICLE_OPE_TARGET_LAST);
      lib::L2CValue::L2CValue(aLStack112,false);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      AVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::ArticleModule__shoot_exist_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,AVar4,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_OK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_FAILURE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710002a27c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

