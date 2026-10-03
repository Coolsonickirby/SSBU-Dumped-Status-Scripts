
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000112e0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  undefined auStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_GENERATE_ARTICLE_MAINLASER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100011640;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLOAT_MAINLASER_ANGLE_OFFSET)
    ;
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(int)pLVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar5);
    lib::L2CValue::L2CValue(aLStack80,0.5);
    uVar4 = lib::L2CValue::operator<(aLStack80,(L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)(param_2 + 0x228);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x15224ec3cb);
      lib::L2CValue::operator*(aLStack112,pLVar6);
      lib::L2CValue::operator+(aLStack96,(L2CValue *)(auStack144 + 0x10));
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x15479241d0);
      lib::L2CValue::operator-(pLVar6);
      lib::L2CAgent::math_max((L2CAgent *)auStack160,aLStack176,param_3);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x15479241d0);
      lib::L2CAgent::math_min((L2CAgent *)auStack144,pLVar5,param_3);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)auStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLOAT_MAINLASER_ANGLE_OFFSET);
      fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)auStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    }
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_RESTART_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_RESTART_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_SHOT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_7100011640;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_SHOT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100011640:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

