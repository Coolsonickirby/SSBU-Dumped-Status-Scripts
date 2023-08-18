
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BraveSpecialNHold_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
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
  
  lib::L2CValue::L2CValue(aLStack112,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack128,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar1 & 1U) != 0) goto LAB_7100153e78;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack240);
LAB_7100153e78:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_TO_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_TO_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710015474c;
  }
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0xc245caa4e);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_N_HOLD_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack240,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    iVar3 = SITUATION_KIND_AIR;
    if ((bVar1 & 1U) == 0) {
LAB_710015425c:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack256);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_JUMP_CANCEL);
          lib::L2CValue::L2CValue(aLStack256,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar5 = aLStack96;
          goto LAB_7100154734;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((uVar6 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
          lib::L2CValue::operator_(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS)
            ;
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack272);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001546a8;
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator_(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS)
            ;
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack272);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001546a8;
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator_(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS)
            ;
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack272);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001546a8;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack256,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack272);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_71001546a8:
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack256);
          goto LAB_7100154744;
        }
        pLVar5 = aLStack256;
LAB_7100154734:
        lib::L2CValue::_L2CValue(pLVar5);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((uVar6 & 1) == 0) goto LAB_710015425c;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_CANCEL_L);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack256,0x1b6baf1c90);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar8 = lib::L2CValue::as_hash(aLStack256);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar8,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::FighterUtil::flash_eye_info(pBVar9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_BRAVE_SPECIAL_N_CANCEL);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100154744:
  lib::L2CValue::_L2CValue(aLStack240);
LAB_710015474c:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

