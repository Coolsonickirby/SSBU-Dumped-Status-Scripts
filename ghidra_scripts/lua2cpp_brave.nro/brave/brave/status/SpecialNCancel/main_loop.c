
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialNCancel_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
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
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,0x1012b7fbf8);
  lib::L2CValue::L2CValue(aLStack128,0x14930274b8);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar5 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack272,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar6 = lib::L2CValue::operator__(aLStack272,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) == 0) goto LAB_710002e870;
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (this->moduleAccessor,(bool)(bVar1 & 1));
      pLVar5 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
LAB_710002e870:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack240,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
LAB_710002e968:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,-1);
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack240);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          goto LAB_710002ea18;
        }
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710002e968;
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_710002ea18:
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack256);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,-1);
    uVar6 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar6 = lib::L2CValue::operator__(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,aLStack240);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710002ed84;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      uVar6 = lib::L2CValue::operator__(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,aLStack240);
        lib::L2CValue::L2CValue(aLStack256,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710002ed84;
      }
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack288,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xe0);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack272,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack304,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) != 0) goto LAB_710002ec24;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002ed84;
  }
  lib::L2CValue::_L2CValue(aLStack256);
LAB_710002ec24:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710002ed84;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710002ed84;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002ed84:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

