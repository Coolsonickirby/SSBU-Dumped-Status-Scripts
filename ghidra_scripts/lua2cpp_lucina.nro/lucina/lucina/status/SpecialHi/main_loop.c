
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::SpecialHi_main_loop(L2CFighterLucina *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  undefined8 uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001bbf4;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack160,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710001bbf4;
    }
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
LAB_710001bb74:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001bbf4;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_FALL_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) goto LAB_710001bb74;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar5);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar5 >> 0x20));
      lib::L2CValue::operator_(aLStack64,aLStack160);
      lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack160,-0.001);
      uVar4 = lib::L2CValue::operator_(aLStack80,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710001bbf4;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001bbf4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

