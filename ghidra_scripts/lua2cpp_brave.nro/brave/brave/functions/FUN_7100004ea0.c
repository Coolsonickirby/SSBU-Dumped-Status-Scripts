
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004ea0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  Hash40 HVar6;
  Fighter *pFVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_START_BLINK);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    lib::L2CValue::L2CValue(aLStack128,0x20bbfb45c1);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    iVar2 = app::FighterSpecializer_Brave::get_special_lw_param_frame(pBVar5,HVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
      pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
      app::FighterSpecializer_Brave::special_lw_start_cursor_blink(pFVar7);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_START_BLINK);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_AUTO_CANCEL);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
    lib::L2CValue::L2CValue(aLStack128,0x1937f8dc47);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    iVar2 = app::FighterSpecializer_Brave::get_special_lw_param_frame(pBVar5,HVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_AUTO_CANCEL);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

