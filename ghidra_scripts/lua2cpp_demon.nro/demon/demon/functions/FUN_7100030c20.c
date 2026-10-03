
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100030c20(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_623_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_SPECIAL_HI_COMMAND);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_623NB);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_623NB);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_623STRICT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_623STRICT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_623ALONG);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_623ALONG);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_623BLONG);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_623BLONG);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_623A);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar1 = app::lua_bind::FighterControlModuleImpl__special_command_step_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar3 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT4_COMMAND_623A);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::FighterControlModuleImpl__reset_special_command_individual_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

