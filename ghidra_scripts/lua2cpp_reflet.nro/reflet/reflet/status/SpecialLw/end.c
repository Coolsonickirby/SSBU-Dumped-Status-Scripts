
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialLw_end(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_SPECIAL_LW_CAPTURE);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    bVar1 = app::lua_bind::CatchModule__is_catch_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) != 0) {
      app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

