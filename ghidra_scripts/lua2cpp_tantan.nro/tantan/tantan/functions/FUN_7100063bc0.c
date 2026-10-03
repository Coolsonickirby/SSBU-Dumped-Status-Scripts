
void __thiscall FUN_7100063bc0(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *in_x1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,in_x1);
  lib::L2CValue::L2CValue(aLStack48,aLStack80);
  lib::L2CValue::L2CValue(aLStack64,CONTROL_PAD_BUTTON_SPECIAL);
  lua2cpp::L2CFighterCommon::sub_attack_100_uniq_check_button(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

