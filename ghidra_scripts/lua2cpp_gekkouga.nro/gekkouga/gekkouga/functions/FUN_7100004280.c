
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004280(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor **ppBVar6;
  float fVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_START_HOLD);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar6 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar6,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x1a);
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::operator*(pLVar5,aLStack96);
      uVar4 = lib::L2CValue::operator<(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_FRONT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x1a);
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::operator-(aLStack112);
      lib::L2CValue::operator*(pLVar5,aLStack96);
      uVar4 = lib::L2CValue::operator<(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_FRONT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar6,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ITEM);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4_START);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_HEAVY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_RUN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_RUN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_FORCE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_FORCE_DASH)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_GUARD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_TURN_DASH);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TURN_FLAG_DASH);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DASH);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_DASH_FLAG_NO_S4);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_DASH_FLAG_NO_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TURN_FLAG_NO_TURN_TO_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TURN_FLAG_DASH);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_RUN_BRAKE);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_RUN_BRAKE_FLAG_TURN_RUN);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_RUN_BRAKE_FLAG_ATTACK_DASH_STRANS_OFF);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  return;
}

