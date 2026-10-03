
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002c010(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,lVar6);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      goto LAB_710002c3f0;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar6);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,-1.0,1.0,0.0);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,lVar6);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
LAB_710002c3f0:
      pLVar4 = aLStack80;
      goto LAB_710002c3f4;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar6);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,-1.0,1.0,0.0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = aLStack96;
LAB_710002c3f4:
  lib::L2CValue::~L2CValue(pLVar4);
  return;
}

