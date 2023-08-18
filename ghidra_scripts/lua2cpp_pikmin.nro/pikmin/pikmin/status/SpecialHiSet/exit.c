
void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiSet_exit(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack80);
  lVar4 = lib::L2CValue::as_number(aLStack96);
  uVar1 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar3 & 0xffffffff | lVar4 << 0x20;
  uStack56 = (ulong)uVar1;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  fVar2 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
  app::lua_bind::GroundModule__set_offset_y_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

