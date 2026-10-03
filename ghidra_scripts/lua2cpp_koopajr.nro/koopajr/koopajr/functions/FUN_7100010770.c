
void __thiscall FUN_7100010770(L2CFighterKoopajr *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_landing_uniq_check(this);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

