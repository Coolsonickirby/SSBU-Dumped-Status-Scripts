
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::FinalHitWait_end(L2CFighterMetaknight *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar4 = lib::L2CValue::as_number(aLStack112);
  uVar2 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar3 & 0xffffffff | lVar4 << 0x20;
  uStack72 = (ulong)uVar2;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_METAKNIGHT_STATUS_KIND_FINAL_SQUAT);
  uVar3 = lib::L2CValue::operator__(pLVar1,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_METAKNIGHT_STATUS_KIND_FINAL_END);
    uVar3 = lib::L2CValue::operator__(pLVar1,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) == 0) {
      FUN_7100011f70(this);
      FUN_7100012530(this);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

