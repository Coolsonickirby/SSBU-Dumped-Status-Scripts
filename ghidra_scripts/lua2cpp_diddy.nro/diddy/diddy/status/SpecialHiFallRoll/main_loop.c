
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiFallRoll_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_710001e878;
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack96,false);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = lib::L2CValue::as_bool(aLStack96);
      bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                        (this->moduleAccessor,iVar3,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar4 = aLStack80;
      goto LAB_710001e86c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack64;
LAB_710001e86c:
    lib::L2CValue::_L2CValue(pLVar4);
  }
  iVar3 = 0;
LAB_710001e878:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

