
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000171b0(long param_1)

{
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
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
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar10,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,-1.0,1.0,0.0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,fVar10,fVar9,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,-1.0,1.0,0.0);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_STATUS_SPECIAL_LW_FLAG_SHIELD);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    pLVar5 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0xf1a0d16d7);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar5 = aLStack112;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::MotionModule__set_rate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar10);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

