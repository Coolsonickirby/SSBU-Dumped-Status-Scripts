
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ee10(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_MURABITO);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_SHIZUE);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      iVar3 = 0;
      goto LAB_710001eec4;
    }
    lVar4 = 0x8a50;
  }
  else {
    lVar4 = 0x8a4c;
  }
  iVar3 = *(int *)((long)&LUA_SCRIPT_LINE_MAX + lVar4);
LAB_710001eec4:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

