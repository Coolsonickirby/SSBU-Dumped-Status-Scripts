
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchFood::status::Move_exec(L2CWeaponGamewatchFood *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    uVar9 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack144,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack176,0xa663a1bc0);
      lib::L2CValue::L2CValue(aLStack192,0xf64de2155);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar8);
      lib::L2CValue::operator_(aLStack160);
      lib::L2CValue::operator_(pLVar4,aLStack96);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      lib::L2CValue::operator_(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

