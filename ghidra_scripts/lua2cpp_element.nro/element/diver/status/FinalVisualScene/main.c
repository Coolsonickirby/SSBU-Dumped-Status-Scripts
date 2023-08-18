
void __thiscall
L2CWeaponElementDiver::status::FinalVisualScene_main
          (L2CWeaponElementDiver *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Weapon *pWVar1;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar1 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  app::WeaponSpecializer_ElementDiver::constraint(pWVar1);
  lib::L2CValue::L2CValue(aLStack48,FinalVisualScene_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

