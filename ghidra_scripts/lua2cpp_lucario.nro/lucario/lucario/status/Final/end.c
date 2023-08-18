
void __thiscall L2CFighterLucario::status::Final_end(L2CFighterLucario *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__clear_screen_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Lucario::effect_suspend(pBVar3);
  FUN_7100010d30(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

