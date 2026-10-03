
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001201d0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack112,pLVar5);
  FUN_7100120720(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::MotionModule__enable_set_frame_2nd_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::ItemModule__set_change_status_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    uVar6 = lib::L2CValue::operator==(pLVar5,param_2);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_succeeds_bit_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack96,0x13c9a2df03);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = app::lua_bind::EffectModule__is_exist_common_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,0x13c9a2df03);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__remove_common_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

