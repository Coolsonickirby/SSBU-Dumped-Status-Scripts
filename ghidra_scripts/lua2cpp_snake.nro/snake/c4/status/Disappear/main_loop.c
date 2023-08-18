
void __thiscall
L2CWeaponSnakeC4::status::Disappear_main_loop(L2CWeaponSnakeC4 *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,5);
  uVar3 = lib::L2CValue::operator_(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack80,0x27936db96d);
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

