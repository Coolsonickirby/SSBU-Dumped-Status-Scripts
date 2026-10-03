
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016950(undefined8 param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  L2CValue *this;
  ulong uVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_N_WORK_FLOAT_INHERIT_MOTION_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  ppBVar8 = &param_2->moduleAccessor;
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
      goto LAB_7100016cec;
    }
    lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,true);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    bVar3 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),fVar11,(bool)(bVar3 & 1),false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
      goto LAB_7100016cec;
    }
    lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,true);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    bVar3 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar2 & 1),fVar11,(bool)(bVar3 & 1),false);
  }
  lib::L2CValue::~L2CValue(aLStack192);
LAB_7100016cec:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_CAN_SHOOT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MASTER_STATUS_SPECIAL_N_FLAG_CAN_SHOOT);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar8,(bool)(bVar2 & 1),iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar8,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
    lib::L2CValue::L2CValue(aLStack144,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl(*ppBVar8,iVar4,HVar7,(bool)(bVar2 & 1),-1.0);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::ArticleModule__set_frame_impl(*ppBVar8,iVar4,fVar9);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack208,FUN_7100017270);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

