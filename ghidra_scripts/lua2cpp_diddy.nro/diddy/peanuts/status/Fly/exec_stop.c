
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyPeanuts::status::FlyWin1_exec_stop(L2CWeaponDiddyPeanuts *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar5;
  uint uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x31ed91fca);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  uVar8 = lib::L2CValue::as_number(this_00);
  lVar9 = lib::L2CValue::as_number(this_01);
  uVar6 = lib::L2CValue::as_number(this_02);
  local_90 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack136 = (ulong)uVar6;
  app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar5,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_100);
  lib::L2CValue::operator_(pLVar3,aLStack240);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_DIDDY_PEANUTS_STATUS_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar7);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31ed91fca);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar8 = lib::L2CValue::as_number(pLVar2);
  lVar9 = lib::L2CValue::as_number(pLVar3);
  uVar6 = lib::L2CValue::as_number(pLVar4);
  local_100 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack248 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar5,(Vector3f *)&local_100,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

