
void __thiscall
L2CFighterSnake::status::SpecialNHoldJumpSquat_main_loop
          (L2CFighterSnake *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_ItemShootJumpSquat_Common_Main(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = (bVar1 & 1U) == 0;
  if (bVar1) {
    lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_execFixPos_Common(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

