
void __thiscall
L2CFighterKoopajr::status::DamageFlyRoll_end(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710000ed60();
  lua2cpp::L2CFighterCommon::status_end_DamageFlyRoll(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

