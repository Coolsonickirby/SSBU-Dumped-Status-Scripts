
void __thiscall L2CFighterSnake::status::Appeal_main(L2CFighterSnake *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Appeal_Common(this);
  lib::L2CValue::L2CValue(aLStack48,Appeal_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

