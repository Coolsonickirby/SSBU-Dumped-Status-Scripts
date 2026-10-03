
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000d590(L2CFighterPeach *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT_START);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lua2cpp::L2CFighterCommon::status_AttackAir(this);
      lib::L2CValue::~L2CValue(aLStack80);
      goto LAB_710000d654;
    }
  }
  FUN_710000d4d0(this);
LAB_710000d654:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

