
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Turn_main(L2CFighterDemon *this,L2CValue *return_value)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x1a81ed0eaa);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack112,0x1a67c4c5ee);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x1a8cf37eed);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_1);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::FighterControlModuleImpl__set_special_command_life_max_impl
            (this->moduleAccessor,iVar3,uVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_4);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::FighterControlModuleImpl__set_special_command_life_max_impl
            (this->moduleAccessor,iVar3,uVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_7);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::FighterControlModuleImpl__set_special_command_life_max_impl
            (this->moduleAccessor,iVar3,uVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_1);
  lib::L2CValue::L2CValue(aLStack128,true);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar2 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::FighterControlModuleImpl__set_special_command_life_impl
            (this->moduleAccessor,iVar3,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_7);
  lib::L2CValue::L2CValue(aLStack128,true);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar2 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::FighterControlModuleImpl__set_special_command_life_impl
            (this->moduleAccessor,iVar3,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_1);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_4);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_7);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lua2cpp::L2CFighterCommon::status_Turn(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

