
void __thiscall
L2CFighterMaster::status::LadderAttack_end(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710001c660();
  lua2cpp::L2CFighterCommon::status_end_LadderAttack(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

