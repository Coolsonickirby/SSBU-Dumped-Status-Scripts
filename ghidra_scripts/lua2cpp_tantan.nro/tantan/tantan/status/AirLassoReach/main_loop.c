
void __thiscall
L2CFighterTantan::status::AirLassoReach_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_air_lasso_reach_main(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0xe574b05fe);
  lib::L2CValue::L2CValue(aLStack80,0x15236e9179);
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_71000279c0(aLStack48,this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

