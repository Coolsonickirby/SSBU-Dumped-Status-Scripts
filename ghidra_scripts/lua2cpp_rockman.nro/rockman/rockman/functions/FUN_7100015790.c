
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015790(L2CValue *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  bool bVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar4 = (L2CValue *)(param_2 + 200);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) goto LAB_71000157e8;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) != 0) goto LAB_71000157f0;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack80);
    }
    bVar5 = false;
  }
  else {
LAB_71000157e8:
    lib::L2CValue::~L2CValue(aLStack80);
LAB_71000157f0:
    bVar5 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar5);
  return;
}

