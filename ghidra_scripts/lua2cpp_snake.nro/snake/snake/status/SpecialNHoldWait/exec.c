
void __thiscall
L2CFighterSnake::status::SpecialNHoldLanding_exec(L2CFighterSnake *this,L2CValue *return_value)

{
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessShoot_execShoot_Common(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

