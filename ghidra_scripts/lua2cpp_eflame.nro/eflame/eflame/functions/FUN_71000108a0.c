
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000108a0(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack64,0x19e219cd48);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  HVar2 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,HVar2,-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  return;
}

