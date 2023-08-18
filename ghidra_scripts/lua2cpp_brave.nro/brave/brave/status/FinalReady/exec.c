
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::FinalReady_exec(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack112,0x11e4f6fc59);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::operator_(aLStack96,pLVar5);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_SLOW);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_CLEAR_ATTACK);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_FINAL_MODULE_READY_EXIT_PRE);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Brave::call_final_module(pFVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_FINAL_MODULE_READY_EXEC);
  pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Brave::call_final_module(pFVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar3 = lib::L2CValue::operator__(aLStack96,pLVar5);
  if ((uVar3 & 1) != 0) {
    bVar1 = app::lua_bind::FighterManager__is_prepared_movie_impl(LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_TO_SCENE01);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

