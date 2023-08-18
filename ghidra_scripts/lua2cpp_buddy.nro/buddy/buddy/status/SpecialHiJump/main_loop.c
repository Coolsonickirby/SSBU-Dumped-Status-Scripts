
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialHiJump_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710001e238:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          goto LAB_710001e4a8;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_HI_FLAG_RESET_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          fVar5 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack64,fVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack96,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_HI_FLAG_RESET_CONTROL);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          goto LAB_710001e4a8;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_710001e4a8:
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      iVar3 = 0;
      goto LAB_710001e4c0;
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_710001e238;
    }
  }
  iVar3 = 1;
LAB_710001e4c0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

