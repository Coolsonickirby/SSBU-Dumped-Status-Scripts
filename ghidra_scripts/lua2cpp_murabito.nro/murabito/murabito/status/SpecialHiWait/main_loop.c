
void __thiscall
L2CFighterMurabito::status::SpecialHiWait_main_loop(L2CFighterMurabito *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    FUN_7100021090(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      FUN_7100021580(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        FUN_7100021aa0(aLStack64,this,aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,false);
          FUN_710001fac0(this,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          iVar2 = 0;
          goto LAB_7100022998;
        }
      }
    }
  }
  iVar2 = 1;
LAB_7100022998:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

