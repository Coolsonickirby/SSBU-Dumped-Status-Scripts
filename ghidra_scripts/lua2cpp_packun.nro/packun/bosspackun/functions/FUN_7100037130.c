
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100037130(L2CWeaponPackunBosspackun *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  Weapon *pWVar3;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_HOP);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
    pWVar3 = (Weapon *)lib::L2CValue::as_pointer(pLVar1);
    app::WeaponSpecializer_PackunBosspackun::end_turn(pWVar3);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

