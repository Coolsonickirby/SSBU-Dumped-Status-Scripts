
void __thiscall
L2CFighterLucas::status::AttackAir_main_loop(L2CFighterLucas *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *this_00;
  int iVar2;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackAir_Main_common(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::operator_(this_00);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_attack_air_inherit_jump_aerial_motion_uniq_process_exec_fix_pos
                (this);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

