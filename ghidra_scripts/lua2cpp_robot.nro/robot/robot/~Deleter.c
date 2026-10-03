
void __thiscall L2CFighterRobot::~~L2CFighterRobot(L2CFighterRobot *this)

{
  *(undefined ***)this = &vtable;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x238));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x228));
  FUN_7100002ca0(this);
  operator.delete(this);
  return;
}

