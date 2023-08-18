
void __thiscall
L2CFighterKirby::status::PickelSpecialN1Walk_end(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Walk(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_WALK);
  FUN_710012d380(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

