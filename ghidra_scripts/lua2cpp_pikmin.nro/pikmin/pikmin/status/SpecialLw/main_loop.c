
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::SpecialLw_main_loop(L2CFighterPikmin *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100019c68:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100019d20:
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
          goto LAB_7100019dbc;
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar4 & 1U) == 0) {
LAB_7100019e74:
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar4 & 1U) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            goto LAB_7100019ef8;
          }
        }
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
        iVar5 = lib::L2CValue::as_integer(aLStack176);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar4 & 1U) == 0) {
          bVar3 = 0;
        }
        else {
          bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar3 & 1) != 0) goto LAB_7100019fac;
        bVar4 = false;
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100019e74;
LAB_7100019ef8:
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100019fac:
        bVar4 = true;
      }
      lib::L2CValue::L2CValue(aLStack224,bVar4);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar4 & 1U) != 0) {
        FUN_7100019a90(this);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          goto LAB_710001a06c;
        }
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
        iVar5 = lib::L2CValue::as_integer(aLStack176);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) != 0) goto LAB_710001a07c;
        bVar4 = false;
      }
      else {
LAB_710001a06c:
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
LAB_710001a07c:
        bVar4 = true;
      }
      lib::L2CValue::L2CValue(aLStack224,bVar4);
      lib::L2CValue::operator_(aLStack224);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar4 & 1U) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x60));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
          GVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
          lib::L2CValue::_L2CValue(aLStack96);
          HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,HVar9);
          lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar3 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar3 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x60));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
          GVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
          lib::L2CValue::_L2CValue(aLStack96);
          HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,HVar9);
          lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar3 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar3 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
            HVar9 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack96);
      }
      iVar5 = 0;
      goto LAB_710001a59c;
    }
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) == 0) goto LAB_7100019d20;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60))
    ;
LAB_7100019dbc:
    lib::L2CValue::_L2CValue(aLStack112);
    lVar2 = -0x50;
LAB_7100019de0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack208);
      lVar2 = -0x60;
      goto LAB_7100019de0;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) goto LAB_7100019c68;
  }
  iVar5 = 1;
LAB_710001a59c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

