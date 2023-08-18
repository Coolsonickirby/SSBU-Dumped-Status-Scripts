
void __thiscall L2CFighterWolf::status::FinalReady_exec(long this)

{
  L2CValue *this_00;
  Fighter *pFVar1;
  L2CValue *return_value;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),4);
  pFVar1 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Fox::final_ready_exec(pFVar1);
  lib::L2CValue::L2CValue(return_value,0);
  return;
}

