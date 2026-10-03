
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000255a0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_ENABLE_WITCH_TIME_CANCEL)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_INT_WITCH_TIME_CANCEL_FRAME)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,0);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        app::lua_bind::CancelModule__enable_cancel_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::operator=(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::operator=(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

