
void FUN_7100024af0(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x15e235c32d);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x171c51ff07);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      HVar2 = 0xb4fb275bd;
      goto LAB_7100024b94;
    }
    uVar1 = 0xeeaf3544;
  }
  else {
    uVar1 = 0xfece0d5d;
  }
  HVar2 = uVar1 | 0x900000000;
LAB_7100024b94:
  lib::L2CValue::L2CValue(param_1,HVar2);
  return;
}

