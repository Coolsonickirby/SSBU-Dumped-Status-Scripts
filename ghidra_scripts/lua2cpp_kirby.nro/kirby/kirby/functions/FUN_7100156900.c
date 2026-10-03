
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100156900(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),8);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ControlModule__check_button_on_trriger_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_on_release_impl
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
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_release_impl
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
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

