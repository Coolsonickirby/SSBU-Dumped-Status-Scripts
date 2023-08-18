
void __thiscall
L2CFighterRockman::status::RockbusterShootJump_main(L2CFighterRockman *this,L2CValue *return_value)

{
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::L2CValue(aLStack80,aLStack48);
  lib::L2CValue::L2CValue(aLStack96,aLStack64);
  lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
  lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
  FUN_710000eb30(this,aLStack80,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,RockbusterShootJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

