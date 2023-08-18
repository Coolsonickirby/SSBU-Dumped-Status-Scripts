
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::ItemShootAir_pre(L2CFighterRobot *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_KEEP);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_SHOOT_AIR);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lua2cpp::L2CFighterCommon::status_pre_ItemShootAir_New(this);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_SHOOT_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

