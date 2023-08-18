
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNSpit_init(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,uVar2);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

