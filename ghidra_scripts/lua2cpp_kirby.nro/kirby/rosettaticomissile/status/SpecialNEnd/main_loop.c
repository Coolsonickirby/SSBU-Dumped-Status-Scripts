
void __thiscall
L2CWeaponKirbyRosettaticomissile::status::SpecialNEnd_main_loop
          (L2CWeaponKirbyRosettaticomissile *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar3 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,10.0);
  uVar2 = lib::L2CValue::operator__(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar1);
  return;
}

