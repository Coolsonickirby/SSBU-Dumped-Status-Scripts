
void __thiscall
L2CFighterLuigi::status::SpecialHiLandingFall_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_landing_fall_special(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

