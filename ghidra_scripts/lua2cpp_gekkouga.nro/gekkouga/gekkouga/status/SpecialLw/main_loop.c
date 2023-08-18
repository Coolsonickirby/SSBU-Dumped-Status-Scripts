
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLw_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong uVar10;
  float fVar11;
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
LAB_7100025e80:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = &this->globalTable;
    if ((bVar4 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      cVar1 = (char)&stack0xfffffffffffffff0;
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar6 = 1;
      goto LAB_710002666c;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
LAB_7100026034:
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack192,false);
          FUN_710000f9d0(this,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
          GVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
          goto LAB_71000261c8;
        }
      }
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100026034;
      lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack192,false);
      FUN_710000f9d0(this,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
LAB_71000261c8:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar11);
      lVar2 = -0x40;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack112,0xbb92bf67e);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      uVar10 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack80,fVar11);
      fVar11 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar11);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x50;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      iVar6 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::operator_(aLStack96);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_MA_MSC_SHIELD_SET_STATUS);
          lib::L2CValue::L2CValue(aLStack112,COLLISION_KIND_SHIELD);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,_SHIELD_STATUS_NONE);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_module_access::shield(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
          iVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar6);
          goto LAB_7100026648;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_MA_MSC_SHIELD_SET_STATUS);
          lib::L2CValue::L2CValue(aLStack112,COLLISION_KIND_SHIELD);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,_SHIELD_STATUS_NORMAL);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_module_access::shield(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
          iVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
LAB_7100026648:
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      iVar6 = 1;
    }
    lib::L2CValue::L2CValue(aLStack80,iVar6);
    lVar2 = -0x40;
LAB_7100026660:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lVar2 = -0x50;
      goto LAB_7100026660;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_7100025e80;
  }
  iVar6 = 0;
LAB_710002666c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

