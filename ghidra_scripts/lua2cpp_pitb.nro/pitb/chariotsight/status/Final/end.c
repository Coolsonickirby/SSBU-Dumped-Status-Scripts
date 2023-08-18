
void __thiscall
L2CWeaponPitbChariotsight::status::Final_end(L2CWeaponPitbChariotsight *this,L2CValue *return_value)

{
  Hash40 HVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0xedc4666a3);
  HVar1 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar1,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

