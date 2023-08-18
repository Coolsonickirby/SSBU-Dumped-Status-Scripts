
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialNShoot_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
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
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001b110:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar3 & 1U) == 0) {
LAB_710001b244:
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,lVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,lVar7);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack144,true);
        lib::L2CValue::L2CValue(aLStack176,aLStack80);
        lib::L2CValue::L2CValue(aLStack192,aLStack112);
        lib::L2CValue::L2CValue(aLStack208,aLStack144);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
        lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                  (this,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack240,false);
        FUN_7100013d60(this,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_ENABLE_FALL_SPEED);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,false);
        lib::L2CValue::L2CValue
                  (aLStack272,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_ENABLE_FALL_SPEED_END_INIT);
        iVar4 = lib::L2CValue::as_integer(aLStack272);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
        lib::L2CValue::operator_(aLStack256);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack256,0xba18057d9);
          lib::L2CValue::L2CValue(aLStack272,0);
          uVar5 = lib::L2CValue::as_integer(aLStack256);
          uVar8 = lib::L2CValue::as_integer(aLStack272);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack144,fVar9);
          lib::L2CValue::operator_(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,0x12ec5626fe);
          lib::L2CValue::L2CValue(aLStack272,0);
          uVar5 = lib::L2CValue::as_integer(aLStack256);
          uVar8 = lib::L2CValue::as_integer(aLStack272);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack144,fVar9);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_ENABLE_FALL_SPEED_END_INIT);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_710001b244;
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
    lVar7 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710001b234;
      goto LAB_710001b110;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar7 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar7));
LAB_710001b234:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

