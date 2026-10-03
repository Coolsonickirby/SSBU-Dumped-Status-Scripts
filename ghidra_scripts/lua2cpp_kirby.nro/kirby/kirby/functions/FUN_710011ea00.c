
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710011ea00(L2CFighterCommon *param_1)

{
  uint uVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_jump_squat_uniq_check(param_1);
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,HVar5);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  fVar7 = (float)app::lua_bind::MotionModule__update_rate_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  HVar5 = lib::L2CValue::as_hash(aLStack64);
  uVar1 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                    (param_1->moduleAccessor,HVar5);
  lib::L2CValue::L2CValue(aLStack112,uVar1);
  lib::L2CValue::operator+(aLStack80,aLStack96);
  uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_JUMP_FROM_SQUAT);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_JUMP_FROM);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_JUMP_START);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__enable_transition_term_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

