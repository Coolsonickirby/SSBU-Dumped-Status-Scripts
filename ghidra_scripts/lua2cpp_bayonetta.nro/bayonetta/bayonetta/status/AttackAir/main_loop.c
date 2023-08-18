
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::AttackAir_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack272,false);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::operator_(aLStack272,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_START);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_LOOP_START);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_LOOP);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_7100010f20;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_LOOP_START);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,false);
        FUN_7100011690(aLStack160,this,aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
      lib::L2CValue::L2CValue(aLStack96,&DAT_71000119a0);
      lib::L2CValue::operator_(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_LOOP);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::operator_(aLStack272,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLAG_LOOPED);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) == 0) goto LAB_7100010f20;
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_LOOP_MOTION_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar7);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::L2CValue(aLStack240,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack208);
      fVar10 = (float)lib::L2CValue::as_number(aLStack224);
      bVar1 = lib::L2CValue::as_bool(aLStack240);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLAG_LOOPED);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_MOTION_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar7);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLOAT_MOTION_RESTART_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
                (this->moduleAccessor,HVar8,fVar9,fVar10,0.0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_STEP_END);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
LAB_7100010f20:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack256,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack192,aLStack256);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_ATTACK_AIR_FLAG_KEEP_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
LAB_71000110b8:
    lib::L2CValue::L2CValue(aLStack144,false);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_landing(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_71000110b8;
      lib::L2CValue::L2CValue(aLStack144,true);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_ATTACK_AIR_FLAG_ENABLE_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,true);
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,true);
    goto LAB_71000112fc;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100011214:
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack176,true);
        goto LAB_71000112fc;
      }
    }
    lib::L2CValue::L2CValue(aLStack176,false);
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
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100011214;
    }
    lib::L2CValue::L2CValue(aLStack176,true);
  }
LAB_71000112fc:
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::operator_(pLVar6);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_exec_fix_pos(this);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack256);
  return;
}

