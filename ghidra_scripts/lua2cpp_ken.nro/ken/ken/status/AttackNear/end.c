
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::AttackNear_end(L2CFighterKen *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,lVar2);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
    lVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

