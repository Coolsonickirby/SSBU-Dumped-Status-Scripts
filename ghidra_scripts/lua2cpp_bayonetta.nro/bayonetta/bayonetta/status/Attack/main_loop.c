
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Attack_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  BattleObjectModuleAccessor **ppBVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  ppBVar9 = &this->moduleAccessor;
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,HVar4);
  lib::L2CValue::L2CValue(aLStack80,0x9725c4452);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lua2cpp::L2CFighterCommon::check_100_count(this);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000125fc;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,0xe1a7373c0);
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(int)FIGHTER_ATTACK100_TYPE_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_100);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_ATTACK_FLAG_ENABLE_100);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_ATTACK_WORK_INT_100_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::L2CValue(aLStack160,0x150ad6505a);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_100);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_71000125fc;
          }
        }
      }
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000125fc;
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_ANIMCMD_EXPRESSION);
      HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack128,HVar4);
      lua2cpp::L2CFighterCommon::get_mini_jump_attack_data_cancel_function(this,(L2CValue)0x80);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar4 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar9,iVar3,HVar4,-1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
      lVar8 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterCommon::change_status_jump_mini_attack(this,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000125fc;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710001296c:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar8);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,lVar8);
        uVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(*ppBVar9,uVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_LOG_ATTACK_KIND);
        lVar8 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar7 = aLStack80;
        goto LAB_710001296c;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0x11aa00608a);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMBO_TYPE_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_COMBO_TYPE_HIT);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ATTACK_FLAG_RESTART);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000125fc;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ATTACK_FLAG_RESTART);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000125fc;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_71000125fc:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

