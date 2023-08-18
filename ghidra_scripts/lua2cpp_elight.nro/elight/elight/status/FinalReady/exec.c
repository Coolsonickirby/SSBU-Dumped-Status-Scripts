
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::FinalReady_exec(L2CFighterElight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack112,0x11e4f6fc59);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::operator_(aLStack96,pLVar4);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar2 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_SLOW);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar2 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_ATTACK);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_FINAL_MODULE_READY_EXIT_PRE);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_ELight::call_final_module(pFVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_FINAL_MODULE_READY_EXEC);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_ELight::call_final_module(pFVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar2 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_STATUS_FINAL_FLAG_TO_SCENE01);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

