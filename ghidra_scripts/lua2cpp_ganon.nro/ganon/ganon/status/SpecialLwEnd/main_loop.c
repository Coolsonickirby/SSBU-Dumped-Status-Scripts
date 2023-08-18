
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialLwEnd_main_loop(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong *this_01;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  ulong auStack288 [2];
  ulong auStack272 [2];
  ulong auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong auStack128 [2];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack224,0);
  ppBVar11 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar7 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((uVar7 & 1) != 0) goto LAB_7100012408;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100012b7c;
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
LAB_7100012408:
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_GANON_KICK_END_SITUATION_GG);
  uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_GANON_KICK_END_SITUATION_GA);
    uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_GANON_KICK_END_SITUATION_AG);
      uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack272,0);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)auStack272,1);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)auStack272,1);
        }
        this_01 = auStack272;
        goto LAB_7100012b6c;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_GANON_KICK_END_SITUATION_AA);
      uVar7 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) goto LAB_7100012b70;
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_INHERIT_FALL);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack144);
LAB_7100012d28:
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          lVar14 = -0x90;
LAB_7100013098:
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_INHERIT_FALL)
            ;
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            FUN_7100010b20(this);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_WAIT)
            ;
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_FALL)
            ;
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar11,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack160,0x207b183de1);
            uVar7 = lib::L2CValue::as_integer(aLStack144);
            uVar10 = lib::L2CValue::as_integer(aLStack160);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar10);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
            lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0x12aaf01d6d);
            lib::L2CValue::L2CValue(aLStack144,0.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
            bVar2 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar11,HVar9,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      (aLStack160,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_START_SITUATION);
            iVar4 = lib::L2CValue::as_integer(aLStack160);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
            lib::L2CValue::L2CValue(aLStack144,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
            uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack144,0.0);
              lib::L2CValue::L2CValue(aLStack160,1.0);
              lib::L2CValue::L2CValue(aLStack176,1.0);
              uVar7 = lib::L2CValue::as_number(aLStack144);
              lVar14 = lib::L2CValue::as_number(aLStack160);
              uVar6 = lib::L2CValue::as_number(aLStack176);
              local_70 = uVar7 & 0xffffffff | lVar14 << 0x20;
              uStack104 = (ulong)uVar6;
              app::lua_bind::KineticModule__mul_speed_impl(*ppBVar11,(Vector3f *)&local_70,-1);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack160);
              lVar14 = -0x80;
              goto LAB_7100013098;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_FALL);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_FALL);
            lib::L2CValue::L2CValue(aLStack144,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x80));
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,1);
            goto LAB_7100013254;
          }
        }
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_WAIT);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        else {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack144,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x80));
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,1);
            goto LAB_7100013254;
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0);
      }
      else {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar3 & 1U) == 0) goto LAB_7100012d28;
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x80));
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,1);
      }
LAB_7100013254:
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      this_01 = auStack288;
      goto LAB_7100012b6c;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
              (*ppBVar11,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    this_00 = &this->globalTable;
    if ((bVar3 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      this_01 = &local_70;
      goto LAB_7100012b6c;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xee8a2e8a2);
        HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_TYPE_MOTION);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,_FIGHTER_GANON_STATUS_WORK_ID_FLOAT_GANON_KICK_SPEED);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        uVar6 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack144,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        uVar7 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar7 & 1) != 0) {
          fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack192,fVar12);
          uVar6 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack208,uVar6);
          lib::L2CValue::operator_(aLStack192,aLStack208);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
          lib::L2CValue::operator_((L2CValue *)&local_70,aLStack176);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::operator_((L2CValue *)auStack128,aLStack160);
          lib::L2CValue::operator_((L2CValue *)auStack128,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack128);
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
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        this_01 = auStack128;
        goto LAB_7100012b6c;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x12837845b6);
        HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar9,-1.0,1.0,0.0,false,false);
        this_01 = &local_70;
        goto LAB_7100012b6c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
              (*ppBVar11,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,1);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,1);
    }
    this_01 = auStack256;
LAB_7100012b6c:
    lib::L2CValue::_L2CValue((L2CValue *)this_01);
  }
LAB_7100012b70:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100012b7c:
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

