
void FUN_7100062da0(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  
  HVar2 = 0x7fb997a80;
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) goto LAB_7100062efc;
  lib::L2CValue::L2CValue(aLStack64,0x11ca8ff366);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    HVar2 = 0x16d3aa0568;
    goto LAB_7100062efc;
  }
  lib::L2CValue::L2CValue(aLStack64,0x13e7f9f0d5);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x12f99e78ac);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0x1e3f705d;
LAB_7100062eb4:
      HVar2 = uVar1 | 0x1700000000;
      goto LAB_7100062efc;
    }
    lib::L2CValue::L2CValue(aLStack64,0x149b8c5130);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0x98f0ee5f;
LAB_7100062ef4:
      HVar2 = uVar1 | 0x1900000000;
      goto LAB_7100062efc;
    }
    lib::L2CValue::L2CValue(aLStack64,0x13b24bff20);
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
        if ((uVar1 & 1) != 0) {
          uVar1 = 0xca7e4f82;
          goto LAB_7100062eb4;
        }
        lib::L2CValue::L2CValue(aLStack64,0x148d34df4a);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) != 0) {
          uVar1 = 0x8e486025;
          goto LAB_7100062ef4;
        }
        lib::L2CValue::L2CValue(aLStack64,0x13a4f3715a);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) goto LAB_7100062efc;
        uVar1 = 0x6eae12d8;
      }
      else {
        uVar1 = 0xf9e5ac88;
      }
    }
    else {
      uVar1 = 0x78169ca2;
    }
  }
  else {
    uVar1 = 0x2da49357;
  }
  HVar2 = uVar1 | 0x1800000000;
LAB_7100062efc:
  lib::L2CValue::L2CValue(param_1,HVar2);
  return;
}

