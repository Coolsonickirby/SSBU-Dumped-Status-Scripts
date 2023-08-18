
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiJump_main_loop(L2CFighterInkling *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong *this_00;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong auStack96 [2];
  ulong local_50;
  ulong uStack72;
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    iVar4 = 1;
    goto LAB_710001b460;
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack96,_GROUND_TOUCH_FLAG_UP_SIDE);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      this_00 = auStack96;
      goto LAB_710001b454;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_HI_FLAG_CAN_STOP_CEIL);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar5 = lib::L2CValue::as_number((L2CValue *)auStack96);
      lVar6 = lib::L2CValue::as_number(aLStack112);
      uVar3 = lib::L2CValue::as_number(aLStack128);
      local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
      uStack72 = (ulong)uVar3;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack96);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_FLAG_CAN_STOP_CEIL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_HI_STOP_CEIL);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_710001b2ac;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_HI_ROT);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710001b2ac:
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    this_00 = &local_50;
LAB_710001b454:
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
  }
  iVar4 = 0;
LAB_710001b460:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

