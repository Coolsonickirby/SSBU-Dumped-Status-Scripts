
void __thiscall
L2CFighterRidley::status::SpecialHiChargeLw_main(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x18d6530202);
  lib::L2CValue::L2CValue(aLStack64,0xf6082ca4f);
  lib::L2CValue::L2CValue(aLStack80,0x102335c88f);
  lib::L2CValue::L2CValue(aLStack96,0xfd01b8a9b);
  FUN_710001a820(this,aLStack48,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack112,SpecialHiChargeLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

