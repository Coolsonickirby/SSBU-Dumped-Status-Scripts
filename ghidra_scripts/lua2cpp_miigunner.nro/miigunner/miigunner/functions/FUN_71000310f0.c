
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000310f0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ControlModule__check_button_off_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MIIGUNNER_STATUS_GRENADE_LAUNCHER_WORK_INT_HOLD_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x110a4a2671);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100031350;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_STATUS_GRENADE_LAUNCHER_FLAG_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_MIIGUNNER_STATUS_GRENADE_LAUNCHER_WORK_INT_HOLD_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100031350:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

