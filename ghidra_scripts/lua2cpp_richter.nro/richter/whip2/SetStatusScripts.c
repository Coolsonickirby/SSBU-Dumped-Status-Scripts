
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponRichterWhip2::SetStatusScripts(L2CWeaponRichterWhip2 *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_MARIO_FIREBALL_STATUS_KIND_NUM;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

