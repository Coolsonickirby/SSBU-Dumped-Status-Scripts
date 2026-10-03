
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023670(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_ALL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_ENABLE_FINISH_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    goto LAB_7100023adc;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_ALL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0xfbad6aa9f);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_7100023adc;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_TRIGGER_BUTTON);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_710002390c:
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x20);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator&(this,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_FLICK_JUMP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100023adc;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_END);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(param_1,false);
      }
      else {
        lib::L2CValue::L2CValue(param_1,true);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(param_1,true);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_710002390c;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(param_1,true);
  }
LAB_7100023adc:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

