
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialAirSFall_exit(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_KIND_SPECIAL_AIR_S_END);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

