
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::FalcoSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_71001f200c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71001f3204;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_71001f200c:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack192,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::operator_(aLStack224,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack192);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_71001f260c;
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_START);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_SHOT);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_END);
        uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          FUN_71001f3590(aLStack112,this);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_71001f3204;
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator_(aLStack176,aLStack112);
            goto LAB_71001f2604;
          }
        }
        goto LAB_71001f260c;
      }
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_71001f260c;
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      }
    }
    else {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_71001f260c;
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      }
    }
LAB_71001f2604:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_START);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_71001f260c;
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      }
      goto LAB_71001f2604;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_SHOT);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_71001f260c;
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      }
      goto LAB_71001f2604;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_END);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      FUN_71001f3590(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71001f3204;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        goto LAB_71001f2604;
      }
    }
  }
LAB_71001f260c:
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_SHOT);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
        goto LAB_71001f28e8;
      }
    }
    else {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_LOOP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack128);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x2b94de0d96);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_SPECIAL_N);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0x20cbc92683);
          lib::L2CValue::L2CValue(aLStack128,1);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_END);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_INT_STEP);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_LOOP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,true);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ControlModule__clear_command_impl(*ppBVar9,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar9,fVar10);
LAB_71001f28e8:
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_group_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_START);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_SHOT);
        uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_END);
          uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) goto LAB_71001f31f8;
          lib::L2CValue::L2CValue(aLStack112,1.0);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x11c0a0c60e);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x11c0a0c60e);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,1.0);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x12fa41ef06);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x12fa41ef06);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          }
        }
        goto LAB_71001f31f0;
      }
      FUN_71001f1b30(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_START);
      uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_SHOT);
        uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STEP_END);
          uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) goto LAB_71001f31f8;
          lib::L2CValue::L2CValue(aLStack112,1.0);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xd20cd6527);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xd20cd6527);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,1.0);
          fVar10 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::MotionModule__set_whole_rate_impl(*ppBVar9,fVar10);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xeb8131ac9);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            fVar11 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xeb8131ac9);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          }
        }
LAB_71001f31f0:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        FUN_71001f1900(this);
      }
    }
  }
LAB_71001f31f8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71001f3204:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

