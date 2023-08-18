
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPlizardon::status::SpecialSRush_end(L2CFighterPlizardon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  uint uVar2;
  long lVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PLIZARDON_STATUS_KIND_SPECIAL_S_END);
  uVar1 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar1 = lib::L2CValue::as_number(aLStack80);
    lVar3 = lib::L2CValue::as_number(aLStack96);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    local_40 = uVar1 & 0xffffffff | lVar3 << 0x20;
    uStack56 = (ulong)uVar2;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

