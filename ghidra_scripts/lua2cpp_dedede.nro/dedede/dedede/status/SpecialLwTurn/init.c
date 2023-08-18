
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialLwAttack_init(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WAIT);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_FALL);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_WALK);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_ATTACK);
          uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_TURN);
            uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) != 0) {
              app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
              app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX);
            iVar2 = lib::L2CValue::as_integer(aLStack208);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
            lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,true);
            uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack208);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack192,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_FLOAT_HOLD_COUNT);
              iVar2 = lib::L2CValue::as_integer(aLStack192);
              fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
              lib::L2CValue::L2CValue(aLStack80,fVar9);
              lib::L2CValue::operator_(aLStack128,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack208,0xfe768552f);
              uVar6 = lib::L2CValue::as_integer(aLStack192);
              uVar8 = lib::L2CValue::as_integer(aLStack208);
              fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar6,uVar8);
              lib::L2CValue::L2CValue(aLStack80,fVar9);
              lib::L2CValue::operator_(aLStack160,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::operator_(aLStack128,aLStack160);
              lib::L2CValue::operator_(aLStack112,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              fVar9 = (float)lib::L2CValue::as_number(aLStack112);
              app::lua_bind::AttackModule__set_power_add_status_impl(this->moduleAccessor,fVar9);
            }
          }
          goto LAB_71000092c4;
        }
        lib::L2CValue::L2CValue(aLStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar2 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                 (this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::operator_(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar2 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::operator_(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack208,0x11a839d59d);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar8 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        uVar6 = lib::L2CValue::operator_(aLStack80,aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack208,0x11a839d59d);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          uVar8 = lib::L2CValue::as_integer(aLStack208);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack80,fVar9);
          lib::L2CValue::operator_(aLStack176,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack192,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,1.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack224,0x11a839d59d);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar8 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack224,0x11a839d59d);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar8 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
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
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack192,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
        goto LAB_71000092bc;
      }
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_START);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) == 0) goto LAB_71000092c4;
    lib::L2CValue::L2CValue(aLStack192,0x15a940b962);
    HVar7 = lib::L2CValue::as_hash(aLStack192);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar7,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_SE_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_START);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_CHANGE_SE_HOLD_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack192,0x1b57563939);
      lib::L2CValue::L2CValue(aLStack208,0);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar7,uVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack192,0x1ed8f6fd3e);
      lib::L2CValue::L2CValue(aLStack208,0);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar7,uVar3);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x110371c42a);
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack208,false);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DEDEDE_CONTROLLER_RUMBLE_ID_SPECIAL_LW);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::ControlModule__set_rumble_impl
              (this->moduleAccessor,HVar7,iVar2,(bool)(bVar1 & 1),uVar3);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
  }
LAB_71000092bc:
  lib::L2CValue::_L2CValue(aLStack80);
LAB_71000092c4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

