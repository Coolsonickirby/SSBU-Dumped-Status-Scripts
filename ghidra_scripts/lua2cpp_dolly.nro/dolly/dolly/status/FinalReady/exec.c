
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::FinalReady_exec(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_FINAL_WORK_INT_ATTACK_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,2);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_7100006c20;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_FINAL_WORK_FLAG_CLEAR_ATTACK);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_FINAL_MODULE_READY_EXIT_PRE);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::FighterSpecializer_Dolly::call_final_module(pFVar5,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_FINAL_WORK_FLAG_CLEAR_SLOW);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100006c20:
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_FINAL_WORK_INT_ATTACK_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_FINAL_MODULE_READY_EXEC);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::FighterSpecializer_Dolly::call_final_module(pFVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

