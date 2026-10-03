
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019e60(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  long lVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar5 = (L2CValue *)((long)param_1 + 200);
  if ((uVar4 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_7100019eac;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      return;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
LAB_7100019eac:
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_AIR_HI_START);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,HVar6);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,lVar7);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,
                 false);
      goto LAB_710001a3a8;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar7);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,fVar9,fVar10,
               (bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,HVar6);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,lVar7);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,
                 false);
      goto LAB_710001a3a8;
    }
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar7);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,fVar9,fVar10,
               (bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710001a3a8:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

