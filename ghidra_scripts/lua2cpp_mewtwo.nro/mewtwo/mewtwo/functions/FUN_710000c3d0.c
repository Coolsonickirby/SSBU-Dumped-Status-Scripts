
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000c3d0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  bool bVar4;
  L2CValue *this;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_710000c4b4;
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar3 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar3 = aLStack112;
    }
    lib::L2CValue::~L2CValue(pLVar3);
    bVar4 = true;
    goto LAB_710000c670;
  }
LAB_710000c4b4:
  this = (L2CValue *)((long)param_2 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](this,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
LAB_710000c52c:
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](this,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](this,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) != 0) goto LAB_710000c59c;
    }
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](this,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_710000c52c;
LAB_710000c59c:
    lib::L2CValue::L2CValue(aLStack176,false);
    lib::L2CValue::L2CValue(aLStack192,true);
    lib::L2CValue::L2CValue(aLStack208,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    FUN_710000b090(param_2,aLStack176,aLStack192,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  bVar4 = false;
LAB_710000c670:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

