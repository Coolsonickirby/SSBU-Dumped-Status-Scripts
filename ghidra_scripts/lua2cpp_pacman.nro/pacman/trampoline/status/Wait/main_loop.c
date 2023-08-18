
void __thiscall
L2CWeaponPacmanTrampoline::status::Wait_main_loop
          (L2CWeaponPacmanTrampoline *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack64 [16];
  
  FUN_7100048870(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = (bVar1 & 1U) == 0;
  if (bVar1) {
    FUN_7100048a30(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

