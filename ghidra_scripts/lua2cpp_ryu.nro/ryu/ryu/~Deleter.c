
void __thiscall L2CFighterRyu::~~L2CFighterRyu(L2CFighterRyu *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_7100000e30(this);
  operator.delete(this);
  return;
}

