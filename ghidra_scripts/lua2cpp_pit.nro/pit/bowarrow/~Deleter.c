
void __thiscall L2CWeaponPitBowarrow::__L2CWeaponPitBowarrow(L2CWeaponPitBowarrow *this)

{
  *(code **)this = lua2cpp::L2CWeaponCommon::LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA;
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::_L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::_L2CAgentBase((L2CAgentBase *)this);
  operator_delete(this);
  return;
}
