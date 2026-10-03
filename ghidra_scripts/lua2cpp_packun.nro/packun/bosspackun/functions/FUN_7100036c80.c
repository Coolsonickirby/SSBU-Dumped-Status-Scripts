
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100036c80(L2CWeaponPackunBosspackun *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_FLAME);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_LANDING);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_HIGH);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

