
void __thiscall
L2CFighterDedede::status::SpecialNShotObjectHit_end(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Fighter *pFVar1;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar1 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Dedede::end_special_n_shot_object_hit(pFVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

