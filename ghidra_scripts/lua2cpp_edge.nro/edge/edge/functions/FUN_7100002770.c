
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100002770(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000028d0(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_EDGE_INSTANCE_WORK_ID_FLAG_ONE_WINGED_CANNOT_JUMP_PLUS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__unable_transition_term_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__unable_transition_term_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

