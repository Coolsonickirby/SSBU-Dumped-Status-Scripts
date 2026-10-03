
void __thiscall L2CWeaponTrailIce::~L2CWeaponTrailIce(L2CWeaponTrailIce *this)

{
  *(code **)this = lua2cpp::L2CFighterCommon::LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0x108));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0xf8));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0xe8));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 0xd8));
  lib::L2CValue::~L2CValue((L2CValue *)(this + 200));
  lua2cpp::L2CAgentBase::~L2CAgentBase((L2CAgentBase *)this);
  return;
}

