
void __thiscall L2CFighterPickel::status::Walk_main(L2CFighterPickel *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710006f9d0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    FUN_7100088b80(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,Walk_main_loop);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lua2cpp::L2CFighterCommon::status_Walk(this);
  }
  return;
}

