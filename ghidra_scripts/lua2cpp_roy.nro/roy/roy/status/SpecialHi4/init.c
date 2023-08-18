
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialHi4_init(L2CFighterRoy *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

