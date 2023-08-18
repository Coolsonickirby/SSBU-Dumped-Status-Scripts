
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponPackunBosspackun::SetStatusScripts(L2CWeaponPackunBosspackun *this)

{
  int iVar1;
  L2CValue *this_00;
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_NUM;
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_71000345d0(this);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

