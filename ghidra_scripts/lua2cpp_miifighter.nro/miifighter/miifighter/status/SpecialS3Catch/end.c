
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialS3Catch_end(L2CFighterMiifighter *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_S3_FALL);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

