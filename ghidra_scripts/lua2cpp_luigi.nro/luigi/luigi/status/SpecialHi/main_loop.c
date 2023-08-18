
void __thiscall
L2CFighterLuigi::status::SpecialHi_main_loop(L2CFighterLuigi *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::super_jump_punch_main(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

