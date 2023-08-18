
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShulk::status::FinalEnd_main_loop(L2CFighterShulk *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  GroundCorrectKind GVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar11 = &this->moduleAccessor;
  bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) goto LAB_7100010a48;
    }
    iVar6 = 1;
    goto LAB_7100011578;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100010a48:
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar9 = aLStack128;
LAB_7100010c2c:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
    iVar6 = lib::L2CValue::as_integer(aLStack176);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar7);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar7);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar6);
      pLVar9 = aLStack96;
      goto LAB_7100010c2c;
    }
  }
  bVar4 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  cVar3 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) == 0) {
    pLVar1 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_7100010c78;
      }
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lVar2 = -0x60;
      goto LAB_71000111e8;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) goto LAB_7100010c78;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100010c78:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar5 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xdf3b40b09);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        fVar12 = (float)lib::L2CValue::as_number(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        bVar4 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar4 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xdf3b40b09);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar10,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar3 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar5 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar7);
        goto LAB_710001118c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar5 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        fVar12 = (float)lib::L2CValue::as_number(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        bVar4 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar4 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_MOT_CHANGE);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar10,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar3 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar5 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar7);
LAB_710001118c:
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    bVar4 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
    bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar5 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar6);
      lVar2 = -0x50;
LAB_71000111e8:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
  }
  bVar4 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
  bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar1 = &this->globalTable;
  if ((bVar5 & 1U) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,8);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x24e333a710);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
    iVar6 = lib::L2CValue::as_integer(aLStack176);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,8);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x24e333a710);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_EXIT);
    iVar6 = lib::L2CValue::as_integer(aLStack192);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar4 & 1));
    bVar5 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    if ((bVar5 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar9 = aLStack192;
      goto LAB_710001156c;
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
    iVar6 = lib::L2CValue::as_integer(aLStack224);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar6);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHULK_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,0x24cc556ddb);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar9 = aLStack176;
      goto LAB_710001156c;
    }
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar3 + -0x50),(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar3 + -0x50),(L2CValue)0x80);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar9 = aLStack96;
LAB_710001156c:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  iVar6 = 0;
LAB_7100011578:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

