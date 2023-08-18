
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialNCancel_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
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
  
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lVar1 = -0x70;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack144,iVar5);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) == 0) goto LAB_710001c168;
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar3 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (this->moduleAccessor,(bool)(bVar3 & 1));
      lVar1 = -0x40;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_710001c168:
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
LAB_710001c244:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,-1);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          iVar6 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
          goto LAB_710001c2f4;
        }
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) goto LAB_710001c244;
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
LAB_710001c2f4:
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar8 = lib::L2CValue::operator__(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar8 & 1) != 0) goto LAB_710001c444;
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001c854;
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
LAB_710001c444:
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,(int)CONTROL_PAD_BUTTON_GUARD);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,-1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar2 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,-1);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,aLStack112);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x70));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001c854;
    }
  }
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x70));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710001c854;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x70));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710001c854;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1012b7fbf8);
    lib::L2CValue::L2CValue(aLStack128,0x14930274b8);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack192,aLStack80);
    lib::L2CValue::L2CValue(aLStack208,aLStack128);
    lib::L2CValue::L2CValue(aLStack224,aLStack144);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,false);
    FUN_7100013d60(this,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001c854:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

