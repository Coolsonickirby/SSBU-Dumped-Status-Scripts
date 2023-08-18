
void __thiscall
L2CFighterPfushigisou::status::CatchPull_main(L2CFighterPfushigisou *this,L2CValue *return_value)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_7100008630(aLStack48,this);
  lib::L2CValue::L2CValue(aLStack64,aLStack48);
  lua2cpp::L2CFighterCommon::status_CatchPull_common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,CatchPull_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

