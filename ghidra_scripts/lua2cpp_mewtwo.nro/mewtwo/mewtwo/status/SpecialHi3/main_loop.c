
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMewtwo::status::SpecialHi3_main_loop(L2CFighterMewtwo *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710000902c:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MEWTWO_STATUS_SPECIAL_HI_WORK_INT_START_SITUATION)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_7100009270;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
LAB_7100009264:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_7100009264;
        }
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_7100009264;
        }
LAB_7100009270:
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
LAB_7100009784:
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack80,0);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_71000097cc;
          iVar3 = 0;
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue(aLStack128,0);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MEWTWO_STATUS_SPECIAL_HI_FLAG_1);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CValue::operator_(aLStack128,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CValue::operator_(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::L2CValue(aLStack80,10.0);
              lib::L2CValue::operator_(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::operator_(aLStack112,aLStack160);
              lib::L2CValue::operator_(aLStack112,aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            }
            else {
              lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
              iVar3 = lib::L2CValue::as_integer(aLStack144);
              fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                       (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CValue::operator_(aLStack128,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
              iVar3 = lib::L2CValue::as_integer(aLStack144);
              fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                       (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CValue::operator_(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack160,0x1220fc2660);
              lib::L2CValue::L2CValue(aLStack176,0);
              uVar4 = lib::L2CValue::as_integer(aLStack160);
              uVar6 = lib::L2CValue::as_integer(aLStack176);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack144,fVar7);
              lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack224,0xa1c409889);
              uVar4 = lib::L2CValue::as_integer(aLStack208);
              uVar6 = lib::L2CValue::as_integer(aLStack224);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack192,fVar7);
              lib::L2CValue::operator_(aLStack144,aLStack192);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::operator_(aLStack96);
              uVar4 = lib::L2CValue::operator_(aLStack128,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                uVar4 = lib::L2CValue::operator_(aLStack96,aLStack128);
                if ((uVar4 & 1) != 0) {
                  lib::L2CValue::operator_(aLStack128,aLStack96);
                }
              }
              else {
                lib::L2CValue::operator_(aLStack96);
                lib::L2CValue::operator_(aLStack128,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
              }
              lib::L2CValue::L2CValue(aLStack80,0.0);
              lib::L2CValue::operator_(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            }
            lib::L2CValue::_L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack240,0);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack80,0);
          uVar4 = lib::L2CValue::operator__(aLStack240,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack240);
          if ((uVar4 & 1) != 0) goto LAB_7100009784;
LAB_71000097cc:
          iVar3 = 1;
        }
        lib::L2CValue::L2CValue(aLStack80,iVar3);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      iVar3 = 0;
      goto LAB_71000097e8;
    }
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_710000902c;
    }
  }
  iVar3 = 1;
LAB_71000097e8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

