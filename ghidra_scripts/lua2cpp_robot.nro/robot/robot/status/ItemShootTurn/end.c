
void __thiscall
L2CFighterRobot::status::ItemShootTurn_end(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Fighter *pFVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_ItemShootTurn_New(this);
  lib::L2CValue::_L2CValue(aLStack48);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar1 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Robot::reset_item_have_motion(pFVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

