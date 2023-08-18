
void __thiscall
L2CFighterPikmin::status::CatchTurn_main(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  FUN_7100012b10(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::sub_status_CatchTurn(this);
  lib::L2CValue::L2CValue(aLStack64,CatchTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

