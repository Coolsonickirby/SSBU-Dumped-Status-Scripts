
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::AttackAir_main_loop(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,1);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_7100011b00;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator_(pLVar5,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_7100011b00;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_7100011d88:
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = 1;
      goto LAB_7100011e24;
    }
LAB_7100011b00:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,1);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
        lib::L2CValue::operator_(pLVar5,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
            goto LAB_7100011d88;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
      lua2cpp::L2CFighterCommon::sub_is_fly_next(this,(L2CValue)0x90);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        uVar4 = lib::L2CValue::operator_(aLStack128,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100011dc4;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        goto LAB_7100011d88;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100011dc4:
  lua2cpp::L2CFighterCommon::status_AttackAir_Main_common(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::operator_(pLVar5);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_exec_fix_pos(this);
    }
  }
  iVar3 = 0;
LAB_7100011e24:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

