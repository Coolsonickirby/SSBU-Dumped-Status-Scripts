
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::AttackHi3_main_loop(L2CFighterRockman *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  undefined8 uVar6;
  float in_register_00005008;
  L2CValue aLStack208 [16];
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
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100017f90;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100017f90;
        }
      }
    }
    uVar6 = app::lua_bind::MotionModule__trans_move_speed_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
    lib::L2CValue::operator_(aLStack80,aLStack176);
    lib::L2CValue::operator_(aLStack96,aLStack160);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,-0.001);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_landing(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100017f90;
      }
    }
    lua2cpp::L2CFighterCommon::status_AttackHi3_Main_minjump(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar1 & 1U) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack176,true);
      uVar4 = lib::L2CValue::operator__(aLStack192,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_LIGHT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100017f90:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

