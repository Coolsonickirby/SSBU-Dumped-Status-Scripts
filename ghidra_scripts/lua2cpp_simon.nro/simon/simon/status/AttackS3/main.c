
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSimon::status::AttackS3_main(L2CFighterSimon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackS3Common(this);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SIMON_STATUS_ATTACK_FLAG_ENABLE_HOLD_INPUT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,AttackS3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

