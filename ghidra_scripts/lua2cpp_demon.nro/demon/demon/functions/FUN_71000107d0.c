
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000107d0(L2CValue *param_1,long param_2)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_7);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_COMMAND_7);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar2 = (float)app::lua_bind::FighterControlModuleImpl__get_special_command_lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

