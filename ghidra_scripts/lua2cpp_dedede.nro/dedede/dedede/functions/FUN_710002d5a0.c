
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002d5a0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar4 = (L2CValue *)(param_1 + 200);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) goto LAB_710002d5f4;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::~L2CValue(aLStack80);
      return;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
LAB_710002d5f4:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  FUN_710002d750(param_1);
  return;
}

