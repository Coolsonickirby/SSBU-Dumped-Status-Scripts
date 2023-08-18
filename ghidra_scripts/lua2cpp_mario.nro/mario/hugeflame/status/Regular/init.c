
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioHugeflame::status::Regular_init(L2CWeaponMarioHugeflame *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  lib::L2CValue::L2CValue(aLStack272,0x5885fee9f);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack272);
  uVar11 = lib::L2CValue::as_number(pLVar5);
  lVar12 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  local_90 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar9;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue(aLStack256,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar2,aLStack256);
  lib::L2CValue::operator_(pLVar3,aLStack240);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_X);
  fVar10 = (float)lib::L2CValue::as_number(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar1);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_Y);
  fVar10 = (float)lib::L2CValue::as_number(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  lib::L2CValue::L2CValue(aLStack336,0x51156bf25);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack336);
  uVar11 = lib::L2CValue::as_number(pLVar5);
  lVar12 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  local_90 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar9;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue(aLStack256,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar2,aLStack256);
  lib::L2CValue::operator_(pLVar3,aLStack240);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack336);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_X);
  fVar10 = (float)lib::L2CValue::as_number(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar1);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_Y);
  fVar10 = (float)lib::L2CValue::as_number(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

