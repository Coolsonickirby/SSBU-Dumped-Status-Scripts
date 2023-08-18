
void __thiscall
L2CFighterToonlink::status::CatchTurn_end(L2CFighterToonlink *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchTurn(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100009ef0(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

