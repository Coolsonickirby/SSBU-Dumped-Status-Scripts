
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSamusdBomb::status::BurstAttack_exec(L2CWeaponSamusdBomb *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SAMUS_BOMB_INSTANCE_WORK_ID_INT_RANDOM_ROT_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  local_50 = CONCAT44(uVar5,uVar4);
  uStack72 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SAMUS_BOMB_STATUS_KIND_FALL);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SAMUS_BOMB_STATUS_KIND_BURST_ATTACK);
    lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  }
  else {
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar3 & 1) == 0) goto LAB_7100024fb0;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_7100024fb0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

