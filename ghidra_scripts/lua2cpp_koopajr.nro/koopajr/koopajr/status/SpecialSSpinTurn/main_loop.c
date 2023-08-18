
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialSSpinTurn_main_loop
          (L2CFighterKoopajr *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) goto LAB_7100012ee0;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100012ee0:
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100012ee0;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_71000132d0:
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_NORMAL_GRAVITY);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar6 = aLStack192;
LAB_710001340c:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CHANGED_GRAVITY);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CHANGED_GRAVITY);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        pLVar6 = aLStack80;
        goto LAB_710001340c;
      }
    }
    FUN_7100013910(aLStack176,this);
    lib::L2CValue::_L2CValue(aLStack176);
    FUN_7100012af0(this);
    lib::L2CValue::L2CValue(aLStack208,aLStack96);
    lib::L2CValue::L2CValue(aLStack224,0xeb40e32ed);
    lib::L2CValue::L2CValue(aLStack240,0x12f65cc722);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S_SPIN_TURN);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S_SPIN_TURN);
    lib::L2CValue::L2CValue(aLStack288,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack304,GROUND_CORRECT_KIND_AIR);
    FUN_7100010330(aLStack192,this,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288
                   ,aLStack304);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S_SPIN_TURN);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    FUN_7100013d90(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_SPIN_TURN_JUMP);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator_(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar1 & 1U) == 0) {
        bVar1 = false;
LAB_7100013128:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        if (bVar1) {
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar3 & 1U) == 0) goto LAB_7100013244;
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_FLICK_JUMP);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar1 & 1U) == 0) {
          bVar1 = true;
          goto LAB_7100013128;
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_INT_JUMP_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_JUMP);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001363c;
      }
    }
LAB_7100013244:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_71000132d0;
    lib::L2CValue::L2CValue(aLStack112,0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack112);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001363c:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

