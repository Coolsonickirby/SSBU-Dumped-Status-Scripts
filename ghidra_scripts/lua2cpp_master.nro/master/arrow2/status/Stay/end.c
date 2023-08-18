
void __thiscall
L2CWeaponMasterArrow2::status::Stay_end(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x11a4fa64fc);
  lib::L2CValue::L2CValue(aLStack80,5);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar4,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x18b3160cb9);
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,true);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

