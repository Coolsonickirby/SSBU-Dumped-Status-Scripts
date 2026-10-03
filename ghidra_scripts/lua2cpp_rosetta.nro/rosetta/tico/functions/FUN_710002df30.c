
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002df30(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  ulong uVar1;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,param_3);
  FUN_710002e060(aLStack80,param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_NONE);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,aLStack80);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(param_1,1);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

