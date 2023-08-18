
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwCancel_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
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
  L2CValue aLStack80 [16];
  
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack272,0x11a669b894);
  lib::L2CValue::L2CValue(aLStack288,0x15d0344c8b);
  lib::L2CValue::L2CValue(aLStack304,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
LAB_7100025058:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                  (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                  (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0xba18057d9);
        lib::L2CValue::L2CValue(aLStack160,0);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        uVar9 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator_(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack144,ENERGY_STOP_RESET_TYPE_AIR);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack144,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        goto LAB_71000254ac;
      }
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) goto LAB_7100025058;
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
LAB_71000254ac:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lVar1 = -0x60;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack128,iVar5);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) goto LAB_71000255fc;
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (this->moduleAccessor,(bool)(bVar2 & 1));
      lVar1 = -0x40;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_71000255fc:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
LAB_71000256f4:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,-1);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          iVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
          goto LAB_71000257a4;
        }
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) goto LAB_71000256f4;
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
LAB_71000257a4:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,-1);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack320,aLStack96);
        lib::L2CValue::L2CValue(aLStack336,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025b80;
      }
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack352,aLStack96);
        lib::L2CValue::L2CValue(aLStack368,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025b80;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack384,aLStack96);
        lib::L2CValue::L2CValue(aLStack400,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025b80;
      }
    }
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack416,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) goto LAB_71000259b0;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100025b80;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000259b0:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100025b80;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack464,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack480,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100025b80;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100025b80:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

