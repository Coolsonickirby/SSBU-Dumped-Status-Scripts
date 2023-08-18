
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::FinalReady_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_FINAL_FLAG_CLEAR_SLOW);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_NONE);
  GVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalReady_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

