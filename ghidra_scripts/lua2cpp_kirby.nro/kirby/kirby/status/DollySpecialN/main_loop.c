
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DollySpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100140a10:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_STATUS_SPECIAL_N_WORK_FLAG_GENERATE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_GENERATE_ARTICLE_WAVE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (this->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack128,0xb0d756857);
              uVar4 = lib::L2CValue::as_integer(aLStack112);
              uVar6 = lib::L2CValue::as_integer(aLStack128);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack96,fVar7);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack144,0xd19a47f7f);
              uVar4 = lib::L2CValue::as_integer(aLStack128);
              uVar6 = lib::L2CValue::as_integer(aLStack144);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack112,fVar7);
              lib::L2CValue::operator_(aLStack112);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_kinetic_energy::set_accel(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack128,0xb4af54a32);
              uVar4 = lib::L2CValue::as_integer(aLStack112);
              uVar6 = lib::L2CValue::as_integer(aLStack128);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack96,fVar7);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack80);
            }
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_DOLLY_STATUS_SPECIAL_N_WORK_FLAG_GENERATE_DONE);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SPECIAL_N_WORK_FLAG_GENERATE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DOLLY_STATUS_SPECIAL_N_WORK_FLAG_GENERATE_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack96,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack128,fVar7);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack144,0xd19a47f7f);
          uVar4 = lib::L2CValue::as_integer(aLStack128);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack112,fVar7);
          lib::L2CValue::operator_(aLStack112);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack128,0xb4af54a32);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar6 = lib::L2CValue::as_integer(aLStack128);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar7);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                  (this,(L2CValue)0xb0);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
      lib::L2CValue::L2CValue(aLStack128,0xd483c0ed2);
      lib::L2CValue::L2CValue(aLStack144,true);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
                (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack176,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar5 = aLStack176;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar5);
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100140a10;
    }
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

