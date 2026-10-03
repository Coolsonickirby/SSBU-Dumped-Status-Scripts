
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001220c0(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::WorkModule__unable_transition_term_forbid_indivi_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

