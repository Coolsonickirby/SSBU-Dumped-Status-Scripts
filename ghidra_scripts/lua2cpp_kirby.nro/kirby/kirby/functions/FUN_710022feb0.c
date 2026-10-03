
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710022feb0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    bVar1 = app::lua_bind::StopModule__is_stop_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_WEAPON_HOLD_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__dec_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x15);
    lib::L2CValue::L2CValue(aLStack64,FUN_71002316c0);
    lib::L2CValue::operator=(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

