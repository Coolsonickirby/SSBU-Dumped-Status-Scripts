
void __thiscall
L2CFighterPlizardon::status::SpecialHi_end(L2CFighterPlizardon *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue
            (aLStack48,lua2cpp::L2CFighterCommon::super_jump_punch_reset_common_condition);
  lua2cpp::L2CFighterCommon::super_jump_punch_end(this,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

