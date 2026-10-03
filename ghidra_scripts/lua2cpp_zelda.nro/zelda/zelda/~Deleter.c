
void __thiscall L2CFighterZelda::~~L2CFighterZelda(L2CFighterZelda *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 600));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x248));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x238));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_7100001200(this);
  operator.delete(this);
  return;
}

