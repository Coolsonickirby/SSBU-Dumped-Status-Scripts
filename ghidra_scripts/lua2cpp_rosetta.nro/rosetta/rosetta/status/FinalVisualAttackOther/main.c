
void __thiscall
L2CFighterRosetta::status::FinalVisualAttackOther_main
          (L2CFighterRosetta *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,PHYSICS_SWING_SPECIAL_STATE_BINDPOSE_SKIRT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::PhysicsModule__set_swing_special_state_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_FinalVisualAttackOther(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

