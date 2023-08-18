
void __thiscall
L2CWeaponPickelPlate::status::On_main(L2CWeaponPickelPlate *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x45f3a1664);
  HVar2 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (this->moduleAccessor,HVar2,-1.0,1.0,0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::MotionModule__set_reverse_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,On_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

