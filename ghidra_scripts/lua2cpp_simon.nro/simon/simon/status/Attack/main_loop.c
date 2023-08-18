
void __thiscall
L2CFighterSimon::status::Attack_main_loop(L2CFighterSimon *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_Attack_Main(this);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_710000d3c0(aLStack64,this);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

