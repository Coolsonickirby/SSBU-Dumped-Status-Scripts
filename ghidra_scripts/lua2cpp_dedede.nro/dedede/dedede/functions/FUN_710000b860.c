
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b860(long param_1)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_SE_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::operator=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack48,0);
  uVar2 = lib::L2CValue::operator<=(aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) != 0) {
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::SoundModule__stop_se_handle_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

