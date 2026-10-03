
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000168c0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_FINAL_FLAG_DISP_WINDOW);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CLOUD_STATUS_FINAL_FLAG_DISP_WINDOW_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  uVar3 = lib::L2CValue::operator==(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::FighterSpecializer_Cloud::display_final_window((bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_FINAL_FLAG_DISP_WINDOW_PREV);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_flag_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

