
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLucas::status::Down_main(L2CFighterLucas *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  long lVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_HI_ATTACK);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_DOWN_WORK_INT_MOTION_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,lVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,0x17c86f4dc5);
    lib::L2CValue::L2CValue(aLStack64,0xcc24d7e43);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0x17a2df6d37);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_DOWN_WORK_INT_MOTION_KIND);
    lVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_Down(this);
  return;
}

