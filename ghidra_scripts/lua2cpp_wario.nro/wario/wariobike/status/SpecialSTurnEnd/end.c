
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWarioWariobike::status::SpecialSTurnEnd_end
          (L2CWeaponWarioWariobike *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_DRIVE;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1403adfb62);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

