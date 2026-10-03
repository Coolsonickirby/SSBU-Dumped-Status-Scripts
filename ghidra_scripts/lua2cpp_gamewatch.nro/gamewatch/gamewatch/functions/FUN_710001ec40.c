
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ec40(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,(uint)bVar1);
  return;
}

