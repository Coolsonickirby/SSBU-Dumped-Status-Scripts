
void __thiscall
L2CWeaponDiddyBunshin::status::Fly_end(L2CWeaponDiddyBunshin *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  lVar5 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf8eef72e2);
  lib::L2CValue::L2CValue(aLStack80,1);
  HVar2 = lib::L2CValue::as_hash((L2CValue *)&local_40);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

