
void __thiscall L2CFighterGamewatch::~~L2CFighterGamewatch(L2CFighterGamewatch *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x238));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_7100000870(this);
  operator.delete(this);
  return;
}

