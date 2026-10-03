
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f950(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_CONTROL_PAD_BUTTON_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      return;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_TRIGGER_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

