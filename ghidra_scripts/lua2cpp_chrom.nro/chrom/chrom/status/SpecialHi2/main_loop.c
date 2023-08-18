
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::SpecialHi2_main_loop(L2CFighterChrom *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float in_register_00005008;
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
  
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000214ec;
  }
  ppBVar9 = &this->moduleAccessor;
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack256,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) == 0) {
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) != 0) goto LAB_71000209d0;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) goto LAB_7100021040;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_71000209d8;
  }
  else {
LAB_71000209d0:
    lib::L2CValue::_L2CValue(aLStack112);
LAB_71000209d8:
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      lib::L2CValue::operator_(aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack256,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar5);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack256,fVar10);
          lib::L2CValue::operator_(aLStack112,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          in_register_00005008 = 0.0;
          lib::L2CValue::L2CValue(aLStack256,1.0);
          lib::L2CValue::operator_(aLStack128,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,0x105739d665);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar8 = lib::L2CValue::as_hash(aLStack256);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          bVar3 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar3 & 1),0.0,false,false);
          goto LAB_7100020e50;
        }
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::operator_(aLStack112,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        in_register_00005008 = 0.0;
        lib::L2CValue::L2CValue(aLStack256,1.0);
        lib::L2CValue::operator_(aLStack128,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack256,0x105739d665);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar8 = lib::L2CValue::as_hash(aLStack256);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar3 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar3 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        goto LAB_7100021030;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      lib::L2CValue::operator_(aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack256,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar5);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::operator_(aLStack112,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          in_register_00005008 = 0.0;
          lib::L2CValue::L2CValue(aLStack256,1.0);
          lib::L2CValue::operator_(aLStack128,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,0xcef73e16f);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar8 = lib::L2CValue::as_hash(aLStack256);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          bVar3 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar3 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_CONTINUE_MOT);
          iVar4 = lib::L2CValue::as_integer(aLStack256);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        }
        else {
          fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack256,fVar10);
          lib::L2CValue::operator_(aLStack112,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          in_register_00005008 = 0.0;
          lib::L2CValue::L2CValue(aLStack256,1.0);
          lib::L2CValue::operator_(aLStack128,aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,0xcef73e16f);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar8 = lib::L2CValue::as_hash(aLStack256);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          bVar3 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar3 & 1),0.0,false,false);
LAB_7100020e50:
          lib::L2CValue::_L2CValue(aLStack144);
        }
LAB_7100021030:
        lib::L2CValue::_L2CValue(aLStack256);
      }
    }
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100021040:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_KINETIC_CHANGE_CHROM);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack256,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_JUMP);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack256,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_JUMP_START_AIR);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::_L2CValue(aLStack256);
      }
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_MOTION_AIR_ANGLE);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar5);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_KINETIC_CHANGE_CHROM);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar1 = &this->globalTable;
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000214ec;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000214ec;
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
  lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_JUMP);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      uVar12 = app::lua_bind::MotionModule__trans_move_speed_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack256,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::L2CValue(aLStack224,in_register_00005008);
      lib::L2CValue::operator_(aLStack176,aLStack256);
      lib::L2CValue::operator_(aLStack192,aLStack240);
      lib::L2CValue::operator_(aLStack208,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack192,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_4);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000214ec;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000214ec:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

