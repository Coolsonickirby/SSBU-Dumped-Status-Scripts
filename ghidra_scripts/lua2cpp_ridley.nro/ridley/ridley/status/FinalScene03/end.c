
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::FinalScene03_end(L2CFighterRidley *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  Fighter *pFVar2;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_RIDLEY_FINAL_MODULE_SCENE_03_EXIT);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::FighterSpecializer_Ridley::call_final_module(pFVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

