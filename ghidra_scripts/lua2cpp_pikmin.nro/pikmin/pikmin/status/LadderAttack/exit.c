
void __thiscall
L2CFighterPikmin::status::LadderAttack_exit(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessGimmickLadder_exit_status(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100008380(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

