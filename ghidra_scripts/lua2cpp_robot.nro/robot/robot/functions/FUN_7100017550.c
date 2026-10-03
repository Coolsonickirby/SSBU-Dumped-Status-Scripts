
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017550(long param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  ulong uVar9;
  float fVar10;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_JET_ON);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_71000177f4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_JET);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,iVar4);
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar6 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar3 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::EffectModule__kill_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,(bool)(bVar1 & 1),
               (bool)(bVar3 & 1));
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4)
    ;
    pLVar7 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_71000177f4;
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    iVar4 = app::FighterSpecializer_Robot::create_burner_effect(pFVar8);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar9 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_JET);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    pLVar7 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar7);
LAB_71000177f4:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar10);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar9 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_NORMAL_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_NORMAL);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack64,iVar4);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::EffectModule__kill_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,true,true);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_NORMAL_ON);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_JET);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack64,iVar4);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      bVar3 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::EffectModule__kill_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,(bool)(bVar1 & 1),
                 (bool)(bVar3 & 1));
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

