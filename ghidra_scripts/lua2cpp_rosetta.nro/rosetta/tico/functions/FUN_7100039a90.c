
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039a90(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  L2CValue *this;
  ulong uVar2;
  int iVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100039930(aLStack96);
  lib::L2CValue::operator!(aLStack96);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) {
      FUN_7100038e30(aLStack80,param_2);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_STATUS_KIND_DOWN);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      iVar3 = 1;
      goto LAB_7100039bb8;
    }
  }
  iVar3 = 0;
LAB_7100039bb8:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

