
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000bd10(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100005100(aLStack80,param_1);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_REUSE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_DISABLE_AIR_SPECIAL_S);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_USED_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

