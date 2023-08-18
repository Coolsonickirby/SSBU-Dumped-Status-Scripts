
void __thiscall
L2CFighterPfushigisou::status::SpecialNLoop_main(L2CFighterPfushigisou *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lib::L2CValue::L2CValue(aLStack64,0x915c5de42);
  lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
  FUN_7100007240(this,aLStack48,aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack96,SpecialNLoop_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

