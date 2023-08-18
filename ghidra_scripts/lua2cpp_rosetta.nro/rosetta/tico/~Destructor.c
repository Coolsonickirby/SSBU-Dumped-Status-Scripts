
void __thiscall L2CWeaponRosettaTico::_L2CWeaponRosettaTico(L2CWeaponRosettaTico *this)

{
  *(code **)this = lua2cpp::L2CWeaponCommon::LUA_SCRIPT_LINE_MAP_CORRECTION;
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::_L2CAgentBase((L2CAgentBase *)this);
  return;
}

