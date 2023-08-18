
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialHiJump_main_loop(L2CFighterDedede *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) goto LAB_7100027ebc;
  bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100027af0:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_TRANSITION_TERM_ID_TURN);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) {
LAB_7100027e34:
        lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_UP);
        uVar6 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar3 & 1U) == 0) {
          bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_INT_JUMP_STEP)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack96,iVar5);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_JUMP_STEP_START);
            uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_JUMP_STEP_LOOP);
              lib::L2CValue::L2CValue
                        (aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_INT_JUMP_STEP);
              iVar5 = lib::L2CValue::as_integer(aLStack80);
              iVar7 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar7);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack80);
            }
            FUN_71000276c0(this);
          }
          goto LAB_7100027ebc;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_HIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
        lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack112,0xcce8375ba);
        uVar8 = lib::L2CValue::as_integer(aLStack96);
        uVar10 = lib::L2CValue::as_integer(aLStack112);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar10);
        lib::L2CValue::L2CValue(aLStack80,fVar11);
        uVar8 = lib::L2CValue::operator__(aLStack80,pLVar9);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
          fVar11 = (float)app::lua_bind::ControlModule__get_stick_prev_y_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack144,fVar11);
          lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack192,0xcce8375ba);
          uVar8 = lib::L2CValue::as_integer(aLStack176);
          uVar10 = lib::L2CValue::as_integer(aLStack192);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack160,fVar11);
          uVar8 = lib::L2CValue::operator_(aLStack144,aLStack160);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_TURN);
            lib::L2CValue::L2CValue(aLStack96,true);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
            goto LAB_7100027eac;
          }
        }
        lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_CANCEL);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar3 & 1U) == 0) goto LAB_7100027e34;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_TURN);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_TURN);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_LANDING);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
LAB_7100027eac:
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) goto LAB_7100027ebc;
      goto LAB_7100027af0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar2 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100027ebc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

