
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWarioWariobike::status::SpecialSEscapeStart_end
          (L2CWeaponWarioWariobike *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  float fVar3;
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_ESCAPE;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator__(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::AttackModule__set_power_mul_impl(this->moduleAccessor,fVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

