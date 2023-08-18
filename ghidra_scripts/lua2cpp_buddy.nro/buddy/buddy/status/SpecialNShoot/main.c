
void __thiscall
L2CFighterBuddy::status::SpecialNShoot_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  Fighter *pFVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_71000259e0(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar2,false);
  lib::L2CValue::L2CValue(aLStack64,SpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

