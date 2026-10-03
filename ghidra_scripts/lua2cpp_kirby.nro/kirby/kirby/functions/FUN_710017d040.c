
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710017d040(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    FUN_710017e5f0(param_2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_CANCEL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) goto LAB_710017d1dc;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_CHARGE_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_CANCEL_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710017d1dc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

