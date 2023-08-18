
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::JackSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  float fVar10;
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710015c5d0:
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
LAB_710015c6c8:
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      cVar2 = (char)&stack0xfffffffffffffff0;
      if ((uVar7 & 1) == 0) {
LAB_710015c7c8:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) goto LAB_710015c7c8;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_SPECIAL_RAW);
            iVar5 = lib::L2CValue::as_integer(aLStack144);
            bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status
                        (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
              goto LAB_710015ce2c;
            }
          }
          else {
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
          goto LAB_710015ce2c;
        }
      }
      FUN_7100156900(this);
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
        }
        goto LAB_710015ce2c;
      }
      lib::L2CValue::L2CValue(aLStack112,&LAB_710015d110);
      lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0xb5af259b6);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack144,iVar5);
      FUN_710015a2a0(aLStack96,this,aLStack112,aLStack144);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) goto LAB_710015ce3c;
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) {
LAB_710015cc18:
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar7 & 1) == 0) goto LAB_710015ce3c;
        lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                  (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack160,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
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
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
        goto LAB_710015ce2c;
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_710015cc18;
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar5);
      lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack224,0xb0d312c7e);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      uVar9 = lib::L2CValue::as_integer(aLStack224);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack192,iVar5);
      uVar7 = lib::L2CValue::operator__(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) goto LAB_710015cc18;
      FUN_710015d120(aLStack80,this);
      goto LAB_710015ce34;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_710015c6c8;
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    uVar9 = lib::L2CValue::as_integer(aLStack112);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack80,iVar5);
    FUN_7100155a30(this,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lVar1 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_710015c5d0;
    }
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_ESCAPE);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
LAB_710015ce2c:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710015ce34:
    lVar1 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710015ce3c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

