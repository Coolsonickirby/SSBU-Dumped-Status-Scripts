
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiUpperDamage_exec(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar4;
  float fVar5;
  undefined8 uVar6;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_REACTION_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_REACTION_FRAME);
    fVar5 = (float)lib::L2CValue::as_number(aLStack160);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__sub_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_REACTION_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar1 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar6);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar6 >> 0x20));
      lib::L2CValue::operator_(pLVar3,aLStack160);
      lib::L2CValue::operator_(this_00,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack176,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar3);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
      app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

