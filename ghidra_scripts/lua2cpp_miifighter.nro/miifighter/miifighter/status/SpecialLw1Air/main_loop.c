
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialLw1Air_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue *this_00;
  float fVar10;
  float fVar11;
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
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) == 0) {
    bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710003a83c:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG2);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG2);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          FUN_71000154c0(this);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack96,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack176,0xba13017bb);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          uVar8 = lib::L2CValue::as_integer(aLStack176);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar7,uVar8);
          lib::L2CValue::L2CValue(aLStack144,fVar10);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
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
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x10be6aa14f);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          fVar10 = (float)lib::L2CValue::as_number(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack112);
          bVar4 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar4 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG1);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(this_00,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG1);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        cVar1 = (char)&stack0xfffffffffffffff0;
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x40));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
          GVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
          lVar2 = -0x50;
        }
        else {
          FUN_71000154c0(this);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_LW1_LANDING);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
          lib::L2CValue::_L2CValue(aLStack96);
          lVar2 = -0x40;
        }
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
      }
      iVar5 = 0;
      goto LAB_710003ad04;
    }
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
      if ((uVar7 & 1) != 0) goto LAB_710003a83c;
    }
  }
  iVar5 = 1;
LAB_710003ad04:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

