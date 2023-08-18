
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialNShoot_end(L2CFighterRidley *this,L2CValue *return_value)

{
  HitStatus HVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x10f198450e);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_OFF);
  HVar2 = lib::L2CValue::as_hash(aLStack64);
  HVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_status_joint_impl(this->moduleAccessor,HVar2,HVar1,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

