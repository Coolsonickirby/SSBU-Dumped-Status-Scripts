
void __thiscall
L2CFighterSnake::status::SpecialNHoldLanding_exit(L2CFighterSnake *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue aLStack48 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack48,pLVar1);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessShoot_exitShoot_Common(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

