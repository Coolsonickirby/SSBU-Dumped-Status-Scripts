
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialLw_main_loop(L2CFighterKoopajr *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) goto LAB_710000fe9c;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710000fe9c:
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_710000fe9c;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator_(aLStack96,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator_(aLStack96,aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,aLStack96);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_71000101d4;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0xab6928cf2);
  lib::L2CValue::L2CValue(aLStack144,0xe46c0e666);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_LW);
  lib::L2CValue::L2CValue(aLStack192,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack208,GROUND_CORRECT_KIND_AIR);
  FUN_7100010330(aLStack64,this,aLStack96,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192,
                 aLStack208);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000101d4:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

