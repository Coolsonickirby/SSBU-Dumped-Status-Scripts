
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiiswordsman::status::SpecialS1End_main_loop
          (L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong uVar10;
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
LAB_7100038b80:
      bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      cVar1 = (char)&stack0xfffffffffffffff0;
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_HENSOKU_SLASH_WORK_FLAG_END_LANDING);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        this_00 = &this->globalTable;
        if ((bVar3 & 1U) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status
                        (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
              goto LAB_7100039160;
            }
          }
        }
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) goto LAB_7100038e48;
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x40));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0xecd91f505);
          HVar9 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
LAB_7100039124:
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
LAB_7100038e48:
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
              GVar6 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
              lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x40));
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
              iVar5 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,0x128fc300ca);
              HVar9 = lib::L2CValue::as_hash(aLStack96);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
              lib::L2CValue::L2CValue(aLStack144,0x1631d52f73);
              uVar7 = lib::L2CValue::as_integer(aLStack112);
              uVar10 = lib::L2CValue::as_integer(aLStack144);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar7,uVar10);
              lib::L2CValue::L2CValue(aLStack96,fVar11);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              lib::L2CValue::L2CValue(aLStack144,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
              lib::L2CValue::L2CValue(aLStack160,0.0);
              lib::L2CValue::L2CValue(aLStack176,0.0);
              lib::L2CValue::L2CValue(aLStack192,0.0);
              lib::L2CValue::L2CValue(aLStack208,0.0);
              lib::L2CValue::L2CValue(aLStack224,0.0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
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
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack112);
              goto LAB_7100039124;
            }
          }
        }
        iVar5 = 0;
        goto LAB_7100039178;
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
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
LAB_7100039160:
      lib::L2CValue::_L2CValue(aLStack96);
      lVar2 = -0x40;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100039170;
        goto LAB_7100038b80;
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x50;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
LAB_7100039170:
  iVar5 = 1;
LAB_7100039178:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

