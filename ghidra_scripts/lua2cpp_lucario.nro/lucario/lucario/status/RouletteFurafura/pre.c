
void __thiscall
L2CFighterLucario::status::RouletteFurafura_pre(L2CFighterLucario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_RouletteFuraFura(this);
  lib::L2CValue::_L2CValue(aLStack48);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar1 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Lucario::effect_suspend(pBVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

