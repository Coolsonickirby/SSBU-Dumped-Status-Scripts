
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNSpit_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710022ba48:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710022bb04:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          goto LAB_710022bba4;
        }
      }
      FUN_7100229ec0(aLStack112,this);
      lib::L2CValue::operator_(aLStack112);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x12b4762f1d);
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x12b4762f1d);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_IGNORE_NORMAL);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xef624dad2);
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xef624dad2);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        }
        lib::L2CValue::_L2CValue(aLStack96);
      }
      FUN_710022a090(aLStack96,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        FUN_71001a6740(this);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT_END);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          app::LinkEventStarShot::new_l2c_table();
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
          lib::L2CValue::L2CValue(aLStack96,0xeb91bf7e2);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_WN_STAR_TASK_ID);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x7bff80916);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
          FUN_7100010a00(aLStack96,this,aLStack128,aLStack112);
          lib::L2CValue::operator_(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
      iVar3 = 0;
      goto LAB_710022c2e0;
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710022bb04;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
LAB_710022bba4:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
LAB_710022bbc8:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar6 = aLStack112;
      goto LAB_710022bbc8;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710022ba48;
  }
  iVar3 = 1;
LAB_710022c2e0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

