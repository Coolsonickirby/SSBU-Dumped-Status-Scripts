
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDuckhunt::status::SpecialHiFly_main_loop(L2CFighterDuckhunt *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  FUN_710000ff50(aLStack80,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = _SITUATION_KIND_GROUND;
  if ((bVar1 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack80,pLVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100011e58;
    }
  }
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_FLOAT_SPEED_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0xbf207247b);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0xbae346628);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
  lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0xf9327887a);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack128,aLStack144);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar5 = lib::L2CValue::operator_(aLStack160,aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator_(aLStack128,aLStack160);
  }
  lib::L2CValue::operator_(aLStack160);
  uVar5 = lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator_(aLStack160);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_FLOAT_SPEED_X);
  fVar7 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  FUN_7100010370(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100011e58:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

