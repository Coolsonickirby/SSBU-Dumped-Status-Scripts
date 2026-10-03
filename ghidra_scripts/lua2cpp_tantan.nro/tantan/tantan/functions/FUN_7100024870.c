
void FUN_7100024870(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x9fece0d5d);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xb4fb275bd);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      HVar2 = 0x171c51ff07;
      goto LAB_7100024914;
    }
    uVar1 = 0xf254fb34;
  }
  else {
    uVar1 = 0xe235c32d;
  }
  HVar2 = uVar1 | 0x1500000000;
LAB_7100024914:
  lib::L2CValue::L2CValue(param_1,HVar2);
  return;
}

