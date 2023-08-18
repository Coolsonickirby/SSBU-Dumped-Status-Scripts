
void __thiscall L2CWeaponTrailFire::_L2CWeaponTrailFire(L2CWeaponTrailFire *this)

{
  *(code **)this = lua2cpp::L2CFighterCommon::LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::_L2CAgentBase((L2CAgentBase *)this);
  return;
}

