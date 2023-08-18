
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialLw_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_7100025814;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100025814:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      FUN_710000d730(this);
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100025a00:
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        this_00 = &this->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::_L2CValue(aLStack128);
            goto LAB_7100025a48;
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) goto LAB_7100025a48;
          goto LAB_7100026228;
        }
        pLVar6 = aLStack128;
LAB_7100026224:
        lib::L2CValue::_L2CValue(pLVar6);
      }
      else {
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100025a48:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xe46c0e666);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST
                      );
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xe46c0e666);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar7,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_AIR_FIRST);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack176,0x7b9905530);
              uVar5 = lib::L2CValue::as_integer(aLStack160);
              uVar8 = lib::L2CValue::as_integer(aLStack176);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar8)
              ;
              lib::L2CValue::L2CValue(aLStack144,fVar11);
              lib::L2CValue::operator_(aLStack144);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              app::sv_kinetic_energy::set_accel(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack160,0xbd93356be);
              uVar5 = lib::L2CValue::as_integer(aLStack144);
              uVar8 = lib::L2CValue::as_integer(aLStack160);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar8)
              ;
              lib::L2CValue::L2CValue(aLStack128,fVar11);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack160,0xbd93356be);
              uVar5 = lib::L2CValue::as_integer(aLStack144);
              uVar8 = lib::L2CValue::as_integer(aLStack160);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar8)
              ;
              lib::L2CValue::L2CValue(aLStack128,fVar11);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
            }
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
            app::KineticUtility::clear_unable_energy(iVar3,pBVar9);
            goto LAB_7100026220;
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST
                      );
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar7,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_MOTION);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
LAB_7100026220:
            pLVar6 = aLStack112;
            goto LAB_7100026224;
          }
        }
      }
LAB_7100026228:
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_CLEAR_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_CLEAR_SPEED);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_71000263e0;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
LAB_71000263e0:
      iVar3 = 0;
      goto LAB_71000263e8;
    }
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_7100025a00;
    }
  }
  iVar3 = 1;
LAB_71000263e8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

