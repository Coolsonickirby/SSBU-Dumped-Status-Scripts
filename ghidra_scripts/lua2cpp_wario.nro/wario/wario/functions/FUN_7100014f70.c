
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014f70(long param_1)

{
  byte bVar1;
  bool bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack80);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      FUN_7100014850(param_1);
    }
  }
  return;
}

