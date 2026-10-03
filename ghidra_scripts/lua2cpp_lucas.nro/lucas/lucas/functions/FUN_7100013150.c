
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013150(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  int iVar5;
  L2CValue *this;
  ulong uVar6;
  Hash40 HVar7;
  long lVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(this,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_SPECIAL_AIR_END_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    ppBVar9 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack128,lVar8);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
    lib::L2CValue::~L2CValue(aLStack144);
    iVar4 = lib::L2CValue::as_integer(param_5);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar4);
    iVar4 = lib::L2CValue::as_integer(param_3);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack160);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) {
      HVar7 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_TRANSITION_TERM_ID_0);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_TRANSITION_TERM_ID_1);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar5 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  else {
    GVar3 = lib::L2CValue::as_integer(param_7);
    ppBVar9 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
    app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
    iVar4 = lib::L2CValue::as_integer(param_4);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar4);
    iVar4 = lib::L2CValue::as_integer(param_3);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack144);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      HVar7 = lib::L2CValue::as_hash(param_6);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(param_6);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCAS_STATUS_TRANSITION_TERM_ID_0);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCAS_STATUS_TRANSITION_TERM_ID_1);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar5 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  iVar4 = lib::L2CValue::as_integer(param_3);
  app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  return;
}

