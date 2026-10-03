
void __thiscall FUN_7100010c20(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue *in_x1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,in_x1);
  lib::L2CValue::L2CValue(aLStack64,aLStack80);
  lua2cpp::L2CFighterCommon::sub_escape_air_uniq(this,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

