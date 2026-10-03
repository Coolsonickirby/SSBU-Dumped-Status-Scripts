
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017080(long param_1)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  long lVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack80,lVar7);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,fVar9,fVar10,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      goto LAB_7100017474;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,lVar7);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack80,lVar7);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,fVar9,fVar10,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
LAB_7100017474:
      pLVar5 = aLStack80;
      goto LAB_7100017478;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,lVar7);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar8,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar5 = aLStack96;
LAB_7100017478:
  lib::L2CValue::~L2CValue(pLVar5);
  return;
}

