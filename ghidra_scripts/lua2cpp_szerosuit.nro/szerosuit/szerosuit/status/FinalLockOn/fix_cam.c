
void __thiscall
L2CFighterSzerosuit::status::FinalLockOn_fix_cam(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  BattleObjectModuleAccessor *pBVar1;
  float fVar2;
  float fVar3;
  
  this_00 = &this->globalTable;
  this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  this_03 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
  pBVar1 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_01);
  fVar2 = (float)lib::L2CValue::as_number(this_02);
  fVar3 = (float)lib::L2CValue::as_number(this_03);
  app::FighterSpecializer_SZerosuit::update_reticle(pBVar1,fVar2,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

