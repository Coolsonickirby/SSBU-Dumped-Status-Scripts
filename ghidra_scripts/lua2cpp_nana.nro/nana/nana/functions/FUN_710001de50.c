
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001de50(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(param_3,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  if ((uVar6 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar8,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710001deac;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      return;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
LAB_710001deac:
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_PHASE_END);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_COUPLE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_AIR_S_SINGLE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_AIR_S_COUPLE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_AIR_S_END);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,HVar9);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack128,lVar10);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,lVar10);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar9,fVar11,fVar12,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,lVar10);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar9,-1.0,1.0,0.0,false,
                 false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_FALL_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(param_1,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_PHASE_END);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_COUPLE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_S_SINGLE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_S_COUPLE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_S_END);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,HVar9);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack128,lVar10);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,lVar10);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar9,fVar11,fVar12,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,lVar10);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar9,-1.0,1.0,0.0,false,
                 false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_FALL_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_AIR_HOP_BUTTON_TRIGGER);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_POPO_STATUS_SPECIAL_S_WORK_INT_AIR_HOP_BUTTON_TRIGGER_COUNTER);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(param_1,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

