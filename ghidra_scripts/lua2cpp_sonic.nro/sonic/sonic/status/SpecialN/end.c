
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSonic::status::SpecialN_end(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  long lVar2;
  long lVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_N_HOMING_START);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x4dba80bb2);
    lib::L2CValue::L2CValue(aLStack80,0xbb499cbe2);
    lVar2 = lib::L2CValue::as_integer(aLStack64);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar2,lVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

