
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::AttackHi3_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100020f50(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
LAB_710002152c:
    iVar2 = 1;
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE);
    uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
LAB_71000214d0:
      FUN_710001fc60(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710002152c;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_ESCAPE_ATTACK);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) goto LAB_71000214d0;
    }
    lua2cpp::L2CFighterCommon::status_AttackHi3_Main(this);
    lib::L2CValue::_L2CValue(aLStack64);
    iVar2 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

