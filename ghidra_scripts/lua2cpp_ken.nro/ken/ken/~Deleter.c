
void __thiscall L2CFighterKen::~~L2CFighterKen(L2CFighterKen *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_7100000e70(this);
  operator.delete(this);
  return;
}

