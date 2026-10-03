
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019e20(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_PICHU);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0x5638;
  }
  else {
    lVar3 = 0x5634;
  }
  lib::L2CValue::L2CValue(param_1,*(int *)((long)&LUA_SCRIPT_LINE_MAX + lVar3));
  return;
}

