
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002043f0(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  int iVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_PEACH_SPECIAL_AIR_N);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,HVar6);
    lib::L2CValue::L2CValue(aLStack80,0xf049ce578);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack128,HVar6);
      lib::L2CValue::L2CValue(aLStack80,0xfea4db5d5);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_71002046bc;
      lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
LAB_71002046bc:
      lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,
                 false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_MOTION_TRANSITION_TERM_ID_MOT_END);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_STATUS_WORK_INT_MTRANS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    goto LAB_71002049e0;
  }
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
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
  lib::L2CValue::L2CValue(aLStack112,HVar6);
  lib::L2CValue::L2CValue(aLStack80,0x13fe5dda89);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack128,HVar6);
    lib::L2CValue::L2CValue(aLStack80,0x13f2710ec0);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100204628;
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,fVar7,fVar8,
               (bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_7100204628:
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,false
              );
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_MOTION_TRANSITION_TERM_ID_MOT_END);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PEACH_STATUS_WORK_INT_MTRANS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
LAB_71002049e0:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,true);
    FUN_7100205040(param_1,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  return;
}

