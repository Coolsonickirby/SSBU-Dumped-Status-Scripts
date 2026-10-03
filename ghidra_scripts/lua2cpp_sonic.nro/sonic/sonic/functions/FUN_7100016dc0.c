
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016dc0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_SPECIAL_LW_HOLD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_WORK_INT_SPECIAL_LW_CHARGE_LEVEL);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0x1cd6bc000d);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar5 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,-1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0x20ab29b2f3);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar5 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,-1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack96,0x1c48dff86a);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar5 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,-1);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

