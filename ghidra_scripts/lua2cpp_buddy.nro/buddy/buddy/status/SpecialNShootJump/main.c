
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootJump_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  Fighter *pFVar4;
  L2CValue aLStack64 [16];
  
  app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_y_impl(this->moduleAccessor);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
  lib::L2CValue::L2CValue(aLStack64,0xfe);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100028800(this);
  FUN_71000259e0(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar4,false);
  lib::L2CValue::L2CValue(aLStack64,SpecialNShootJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

