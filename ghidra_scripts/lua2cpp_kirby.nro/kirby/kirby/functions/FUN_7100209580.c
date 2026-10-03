
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100209580(void *param_1)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *this;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xb0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar6);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,-1.0,1.0,0.0,false,
                 false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xb0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_GROUND_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar6);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,-1.0,1.0,0.0,false,
                 false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,fVar8,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = app::lua_bind::MotionModule__is_end_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

