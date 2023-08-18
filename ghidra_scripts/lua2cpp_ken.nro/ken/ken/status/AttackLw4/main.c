
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::AttackLw4_main(L2CFighterKen *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  FUN_7100020340();
  lua2cpp::L2CFighterCommon::status_AttackLw4_common(this);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_RYU_STATUS_ATTACK_FLAG_HIT_CANCEL);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,AttackLw4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

