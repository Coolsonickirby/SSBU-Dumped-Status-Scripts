
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::SpecialHiWait_main_loop(L2CFighterPikmin *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
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
    FUN_7100018de0(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      iVar2 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,iVar2);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_DOWN);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
LAB_7100018a64:
          lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_LEFT);
          lib::L2CValue::operator_(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_RIGHT);
            lib::L2CValue::operator_(aLStack80,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar1 & 1U) == 0) goto LAB_7100018be0;
          }
          else {
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack144,0x13a8729baa);
          uVar3 = lib::L2CValue::as_integer(aLStack128);
          uVar4 = lib::L2CValue::as_integer(aLStack144);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar3,uVar4);
          lib::L2CValue::L2CValue(aLStack112,fVar5);
          lib::L2CValue::operator_(aLStack112);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack64);
          goto LAB_7100018be0;
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_INT_DISABLE_LANDING_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack96,iVar2);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack96,1.0);
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack64);
          goto LAB_7100018a64;
        }
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_LANDING);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack192,1);
      }
      else {
LAB_7100018be0:
        lib::L2CValue::L2CValue(aLStack192,0);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,false);
        FUN_7100015570(this,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        iVar2 = 0;
        goto LAB_7100018c14;
      }
    }
  }
  iVar2 = 1;
LAB_7100018c14:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

