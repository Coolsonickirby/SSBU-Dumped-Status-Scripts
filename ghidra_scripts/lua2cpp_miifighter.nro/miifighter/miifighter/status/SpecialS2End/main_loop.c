
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialS2End_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    ppBVar9 = &this->moduleAccessor;
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710003e8a4:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
LAB_710003e9e8:
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_NENSYO_KICK_HIT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_S2_LANDING);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
              goto LAB_710003eae0;
            }
          }
        }
        FUN_710001bf70(aLStack96,this);
        lib::L2CValue::operator_(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            FUN_7100022130(this);
          }
          else {
            FUN_7100021ea0();
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_NENSYO_KICK_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
              lib::L2CValue::L2CValue(aLStack112,0xeac2fd37a);
              uVar5 = lib::L2CValue::as_integer(aLStack96);
              uVar8 = lib::L2CValue::as_integer(aLStack112);
              fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar8);
              lib::L2CValue::L2CValue(aLStack80,fVar10);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
              lib::L2CValue::L2CValue(aLStack144,0x12ecda5740);
              uVar5 = lib::L2CValue::as_integer(aLStack112);
              uVar8 = lib::L2CValue::as_integer(aLStack144);
              fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar8);
              lib::L2CValue::L2CValue(aLStack96,fVar10);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::operator_(aLStack80);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              app::sv_kinetic_energy::set_accel(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
            }
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
            GVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_FALL);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_WAIT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
            pLVar6 = aLStack96;
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_NENSYO_KICK_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
            }
            lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar4 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_WAIT);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_FALL);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack144,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_NENSYO_KICK_GROUND_SE);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((uVar5 & 1) == 0) goto LAB_710003f0d0;
            lib::L2CValue::L2CValue(aLStack112,0x1ca49e7477);
            HVar7 = lib::L2CValue::as_hash(aLStack112);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar9,HVar7,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_NENSYO_KICK_GROUND_SE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
            pLVar6 = aLStack112;
          }
          lib::L2CValue::_L2CValue(pLVar6);
        }
LAB_710003f0d0:
        FUN_710001c1c0(aLStack112,this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          FUN_710001b6d0(this);
        }
        iVar3 = 0;
        goto LAB_710003eaf8;
      }
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_TRANSITION_TERM_ID_NENSYO_KICK_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) goto LAB_710003e9e8;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
LAB_710003eae0:
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar6 = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
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
        if ((uVar5 & 1) == 0) goto LAB_710003eaf0;
        goto LAB_710003e8a4;
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
LAB_710003eaf0:
  iVar3 = 1;
LAB_710003eaf8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

