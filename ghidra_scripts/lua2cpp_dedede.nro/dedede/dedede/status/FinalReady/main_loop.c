
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::FinalReady_main_loop(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x11e4f6fc59);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack64,2);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    app::lua_bind::SlowModule__clear_whole_impl(this->moduleAccessor);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator__(aLStack96,pLVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x2b45a7c914);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar2 = lib::L2CValue::operator__(aLStack80,pLVar4);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_KIND_FINAL_SCENE01);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

