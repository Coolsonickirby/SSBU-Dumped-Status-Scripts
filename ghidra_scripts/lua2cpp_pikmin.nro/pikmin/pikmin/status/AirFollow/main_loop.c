
void __thiscall
L2CWeaponPikminPikmin::status::AirFollow_main_loop
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack64 [16];
  
  FUN_710004ab50();
  FUN_710004af50(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,&DAT_710004b450);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

