
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterIke::status::Final_main(L2CFighterIke *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::KineticUtility::clear_unable_energy(iVar2,pBVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_IKE_STATUS_FINAL_FLAG_CONTINUE_MOT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_IKE_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_HIT_LINK);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_IKE_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100015750(this);
  lib::L2CValue::L2CValue(aLStack96,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

