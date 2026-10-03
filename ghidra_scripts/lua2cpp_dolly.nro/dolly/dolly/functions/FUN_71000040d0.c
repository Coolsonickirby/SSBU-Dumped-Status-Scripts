
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000040d0(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar1 = lib::L2CValue::operator==(this_00,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    FUN_7100005bc0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar1 & 1) != 0) {
      bVar2 = true;
      goto LAB_710000417c;
    }
  }
  bVar2 = false;
LAB_710000417c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar2);
  return;
}

