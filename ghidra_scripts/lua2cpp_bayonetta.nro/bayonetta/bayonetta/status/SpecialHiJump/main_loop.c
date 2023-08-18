
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialHiJump_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  undefined8 uVar5;
  float in_register_00005008;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack192,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack192,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710002730c;
      }
    }
    uVar5 = app::lua_bind::MotionModule__trans_move_speed_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar5);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar5 >> 0x20));
    lib::L2CValue::L2CValue(aLStack160,in_register_00005008);
    lib::L2CValue::operator_(aLStack80,aLStack192);
    lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::operator_(aLStack112,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,-0.001);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(this_00,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_LANDING);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710002730c;
      }
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_SHOOTING_STEP_SHOOTING);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_HI_FLAG_SHOOTING);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_710002730c:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

