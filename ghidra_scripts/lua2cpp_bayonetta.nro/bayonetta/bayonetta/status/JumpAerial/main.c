
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::JumpAerial_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_JUMP_INT_JUMP_COUNT_BACKUP);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_JumpAerial(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

