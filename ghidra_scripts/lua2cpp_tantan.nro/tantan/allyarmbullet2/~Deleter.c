
void __thiscall
L2CWeaponTantanAllyarmbullet2::__L2CWeaponTantanAllyarmbullet2(L2CWeaponTantanAllyarmbullet2 *this)

{
  *(code **)this = lib::L2CValue::LUA_SCRIPT_LINE_STATUS_SHIFT;
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::_L2CAgentBase((L2CAgentBase *)this);
  operator_delete(this);
  return;
}

