
void __thiscall
L2CFighterMurabito::status::Catch_end(L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_71000091a0();
  lua2cpp::L2CFighterCommon::status_end_Catch(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

