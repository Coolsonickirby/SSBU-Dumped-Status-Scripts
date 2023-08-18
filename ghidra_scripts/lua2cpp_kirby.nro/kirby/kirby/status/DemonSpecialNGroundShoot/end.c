
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DemonSpecialNGroundShoot_end(L2CFighterKirby *this,L2CValue *return_value)

{
  VisibilityMode VVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_VISIBILITY_MODE_GUARANTEE);
  VVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::VisibilityModule__set_visibility_mode_impl(this->moduleAccessor,VVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

