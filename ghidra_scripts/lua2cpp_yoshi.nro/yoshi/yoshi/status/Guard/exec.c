
void __thiscall L2CFighterYoshi::status::Guard_exec(L2CFighterYoshi *this,L2CValue *return_value)

{
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessGuard_execStatus_common(this);
  FUN_710000a4b0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

