
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialHi_main_loop(L2CFighterCaptain *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  undefined8 uVar6;
  float in_register_00005008;
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
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100013b08;
  }
  uVar6 = app::lua_bind::MotionModule__trans_move_speed_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
  lib::L2CValue::operator_(aLStack80,aLStack160);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING_FALL_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
LAB_7100013a60:
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar5 = aLStack192;
LAB_7100013a6c:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_7100013a60;
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_MOVE_TRANS);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack160,true);
    uVar4 = lib::L2CValue::operator__(aLStack208,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      goto LAB_7100013a60;
    }
    lib::L2CValue::L2CValue(aLStack160,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar5 = aLStack160;
      goto LAB_7100013a6c;
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_INT_STATUS_KIND_END);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100013b08:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

