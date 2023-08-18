
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterYoshi::status::FinalHit_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  L2CValue *this_00;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = aLStack80;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_FINAL_FLAG_TO_VISUAL_SCENE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_VISUAL_SCENE_MODULE_START_EXIT);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(this_00);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Yoshi::call_final_module(pFVar5,iVar3);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_VISUAL_SCENE_MODULE_READY_EXIT);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::FighterSpecializer_Yoshi::call_final_module(pFVar5,iVar3);
    pLVar4 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

