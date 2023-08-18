
void __thiscall
L2CWeaponTantanPunch3::status::Back_exec_stop(L2CWeaponTantanPunch3 *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  FUN_7100087510(aLStack64,aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    FUN_71000866e0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

