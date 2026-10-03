
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013b30(void *param_1,L2CValue *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *this;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_SPECIAL_N_WORK_FLOAT_SHIELD_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar8 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack128,HVar7);
  lib::L2CValue::L2CValue(aLStack96,0xe396c1260);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack144,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) goto LAB_7100013c98;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack128);
LAB_7100013c98:
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_PEACH_SPECIAL_AIR_N);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack128,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0xd7ae370d7);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack144,HVar7);
      lib::L2CValue::L2CValue(aLStack96,0xe396c1260);
      uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_7100013f68;
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x119a8ed3fe);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack128);
LAB_7100013f68:
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x119a8ed3fe);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_MOTION_TRANSITION_TERM_ID_MOT_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_WORK_INT_MTRANS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
    goto LAB_7100014450;
  }
  lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  GVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack128,HVar7);
  lib::L2CValue::L2CValue(aLStack96,0x119a8ed3fe);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack144,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) goto LAB_7100013ec8;
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xd7ae370d7);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xe396c1260);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::~L2CValue(aLStack128);
LAB_7100013ec8:
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xd7ae370d7);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xe396c1260);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_MOTION_TRANSITION_TERM_ID_MOT_END);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PEACH_STATUS_WORK_INT_MTRANS);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
LAB_7100014450:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,true);
    FUN_7100014720(param_1,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

