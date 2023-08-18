
void __thiscall
L2CFighterDolly::status::LadderCatchBottom_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0x20c525b8b6);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      FUN_710001fe10(aLStack112,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        iVar3 = 1;
        goto LAB_71000220d4;
      }
    }
  }
  lua2cpp::L2CFighterCommon::status_LadderCatchBottom_Main(this);
  lib::L2CValue::_L2CValue(aLStack64);
  iVar3 = 0;
LAB_71000220d4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

