
void __thiscall L2CFighterPacman::status::Fall_main(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0);
  lua2cpp::L2CFighterCommon::status_FallSub(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710001bd50(this);
  lib::L2CValue::L2CValue(aLStack64,Fall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

