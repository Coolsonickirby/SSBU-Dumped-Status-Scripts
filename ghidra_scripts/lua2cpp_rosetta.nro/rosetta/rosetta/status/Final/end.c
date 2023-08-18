
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRosetta::status::Final_end(L2CFighterRosetta *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::lua_bind::ModelModule__disable_gold_eye_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_REMOVE_ATTR);
  lib::L2CValue::L2CValue(aLStack96,_EFFECT_SUB_ATTRIBUTE_EMIT);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_module_access::effect(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

