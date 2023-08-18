
void __thiscall
L2CFighterJack::status::SpecialLwEnd_main(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lib::L2CValue::L2CValue(aLStack64,0xee8a2e8a2);
  lib::L2CValue::L2CValue(aLStack80,0x12aaf01d6d);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100007e70);
  FUN_7100007400(this,aLStack48,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack112,SpecialLwEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

