
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioAuraball::status::Charge_end(L2CWeaponLucarioAuraball *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_STATUS_KIND_NONE);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,5);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

