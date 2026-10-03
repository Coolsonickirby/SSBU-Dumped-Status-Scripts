
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a140(void *param_1,L2CValue *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  L2CValue *this;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIT_STATUS_SPECIAL_S_WORK_ID_INT_START_SITUATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1337fadc39);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x1337fadc39);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,-1.0,1.0,0.0,false,
                 false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIT_STATUS_SPECIAL_S_WORK_ID_INT_START_SITUATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xf3c6351ed);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xf3c6351ed);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,-1.0,1.0,0.0,false,
                 false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

