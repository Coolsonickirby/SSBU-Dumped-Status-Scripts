
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100000300(undefined *param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xffffffff;
  if ((param_3 != (undefined *)0x0) && (__ZN3lib8L2CValueC1Ef < 0x46)) {
    do {
      uVar3 = __ZN3lib8L2CValueC1Ef;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x71002d90c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        __ZN3lib8L2CValueC1Ef = __ZN3lib8L2CValueC1Ef + 1;
      }
    } while (cVar1 != '\0');
    if (0x45 < uVar3) {
      return 0xffffffff;
    }
    uVar4 = 0;
    (&PTR_~GraphicsModule_71002d8950)[uVar3 * 3] = param_1;
    (&PTR_operator-_71002d8958)[uVar3 * 3] = param_2;
    (&PTR_LOOP_71002d8960)[uVar3 * 3] = param_3;
  }
  return uVar4;
}

