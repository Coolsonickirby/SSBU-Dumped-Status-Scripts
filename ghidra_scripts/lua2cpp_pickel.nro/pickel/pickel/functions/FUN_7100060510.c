
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100060510(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FighterPickelCraftWeaponKind FVar5;
  uint uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Fighter *pFVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  BattleObjectModuleAccessor *pBVar12;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar11 = (L2CValue *)(param_1 + 200);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
  lib::L2CValue::L2CValue(aLStack112,pLVar7);
  FUN_7100060960(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar11 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false);
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
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
    uVar8 = lib::L2CValue::operator==(pLVar7,param_2);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FS_SUCCEEDS_KEEP_TRANSITION);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_succeeds_bit_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar11,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack96,false);
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    FVar5 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::FighterSpecializer_Pickel::set_have_craft_weapon(pFVar9,FVar5,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack96,0x1a56e16f1b);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar10 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar10,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
    uVar6 = lib::L2CValue::as_integer(pLVar7);
    uVar6 = app::sv_battle_object::kind(uVar6);
    lib::L2CValue::L2CValue(aLStack128,uVar6);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
    bVar1 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack128);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
      app::FighterSpecializer_Pickel::remove_have_craft_weapon_all(pBVar12);
    }
    pLVar11 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar11);
  return;
}

