
void __thiscall
L2CWeaponRidleyBreath::status::Vanish_main_loop(L2CWeaponRidleyBreath *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,5);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar3 = lib::L2CValue::operator_(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

