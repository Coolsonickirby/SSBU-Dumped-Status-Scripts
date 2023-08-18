
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::AttackCommand2_main_loop(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710004b618:
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_ATTACK_FLAG_HIT_CANCEL);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar5);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
          FUN_710001f240(aLStack96,this,aLStack128);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) goto LAB_710004b7a4;
        }
      }
      goto LAB_710004b70c;
    }
    lib::L2CValue::L2CValue(aLStack144,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710004b618;
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    FUN_710001f080(aLStack96,this,aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710004b618;
LAB_710004b7a4:
    iVar4 = 1;
    goto LAB_710004b8ac;
  }
LAB_710004b70c:
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_710004b7a4;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
      goto LAB_710004b894;
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_ATTACK_FLAG_BRANCH);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack192,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
          iVar4 = lib::L2CValue::as_integer(aLStack192);
          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) goto LAB_710004bd24;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack160,0x19367f82c5);
        uVar6 = lib::L2CValue::as_integer(aLStack96);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack192,0xfd2759b0b);
        HVar9 = lib::L2CValue::as_hash(aLStack192);
        bVar1 = app::lua_bind::MotionModule__is_flag_start_1_frame_from_motion_kind_impl
                          (this->moduleAccessor,HVar9);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::operator_(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::operator_(aLStack144,aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        lib::L2CValue::L2CValue(aLStack96,0xfd2759b0b);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,true);
        HVar9 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        fVar12 = (float)lib::L2CValue::as_number(aLStack208);
        bVar3 = lib::L2CValue::as_bool(aLStack224);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),fVar12,
                   (bool)(bVar3 & 1),false);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack160,0x259e752514);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_ATTACK_KIND_ATTACK_COMMAND3);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_ATTACK_FLAG_CHANGE_LOG);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_ATTACK_FLAG_WEAK_BRANCH_FRAME_FIRST);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
LAB_710004bd24:
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_RYU_STATUS_ATTACK_FLAG_BRANCH);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      pLVar7 = aLStack144;
      goto LAB_710004b8a0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
LAB_710004b894:
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar7 = aLStack96;
LAB_710004b8a0:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  iVar4 = 0;
LAB_710004b8ac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

