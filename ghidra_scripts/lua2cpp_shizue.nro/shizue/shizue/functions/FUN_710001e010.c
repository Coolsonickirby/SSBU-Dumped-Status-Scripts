
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e010(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_EFFECT_SMOKE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    fVar5 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack48,fVar5);
    lib::L2CValue::operator=(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    uVar3 = app::lua_bind::MotionModule__end_frame_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,uVar3);
    lib::L2CValue::operator-(aLStack96,aLStack64);
    lib::L2CValue::L2CValue(aLStack48,6);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      FUN_710001d7f0(param_1);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

