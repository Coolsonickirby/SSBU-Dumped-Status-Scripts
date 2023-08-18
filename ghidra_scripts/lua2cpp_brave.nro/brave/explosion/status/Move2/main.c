
void __thiscall
L2CWeaponBraveExplosion::status::Move2_main(L2CWeaponBraveExplosion *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x544e47934);
  FUN_710003db40(this,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,Move2_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

