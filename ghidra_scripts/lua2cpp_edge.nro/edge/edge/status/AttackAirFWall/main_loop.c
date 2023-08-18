
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::AttackAirFWall_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_710001fa28:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001fa34;
    }
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001fa34;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar5 = lib::L2CValue::operator_(aLStack80,pLVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_ALL);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_END);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710001fa34;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_ENABLE_ACTION_BUTTON_TRIGGER);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_710001fa28;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::operator_(aLStack144);
    lib::L2CValue::operator_(pLVar6,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0xc60e57049);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1c);
      lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack240,0xcba8643d6);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack208,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar6,aLStack208);
      uVar5 = uVar5 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_END);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001fa34;
    }
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,false);
    lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) == 0) goto LAB_710001f7e4;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
LAB_710001f7e4:
    fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0xc36694af0);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
      lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack160,0xcec0a796f);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar5 = lib::L2CValue::operator_(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_710001fa28;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_ATTACK_AIR_F_WALL_JUMP);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
LAB_710001fa34:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

