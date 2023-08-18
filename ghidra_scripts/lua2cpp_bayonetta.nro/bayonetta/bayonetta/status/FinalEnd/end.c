
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  FUN_71000236f0();
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END_AFTER);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
    HVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

