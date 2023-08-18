
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRobot::status::ItemThrow_pre(L2CFighterRobot *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_KEEP);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_pre_ItemThrow(this);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_pre_ItemThrow(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_THROW);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

