
void __thiscall
L2CFighterRidley::status::SpecialSDragCliff_end(L2CFighterRidley *this,L2CValue *return_value)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack80);
  lVar3 = lib::L2CValue::as_number(aLStack96);
  uVar1 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar2 & 0xffffffff | lVar3 << 0x20;
  uStack56 = (ulong)uVar1;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100006ee0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

