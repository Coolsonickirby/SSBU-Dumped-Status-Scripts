
void __thiscall
L2CFighterMurabito::status::AttackLw4_end(L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100009520();
  lua2cpp::L2CFighterCommon::status_end_AttackLw4(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

