
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100168a80(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SUCTION_IRONBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100168d70;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL_END);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_7100168d70;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100168d70;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_GENERATE_ARTICLE_IRONBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,false,-1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL_END);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    this = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_2ND_WAIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.1666667);
      lib::L2CValue::operator-(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_2ND_WAIGHT);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    this = aLStack96;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100168d70:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

