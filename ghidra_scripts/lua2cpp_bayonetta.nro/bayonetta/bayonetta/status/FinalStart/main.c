
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalStart_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_DISABLE_OUTSIDE_ENERGY);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x174ddd0aac);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  fVar6 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::MotionAnimcmdModule__set_sleep_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FinalStart_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

