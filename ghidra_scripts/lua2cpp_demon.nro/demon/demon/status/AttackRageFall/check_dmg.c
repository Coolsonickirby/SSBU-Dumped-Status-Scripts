
void __thiscall
L2CFighterDemon::status::AttackRageFall_check_dmg(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  lib::L2CValue::L2CValue(aLStack48,aLStack64);
  bVar1 = app::lua_bind::CatchModule__check_damage_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

