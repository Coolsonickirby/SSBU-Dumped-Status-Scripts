
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001aa80(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  int iVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)((long)param_2 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
LAB_710001ab18:
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_DASH);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
LAB_710001ac20:
      iVar5 = 0;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710001ac20;
      bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_710001ac20;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar5 = 1;
    }
    lib::L2CValue::L2CValue(aLStack112,iVar5);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      iVar5 = 0;
      goto LAB_710001ac70;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) goto LAB_710001ab18;
  }
  iVar5 = 1;
LAB_710001ac70:
  lib::L2CValue::L2CValue(param_1,iVar5);
  return;
}

