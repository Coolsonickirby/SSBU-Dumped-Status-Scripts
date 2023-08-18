
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMariod::status::SpecialLw_exec(L2CFighterMariod *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLAG_LIMIT_X_DEC);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLOAT_LIMIT_X_DEC);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0xb42ef71d6);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLOAT_LIMIT_X_DEC);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MARIOD_SPECIAL_LW);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0xbf118d6f8);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0x7e908d411);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIOD_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_7100001be0:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100001bf0:
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    this_00 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLAG_RISE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_7100001be0;
    }
    lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack208,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = app::lua_bind::ControlModule__check_button_release_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLAG_RISE_PRECEDE);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      else {
        bVar1 = 1;
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1) == 0) goto LAB_7100001bf0;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLAG_RISE_PRECEDE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x8e2063fa2);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100001c10;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MARIOD_SPECIAL_AIR_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
    this_00 = aLStack112;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100001c10:
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIOD_STATUS_SPECIAL_LW_FLOAT_RISE_Y);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

