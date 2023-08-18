
void __thiscall
L2CFighterYoshi::status::Guard_main_loop(L2CFighterYoshi *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_guard_main_common_air(this);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_guard_cont(this);
    lib::L2CValue::_L2CValue(aLStack80);
    lua2cpp::L2CFighterCommon::status_guard_main_common(this);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

