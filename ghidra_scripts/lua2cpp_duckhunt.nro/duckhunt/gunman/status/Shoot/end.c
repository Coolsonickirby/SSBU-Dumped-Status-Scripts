
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntGunman::status::Shoot_end(L2CWeaponDuckhuntGunman *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_DUCKHUNT_GUNMAN_STATUS_KIND_DEAD;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    FUN_710002fb30(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

