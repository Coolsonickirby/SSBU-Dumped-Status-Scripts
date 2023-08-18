
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWiifit::status::Landing_main(L2CFighterWiifit *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar2;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lua2cpp::L2CFighterCommon::sub_landing_start_check_damage_face(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

