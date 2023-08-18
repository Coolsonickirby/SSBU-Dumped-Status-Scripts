
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLwHold_end(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_KIND_SPECIAL_LW_ENDURE);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    fVar2 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::DamageModule__set_damage_mul_2nd_impl(this->moduleAccessor,fVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

