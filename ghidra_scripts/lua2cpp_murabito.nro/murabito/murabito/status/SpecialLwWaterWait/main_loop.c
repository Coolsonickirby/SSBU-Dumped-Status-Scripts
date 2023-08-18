
void __thiscall
L2CFighterMurabito::status::SpecialLwWaterWait_main_loop
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack64 [16];
  
  FUN_710001c240(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_ItemShootWait_Common_Main(this);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

