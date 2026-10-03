
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100073ca0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  iVar2 = lib::L2CValue::as_integer(pLVar4);
  bVar1 = app::FighterSpecializer_Pickel::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar7 = aLStack80;
    goto LAB_71000741ec;
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_HI3);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) goto LAB_7100073e64;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
LAB_7100073e64:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,4);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    app::FighterSpecializer_Pickel::set_head_angle_current_motion(pFVar6);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::MotionModule__remove_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,false);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::MotionModule__set_part_animcmd_fix_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_DASH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,4);
  lib::L2CValue::L2CValue(aLStack80,true);
  pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::FighterSpecializer_Pickel::set_interpolate_move_attack_joint(pFVar6,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,4);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    app::FighterSpecializer_Pickel::set_head_angle_change_motion(pFVar6);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  uVar5 = lib::L2CValue::operator==(pLVar7,param_2);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StatusModule__set_succeeds_bit_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StatusModule__set_succeeds_bit_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack112,0x18ec26bdfb);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar8,-1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = aLStack96;
LAB_71000741ec:
  lib::L2CValue::~L2CValue(pLVar7);
  return;
}

