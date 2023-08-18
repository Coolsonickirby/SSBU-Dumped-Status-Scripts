
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiEnd_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    this_00 = &this->globalTable;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_CHARGED_RUSH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack144,0x17e6637ff0);
        lib::L2CValue::L2CValue(aLStack160,aLStack112);
        FUN_7100002e50(aLStack128,this,aLStack144,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack192,0x1531822790);
        lib::L2CValue::L2CValue(aLStack208,aLStack112);
        FUN_7100002e50(aLStack176,this,aLStack192,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
        uVar5 = lib::L2CValue::operator__(aLStack128,pLVar4);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator_(aLStack176,aLStack128);
          lib::L2CValue::L2CValue(aLStack96,0);
          uVar5 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,1);
            lib::L2CValue::operator_(aLStack224,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
          }
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
          lib::L2CValue::operator_(pLVar4,aLStack128);
          lib::L2CValue::operator_(aLStack240,aLStack224);
          lib::L2CValue::L2CValue(aLStack96,1.0);
          lib::L2CValue::operator_(aLStack96,aLStack272);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::L2CValue(aLStack272,aLStack256);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,1.0);
          lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::operator_(aLStack256,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::L2CValue
                    (aLStack336,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_ROT_DEGREE);
          iVar3 = lib::L2CValue::as_integer(aLStack336);
          fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar6);
          lib::L2CValue::operator_(aLStack96,aLStack256);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator_(aLStack320,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_RUSH_DEGREE);
          fVar6 = (float)lib::L2CValue::as_number(aLStack336);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
        }
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_ENABLE_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_ENABLE_CONTROL);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack224,0x137feb2a31);
          lib::L2CValue::L2CValue(aLStack240,aLStack112);
          FUN_7100014a20(aLStack96,this,aLStack224,aLStack240);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::L2CValue(aLStack320,0x1705225a1d);
          lib::L2CValue::L2CValue(aLStack336,aLStack112);
          FUN_7100014a20(aLStack256,this,aLStack320,aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack368,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
          lib::L2CValue::L2CValue(aLStack384,0.0);
          lib::L2CValue::L2CValue(aLStack400,0.0);
          lib::L2CValue::L2CValue(aLStack416,0.0);
          lib::L2CValue::L2CValue(aLStack432,0.0);
          lib::L2CValue::L2CValue(aLStack448,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::mul_x_accel_mul(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::mul_x_accel_add(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          app::sv_kinetic_energy::enable(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        return;
      }
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

