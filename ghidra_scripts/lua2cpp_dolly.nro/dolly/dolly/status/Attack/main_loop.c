
void __thiscall
L2CFighterDolly::status::Attack_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100020f50(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
LAB_7100021a48:
    iVar1 = 1;
  }
  else {
    iVar1 = app::lua_bind::ComboModule__count_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      FUN_710001fc60(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_7100021a48;
    }
    lua2cpp::L2CFighterCommon::status_Attack_Main(this);
    lib::L2CValue::_L2CValue(aLStack64);
    iVar1 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar1);
  return;
}

