
void __thiscall
L2CFighterSamusd::status::CatchTurn_end(L2CFighterSamusd *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchTurn(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710001ac90(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

