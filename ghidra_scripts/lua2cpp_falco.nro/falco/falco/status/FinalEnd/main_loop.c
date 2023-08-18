
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::FinalEnd_main_loop(L2CFighterFalco *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_71000124f8;
    }
    iVar3 = 1;
    goto LAB_7100012f84;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000124f8:
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack128;
LAB_71000126dc:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_FALL._4_4_);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      pLVar6 = aLStack96;
      goto LAB_71000126dc;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_7100012728;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = aLStack112;
      goto LAB_7100012c98;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100012728;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100012728:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xdf3b40b09);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xdf3b40b09);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_FALL._4_4_);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
        goto LAB_7100012c3c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
LAB_7100012c3c:
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      pLVar6 = aLStack96;
LAB_7100012c98:
      lib::L2CValue::_L2CValue(pLVar6);
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_EXIT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
        pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
        app::FighterSpecializer_Falco::final_end_exit(pFVar8);
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_7100012f5c:
      iVar3 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
        pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
        app::FighterSpecializer_Falco::final_end_exec(pFVar8);
      }
      lib::L2CValue::L2CValue(aLStack144,0);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) goto LAB_7100012f5c;
      iVar3 = 1;
    }
    lib::L2CValue::L2CValue(aLStack96,iVar3);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  iVar3 = 0;
LAB_7100012f84:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

