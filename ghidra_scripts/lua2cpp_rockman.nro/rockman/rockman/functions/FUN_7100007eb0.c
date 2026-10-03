
void __thiscall FUN_7100007eb0(L2CFighterRockman *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  lib::L2CValue::L2CValue(aLStack80,in_x2);
  lib::L2CValue::L2CValue(aLStack48,0x9fece0d5d);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
LAB_7100007f3c:
    lib::L2CValue::L2CValue(aLStack48,0xb4fb275bd);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack48,0x108b812cf4);
      uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar2 & 1) != 0) goto LAB_7100007f9c;
    }
    lib::L2CValue::L2CValue(aLStack48,0x9eeaf3544);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack48,0xe95bcfaf7);
      bVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0xe85ddc2ee);
    uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) goto LAB_7100007f3c;
LAB_7100007f9c:
    bVar1 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

