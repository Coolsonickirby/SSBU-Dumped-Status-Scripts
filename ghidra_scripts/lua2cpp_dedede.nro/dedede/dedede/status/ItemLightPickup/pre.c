
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::ItemLightPickup_pre(L2CFighterDedede *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,-1);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_pre_ItemLightPickup(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_S_GET);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

