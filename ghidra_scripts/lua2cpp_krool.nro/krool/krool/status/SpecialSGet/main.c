
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialSGet_main(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  BattleObjectModuleAccessor *pBVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialSGet_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

