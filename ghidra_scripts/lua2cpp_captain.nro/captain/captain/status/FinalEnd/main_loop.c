
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::FinalEnd_main_loop(L2CFighterCaptain *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_710000f2a4;
    }
    iVar5 = 1;
    goto LAB_710000fab4;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710000f2a4:
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar8 = aLStack112;
LAB_710000f488:
    lib::L2CValue::_L2CValue(pLVar8);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar6 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar6);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar5);
      pLVar8 = aLStack80;
      goto LAB_710000f488;
    }
  }
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        goto LAB_710000f4d4;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lVar2 = -0x50;
      goto LAB_710000f7b0;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_710000f4d4;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710000f4d4:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      FUN_710000ffb0(this);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x50));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar6);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_SITUATION_GROUND)
      ;
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar5);
    }
    else {
      FUN_710000fd20();
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)(cVar1 + -0x50));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_ON);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar6 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar6);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_SITUATION_GROUND)
      ;
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar5);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_GROUND_CORRECT_SET);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar5);
      lVar2 = -0x40;
LAB_710000f7b0:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
  }
  bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x26ec71715e);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar8 = aLStack160;
      goto LAB_710000faa8;
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
    iVar5 = lib::L2CValue::as_integer(aLStack192);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar5);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,0x26c317bb95);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar8 = aLStack144;
      goto LAB_710000faa8;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar8 = aLStack80;
LAB_710000faa8:
    lib::L2CValue::_L2CValue(pLVar8);
  }
  iVar5 = 0;
LAB_710000fab4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

