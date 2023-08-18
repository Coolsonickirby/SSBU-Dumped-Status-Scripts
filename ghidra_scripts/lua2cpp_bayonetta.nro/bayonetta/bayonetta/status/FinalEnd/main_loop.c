
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
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
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_SET);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack128;
LAB_7100023ce8:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_SET);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      pLVar6 = aLStack96;
      goto LAB_7100023ce8;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
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
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_7100023d34;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) goto LAB_71000242b8;
      goto LAB_7100023d34;
    }
    pLVar6 = aLStack144;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack144);
LAB_7100023d34:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_AIR_MOTION_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        pLVar6 = aLStack96;
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_AIR_MOTION_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar6 = aLStack144;
      }
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_71000242b8;
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_GROUND_MOTION_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        pLVar6 = aLStack96;
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_GROUND_MOTION_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar6 = aLStack144;
      }
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_71000242b8;
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    }
    pLVar6 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_71000242b8:
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_RESTART_OTHER_FIGHTER);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::lua_bind::FighterBayonettaFinalModule__restart_other_fighter_impl
              (BATTLE_OBJECT_CATEGORY_ITEM,pBVar9);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_RESTART_OTHER_FIGHTER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_END_GROUND_CORRECT_SET);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_FINAL_END_AFTER);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END_AFTER);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

