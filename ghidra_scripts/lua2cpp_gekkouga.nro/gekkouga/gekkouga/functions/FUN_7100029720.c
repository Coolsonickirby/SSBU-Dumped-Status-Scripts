
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029720(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_FRAME_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

