
void __thiscall
L2CFighterDolly::status::AttackS3_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  ulong uVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100020f50(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    FUN_710001fc60(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) != 0) {
      lua2cpp::L2CFighterCommon::status_AttackS3_Main(this);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar2 = 0;
      goto LAB_710002167c;
    }
  }
  iVar2 = 1;
LAB_710002167c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

