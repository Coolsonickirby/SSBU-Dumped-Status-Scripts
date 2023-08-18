
void __thiscall
L2CFighterLittlemac::status::SpecialHiJump_end(L2CFighterLittlemac *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,&LAB_7100019000);
  lua2cpp::L2CFighterCommon::super_jump_punch_end(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

