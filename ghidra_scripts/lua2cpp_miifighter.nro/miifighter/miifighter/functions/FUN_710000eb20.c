
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000eb20(L2CFighterMiifighter *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,in_x1);
  lib::L2CValue::L2CValue(aLStack96,in_x2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x81b51c4e0);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x81b51c4e0);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x81b51c4e0);
      lib::L2CValue::L2CValue(aLStack64,2);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) goto LAB_710000ecf0;
    }
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x10860c2250);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack64,COLLISION_KIND_HIT);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xa854977fe);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_INT_TENCHI_KICK_FALL_HIT_OBJECT_ID);
      iVar1 = lib::L2CValue::as_integer(pLVar3);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
LAB_710000ecf0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

