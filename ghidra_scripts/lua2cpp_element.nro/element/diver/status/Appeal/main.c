
void __thiscall
L2CWeaponElementDiver::status::Appeal_main(L2CWeaponElementDiver *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::SoundModule__set_auto_se_pitch_impl(this->moduleAccessor,fVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,Appeal_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

