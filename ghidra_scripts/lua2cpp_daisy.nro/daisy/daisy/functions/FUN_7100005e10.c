
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005e10(long param_1)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  FUN_7100005ee0(aLStack48,param_1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_INSTANCE_WORK_INT_SMASH_ITEM);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

