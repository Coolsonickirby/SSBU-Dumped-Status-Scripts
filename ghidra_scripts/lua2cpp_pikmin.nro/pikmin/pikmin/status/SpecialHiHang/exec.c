
/* WARNING: Could not reconcile some variable overlaps */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiHang_exec
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
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
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x35dbfe258);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar4 = lib::L2CValue::as_hash(aLStack272);
  uVar7 = lib::L2CValue::as_number(this_00);
  lVar8 = lib::L2CValue::as_number(this_01);
  uVar6 = lib::L2CValue::as_number(this_02);
  local_90 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack136 = (ulong)uVar6;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar4,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue(aLStack256,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar1,aLStack256);
  lib::L2CValue::operator_(pLVar2,aLStack240);
  lib::L2CValue::operator_(pLVar3,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,*pfVar5);
  lib::L2CValue::L2CValue(aLStack240,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar5[2]);
  FUN_7100008920(aLStack272,this,aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::operator_(pLVar2,pLVar1);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar7 = lib::L2CValue::as_number(pLVar1);
  lVar8 = lib::L2CValue::as_number(pLVar2);
  uVar6 = lib::L2CValue::as_number(pLVar3);
  local_90 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack136 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

