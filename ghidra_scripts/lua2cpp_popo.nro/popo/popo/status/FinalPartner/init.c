
void __thiscall
L2CFighterPopo::status::FinalPartner_init(L2CFighterPopo *this,L2CValue *return_value)

{
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar1;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar1 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Popo::init_final_partner(pBVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

