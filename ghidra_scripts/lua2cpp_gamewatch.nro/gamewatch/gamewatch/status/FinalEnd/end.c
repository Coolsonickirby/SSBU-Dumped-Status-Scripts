
void __thiscall
L2CFighterGamewatch::status::FinalEnd_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  FUN_710001dbf0();
  lua2cpp::L2CFighterCommon::sub_fighter_final_end_to_fall_common(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

