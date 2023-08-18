
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiiswordsmanSpecialN_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(aLStack224,0);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_71002209d4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710022174c;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71002209d4:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_0);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack272,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710022174c;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_1);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710022174c;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_7100220c5c;
    }
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1) != 0) goto LAB_7100220c6c;
    lib::L2CValue::L2CValue(aLStack336,false);
  }
  else {
LAB_7100220c5c:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100220c6c:
    lib::L2CValue::L2CValue(aLStack336,true);
  }
  lib::L2CValue::operator_(aLStack336);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack496,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_AIR_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar7);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_0);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
        goto LAB_7100221508;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack352,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_GROUND_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar7);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_0);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_FLAG_STRANS_1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_IGNORE_NORMAL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT);
        lib::L2CValue::L2CValue(aLStack112,0x116e7e1f9d);
        lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
        lib::L2CValue::L2CValue(aLStack144,3.0);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.5);
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,0.0);
        lib::L2CValue::L2CValue(aLStack448,0.0);
        lib::L2CValue::L2CValue(aLStack464,0.0);
        lib::L2CValue::L2CValue(aLStack480,false);
        FUN_71001925b0(aLStack368,this,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,
                       aLStack176,aLStack192,aLStack208,aLStack320,aLStack336,aLStack384,aLStack400,
                       aLStack416,aLStack432,aLStack448,aLStack464,aLStack480);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
LAB_7100221508:
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
LAB_7100221584:
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_7100221608;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1) != 0) goto LAB_71002216bc;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack208,false);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100221584;
LAB_7100221608:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71002216bc:
    lib::L2CValue::L2CValue(aLStack208,true);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    FUN_71002207b0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710022174c:
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

