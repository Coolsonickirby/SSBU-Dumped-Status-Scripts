
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingStart_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_UP);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::StatusModule__set_keep_situation_air_impl(this->moduleAccessor,(bool)(bVar1 & 1))
    ;
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

