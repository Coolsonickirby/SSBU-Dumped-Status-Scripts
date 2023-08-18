
void __thiscall
L2CWeaponWiifitSunbullet::status::Hold_end(L2CWeaponWiifitSunbullet *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1376a59b51);
    HVar2 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar2,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x16cc99f89f);
    HVar2 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar2,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

