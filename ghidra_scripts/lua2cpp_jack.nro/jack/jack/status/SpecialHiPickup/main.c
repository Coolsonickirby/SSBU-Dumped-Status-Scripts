
void __thiscall
L2CFighterJack::status::SpecialHiPickup_main(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,0xe51249e96);
  lib::L2CValue::L2CValue(aLStack112,0x1213766b59);
  FUN_7100008540(this,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb0a444a09);
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialHiPickup_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

