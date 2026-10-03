
void FUN_7100018230(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x13e7f9f0d5);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x12f99e78ac);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x1333b8cf0a);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0x122ddf4773);
          uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar1 & 1) == 0) goto LAB_710001827c;
        }
      }
    }
    bVar2 = true;
  }
  else {
LAB_710001827c:
    bVar2 = false;
  }
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

