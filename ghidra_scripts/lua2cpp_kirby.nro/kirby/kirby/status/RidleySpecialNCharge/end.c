
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RidleySpecialNCharge_end(L2CFighterKirby *this,L2CValue *return_value)

{
  HitStatus HVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_RIDLEY_SPECIAL_N_SHOOT);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x10f198450e);
    lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_OFF);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    HVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar3,HVar1,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

