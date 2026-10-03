
undefined8 FUN_7100000300(undefined *param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xffffffff;
  if ((param_3 != (undefined *)0x0) && (DAT_71001596e8 < 0x33)) {
    do {
      uVar3 = DAT_71001596e8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x71001596e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_71001596e8 = DAT_71001596e8 + 1;
      }
    } while (cVar1 != '\0');
    if (0x32 < uVar3) {
      return 0xffffffff;
    }
    uVar4 = 0;
    (&PTR_~GraphicsModule_7100159130)[uVar3 * 3] = param_1;
    (&PTR_DAT_7100159138)[uVar3 * 3] = param_2;
    (&PTR_LOOP_7100159140)[uVar3 * 3] = param_3;
  }
  return uVar4;
}

