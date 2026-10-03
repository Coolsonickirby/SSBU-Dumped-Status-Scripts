
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001db140(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x21e234e7d8);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x21e234e7d8);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1d6af1361c);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x1d6af1361c);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

