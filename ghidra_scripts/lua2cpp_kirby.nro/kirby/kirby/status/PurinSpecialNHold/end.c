
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNHold_end(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL_AIR);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_71000955e4;
  }
  FUN_71001c02f0(this);
LAB_71000955e4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

