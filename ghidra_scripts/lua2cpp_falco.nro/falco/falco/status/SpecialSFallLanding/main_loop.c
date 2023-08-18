
void __thiscall
L2CFighterFalco::status::SpecialSFallLanding_main_loop(L2CFighterFalco *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Landing_MainSub(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)((bVar1 & 1U) != 0));
  return;
}

