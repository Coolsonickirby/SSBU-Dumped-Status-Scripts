
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialSAttack_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_WAIT);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_FALL);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_WALK);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_ATTACK);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_TURN);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) != 0) {
              app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
              app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
            }
            goto LAB_7100009764;
          }
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) goto LAB_7100009764;
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_COUNT);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack80,iVar2);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack128,0xfe768552f);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::operator_(aLStack80,aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::AttackModule__set_power_add_status_impl(this->moduleAccessor,fVar8);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                   (this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack80,fVar8);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                   (this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack144,0x11a839d59d);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          uVar7 = lib::L2CValue::as_integer(aLStack144);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack112,fVar8);
          uVar5 = lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack144,0x11a839d59d);
            uVar5 = lib::L2CValue::as_integer(aLStack128);
            uVar7 = lib::L2CValue::as_integer(aLStack144);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar5,uVar7);
            lib::L2CValue::L2CValue(aLStack112,fVar8);
            lib::L2CValue::operator_(aLStack80,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
          }
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack128,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack160,0x11a839d59d);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack128,fVar8);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack160,0x11a839d59d);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack128,fVar8);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack128,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        goto LAB_710000974c;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_START);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100009764;
    lib::L2CValue::L2CValue(aLStack80,0x12eb4bf175);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ControlModule__set_rumble_impl
              (this->moduleAccessor,HVar6,iVar2,(bool)(bVar1 & 1),0x50000000);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_START);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CHANGE_SE_HOLD_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack96,0x172153a489);
      lib::L2CValue::L2CValue(aLStack112,0);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar6,uVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack96,0x1aa92d0380);
      lib::L2CValue::L2CValue(aLStack112,0);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar6,uVar3);
    }
LAB_710000974c:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100009764:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

