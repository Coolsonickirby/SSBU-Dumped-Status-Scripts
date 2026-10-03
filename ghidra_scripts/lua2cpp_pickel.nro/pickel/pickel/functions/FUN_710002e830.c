
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e830(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  L2CTable *this;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  int iVar4;
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue *local_78;
  L2CValue *local_70;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,3);
  lib::L2CValue::L2CValue(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_WAIT);
  lib::L2CValue::L2CValue((L2CValue *)&local_78,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_WALK);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_WALK_BACK);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,1);
  lib::L2CValue::operator=(pLVar1,aLStack152);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,2);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_78);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,3);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_78);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CAgent::ipairs(param_2,aLStack96);
  pLVar1 = local_70;
  if (local_78 == local_70) {
    iVar4 = 2;
    pLVar1 = local_78;
  }
  else {
    pLVar3 = local_78;
    do {
      lib::L2CValue::L2CValue(aLStack152,pLVar3);
      lib::L2CValue::L2CValue(aLStack136,pLVar3 + 0x10);
      lib::L2CValue::L2CValue(aLStack80,aLStack152);
      lib::L2CValue::L2CValue(aLStack168,aLStack136);
      uVar2 = lib::L2CValue::operator==(aLStack168,param_3);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::L2CValue(param_1,true);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack152);
        iVar4 = 1;
        pLVar1 = local_78;
        goto joined_r0x00710002e9a8;
      }
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack152);
      pLVar3 = pLVar3 + 0x20;
    } while (pLVar3 != pLVar1);
    iVar4 = 2;
    pLVar1 = local_78;
  }
joined_r0x00710002e9a8:
  local_78 = pLVar1;
  if (pLVar1 != (L2CValue *)0x0) {
    while (local_70 != pLVar1) {
      pLVar3 = local_70 + -0x10;
      local_70 = local_70 + -0x20;
      lib::L2CValue::~L2CValue(pLVar3);
      lib::L2CValue::~L2CValue(local_70);
    }
    operator.delete(local_78);
  }
  if (iVar4 == 2) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

