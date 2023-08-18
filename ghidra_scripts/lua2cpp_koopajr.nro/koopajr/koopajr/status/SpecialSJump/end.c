
void __thiscall
L2CFighterKoopajr::status::SpecialSJump_end(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_71000120c0();
  lua2cpp::L2CFighterCommon::status_end_Jump(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

