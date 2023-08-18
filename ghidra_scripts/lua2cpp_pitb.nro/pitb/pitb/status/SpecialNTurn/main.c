
void __thiscall
L2CFighterPitb::status::SpecialNTurn_main(L2CFighterPitb *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack48,SpecialNTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

