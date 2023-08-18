
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Landing_main(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLAG_AUTO_TURN_END_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0x25b26d0735);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack112,0x2588326113);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_LANDING_WORK_INT_RESET_COMMAND_3);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_3);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
                (this->moduleAccessor,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_LANDING_WORK_INT_RESET_COMMAND_9);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_9);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
                (this->moduleAccessor,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_1);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_7);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_Landing(this);
  return;
}

