
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015440(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x13b33e8d03);
    FUN_7100013a80(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_INT_SCREEN_EFFECT_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator-(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack112,0x23295adaf1);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        HVar4 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,HVar4,-1);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_INT_SCREEN_EFFECT_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

