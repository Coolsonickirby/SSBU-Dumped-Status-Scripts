
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018470(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_710000fec0(aLStack80,param_2,aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar1 & 1U) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_LANDING);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(param_1,0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

