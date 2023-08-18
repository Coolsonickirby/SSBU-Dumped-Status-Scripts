
void __thiscall L2CWeaponPlizardonBreath::_L2CWeaponPlizardonBreath(L2CWeaponPlizardonBreath *this)

{
  *(code **)this = lua2cpp::L2CWeaponCommon::LUA_SCRIPT_STATUS_FUNC_EXEC_STOP;
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::_L2CAgentBase((L2CAgentBase *)this);
  return;
}

