
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwSteelStart_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x121d74e825);
  lib::L2CValue::L2CValue(aLStack128,0x16900ab824);
  lib::L2CValue::L2CValue(aLStack144,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack176,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  FUN_710001cf40(this);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_ENABLE_STEEL);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_ENERGY);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) == 0) goto LAB_710001eb74;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack192,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack208,0xf71f4d4f8);
      lib::L2CValue::L2CValue(aLStack224,0);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack192,fVar8);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0x24428be337);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar8);
      lib::L2CValue::operator_(aLStack192,aLStack240);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack224,0x280dced03b);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack192,fVar8);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_ENERGY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_CONTROL_ENERGY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    pLVar4 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_ENABLE_STEEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_STEEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = app::FighterSpecializer_Brave::special_lw_active_command(pFVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_STEEL);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar4 = aLStack192;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_710001eb74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

