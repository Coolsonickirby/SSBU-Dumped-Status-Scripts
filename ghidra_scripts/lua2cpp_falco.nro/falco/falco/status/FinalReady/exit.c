
void __thiscall
L2CFighterFalco::status::FinalReady_exit(L2CFighterFalco *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Fighter *pFVar1;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar1 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Falco::final_ready_exit(pFVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

