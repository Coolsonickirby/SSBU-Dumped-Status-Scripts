
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntKurofukuhat::status::Move_main_loop
          (L2CWeaponDuckhuntKurofukuhat *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  undefined8 uVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_ALL);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar5 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar5);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar5 >> 0x20));
    lib::L2CValue::L2CValue(aLStack64,aLStack160);
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(aLStack96,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack112,pLVar4);
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

