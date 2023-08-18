
void __thiscall
L2CFighterKoopajr::status::CliffCatch_end(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CliffCatch(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710000ebb0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

