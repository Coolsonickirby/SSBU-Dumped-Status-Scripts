
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSReflected_main_loop
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  undefined8 uVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_RIGHT_SIDE | _GROUND_TOUCH_FLAG_LEFT_SIDE);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_ROTATE);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    FUN_710001f640(this);
    FUN_7100020080(aLStack128,this);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    uVar6 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack64,aLStack176);
    lib::L2CValue::L2CValue(aLStack80,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x40);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::operator_(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_VANISH);
    lib::L2CValue::L2CValue(aLStack64,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

