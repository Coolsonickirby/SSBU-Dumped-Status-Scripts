
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialAirSCatch_init(L2CFighterGanon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_CATCH_SET_CATCH);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_module_access::_catch(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xd24aef7e6);
  lib::L2CValue::L2CValue(aLStack96,0x11ee0b6d39);
  FUN_7100007980(this,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_FALL);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

