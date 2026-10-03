
void __thiscall L2CFighterJack::~~L2CFighterJack(L2CFighterJack *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_71000009e0(this);
  operator.delete(this);
  return;
}

