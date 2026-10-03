
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000275a0(long param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_N_2);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_YOSHI_SPECIAL_N_2);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      app::lua_bind::CatchModule__catch_cut_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),false,false);
    }
  }
  return;
}

