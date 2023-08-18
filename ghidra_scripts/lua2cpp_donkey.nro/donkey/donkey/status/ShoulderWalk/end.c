
void __thiscall
L2CFighterDonkey::status::ShoulderWalk_end(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar2;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack48,false);
  pFVar2 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::FighterSpecializer_Donkey::apply_lift_param(pFVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

