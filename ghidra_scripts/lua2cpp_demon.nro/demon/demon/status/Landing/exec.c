
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::LandingLight_exec(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_LANDING_WORK_INT_RESET_COMMAND_3);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_3);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_LANDING_WORK_INT_RESET_COMMAND_9);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_9);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

