
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialSKick_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  L2CValue *this_00;
  ulong uVar3;
  int iVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    iVar4 = 1;
    goto LAB_7100026a18;
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_FLIP_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      goto LAB_7100026a00;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_KICK_LANDING);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_7100026a00:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar4 = 0;
LAB_7100026a18:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

