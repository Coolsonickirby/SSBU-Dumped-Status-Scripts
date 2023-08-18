
void __thiscall
L2CFighterWario::status::SpecialS_main_loop(L2CFighterWario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
LAB_71000133c8:
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack48,0);
    uVar1 = lib::L2CValue::operator__(aLStack64,aLStack48);
    lib::L2CValue::_L2CValue(aLStack48);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      iVar2 = 0;
      goto LAB_7100013418;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack48,0);
    uVar1 = lib::L2CValue::operator__(aLStack64,aLStack48);
    lib::L2CValue::_L2CValue(aLStack48);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) goto LAB_71000133c8;
  }
  iVar2 = 1;
LAB_7100013418:
  lib::L2CValue::L2CValue(aLStack48,iVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

