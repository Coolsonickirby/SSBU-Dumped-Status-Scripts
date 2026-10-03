
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012160(long param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_INT_FRAME_FROM_START);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x12b9447632);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
      uVar1 = lib::L2CValue::as_integer(aLStack112);
      uVar3 = app::lua_bind::ControlModule__get_trigger_count_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
      lib::L2CValue::L2CValue(aLStack96,uVar3 & 0xff);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
        uVar1 = lib::L2CValue::as_integer(aLStack144);
        uVar3 = app::lua_bind::ControlModule__get_trigger_count_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
        lib::L2CValue::L2CValue(aLStack128,uVar3 & 0xff);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar4 & 1) == 0) goto LAB_710001236c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_SPREADBULLET);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
LAB_710001236c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

