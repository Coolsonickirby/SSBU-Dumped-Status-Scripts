
void __thiscall
L2CFighterInkling::status::SpecialNEnd_main(L2CFighterInkling *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0xd20cd6527);
  lib::L2CValue::L2CValue(aLStack64,0x11c0a0c60e);
  lib::L2CValue::L2CValue(aLStack80,false);
  FUN_710002c750(this,aLStack48,aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack96,SpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

