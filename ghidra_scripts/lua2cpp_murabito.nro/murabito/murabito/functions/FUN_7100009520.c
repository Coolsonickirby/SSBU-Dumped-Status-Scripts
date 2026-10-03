
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009520(long param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_LW4_HOLD);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_LW4);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x41f1b251e);
      lib::L2CValue::L2CValue(aLStack80,0x9b7a04434);
      lVar3 = lib::L2CValue::as_integer(aLStack64);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

