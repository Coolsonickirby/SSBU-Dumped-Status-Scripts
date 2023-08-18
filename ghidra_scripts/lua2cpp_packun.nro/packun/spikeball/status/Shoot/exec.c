
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPackunSpikeball::status::Shoot_exec(L2CWeaponPackunSpikeball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  L2CAgent *this_00;
  L2CValue *pLVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0xf679aaf13);
  lib::L2CValue::L2CValue(aLStack64,0xf5057a686);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  uVar10 = app::sv_kinetic_energy::get_accel(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack64,aLStack144);
  lib::L2CValue::L2CValue(aLStack80,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
  bVar1 = app::WeaponSpecializer_PackunSpikeball::is_shoot_status_founder(pWVar7);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(pLVar6,aLStack64);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_PACKUN_SPIKEBALL_STATUS_SHOOT_WORK_FLOAT_ADD_ACCEL_X)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar6 = (L2CValue *)0x18cdc1683;
    this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CAgent::math_abs(this_00,pLVar6);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_71000422bc;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack64,pLVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      lib::L2CValue::operator_(pLVar6,aLStack96);
      goto LAB_71000422bc;
    }
    lib::L2CValue::operator_(aLStack96);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_71000422bc:
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

