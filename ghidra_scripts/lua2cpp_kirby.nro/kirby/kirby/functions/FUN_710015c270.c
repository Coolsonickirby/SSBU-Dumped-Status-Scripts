
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710015c270(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator-(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,-1);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_DIR);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_STICK_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

