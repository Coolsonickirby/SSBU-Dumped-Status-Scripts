
void __thiscall
L2CFighterSonic::status::Fall_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Fall_Main(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_71000123f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

