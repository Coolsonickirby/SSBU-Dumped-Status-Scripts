
void __thiscall
L2CWeaponInklingSquid::status::SpecialHiJump_end(L2CWeaponInklingSquid *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x15b0e1e55c);
  lib::L2CValue::L2CValue(aLStack80,5);
  HVar2 = lib::L2CValue::as_hash(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

