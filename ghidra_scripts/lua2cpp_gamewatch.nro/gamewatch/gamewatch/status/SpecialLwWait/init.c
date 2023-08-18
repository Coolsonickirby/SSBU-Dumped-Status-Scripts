
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwWait_init(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ShieldStatus SVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
LAB_71000046b0:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_CATCH);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) goto LAB_71000046b0;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_REFLECT);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar10);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar10 >> 0x20));
      lib::L2CValue::operator_(pLVar7,aLStack160);
      lib::L2CValue::operator_(this_00,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack208,0xf18fe813e);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar8 = lib::L2CValue::as_integer(aLStack208);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::operator_(pLVar7,aLStack176);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::operator_(pLVar7,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_71000046b0;
    }
  }
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
LAB_7100004734:
    pLVar7 = aLStack96;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_CATCH);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) goto LAB_7100004734;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_REFLECT);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_710000473c;
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    pLVar7 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_710000473c:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_HOLD);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_ABSORBER_GROUP_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NORMAL);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    SVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::AbsorberModule__set_status_impl(this->moduleAccessor,iVar3,SVar4,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_REFLECTOR_KIND_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NORMAL);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GAMEWATCH_REFLECTOR_GROUP_SPECIAL_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    SVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::ReflectorModule__set_status_impl(this->moduleAccessor,iVar3,SVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

