
void FUN_7100136150(long param_1)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__enable_transition_term_group_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__enable_transition_term_group_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

