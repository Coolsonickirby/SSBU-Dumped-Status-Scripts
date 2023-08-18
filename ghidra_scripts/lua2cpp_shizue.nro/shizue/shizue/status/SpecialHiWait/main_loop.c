
void __thiscall
L2CFighterShizue::status::SpecialHiWait_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    FUN_71000200c0(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      FUN_71000205b0(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        FUN_7100020ad0(aLStack64,this,aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,false);
          FUN_710001eaf0(this,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          iVar2 = 0;
          goto LAB_71000219c8;
        }
      }
    }
  }
  iVar2 = 1;
LAB_71000219c8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

