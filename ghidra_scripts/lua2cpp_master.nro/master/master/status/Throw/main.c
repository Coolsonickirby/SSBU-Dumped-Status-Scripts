
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMaster::status::Throw_main(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,uVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_Throw(this);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

