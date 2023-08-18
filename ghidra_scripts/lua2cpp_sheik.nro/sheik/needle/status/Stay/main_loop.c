
void __thiscall
L2CWeaponSheikNeedle::status::Stay_main_loop(L2CWeaponSheikNeedle *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar2 = lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

