
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b800(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_FINAL_FLAG_DISP_WINDOW_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack48,true);
  uVar3 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,false);
    bVar1 = lib::L2CValue::as_bool(aLStack48);
    app::FighterSpecializer_Cloud::display_final_window((bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

