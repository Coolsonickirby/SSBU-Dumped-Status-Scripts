
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiHangStart_exec
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  
  lib::L2CValue::L2CValue
            (aLStack288,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_START_WORK_INT_INDEX);
  iVar1 = lib::L2CValue::as_integer(aLStack288);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,iVar1);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            (aLStack288,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_START_WORK_FLOAT_ROT_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack288);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,0);
  uVar2 = lib::L2CValue::operator__(aLStack160,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack288,2);
    uVar2 = lib::L2CValue::operator__(aLStack160,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar2 & 1) == 0) goto LAB_710002799c;
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::operator_(aLStack176,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::operator_(aLStack176,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_710002799c:
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::operator_(aLStack176,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            (aLStack288,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_START_WORK_FLOAT_ROT_Z);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar1 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  lib::L2CValue::L2CValue(aLStack304,0x35dbfe258);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  HVar6 = lib::L2CValue::as_hash(aLStack304);
  uVar2 = lib::L2CValue::as_number(this_00);
  lVar10 = lib::L2CValue::as_number(this_01);
  uVar9 = lib::L2CValue::as_number(this_02);
  local_90 = uVar2 & 0xffffffff | lVar10 << 0x20;
  uStack136 = (ulong)uVar9;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue(aLStack288,(float)local_90);
  lib::L2CValue::L2CValue(aLStack272,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack256,(float)uStack136);
  lib::L2CValue::operator_(pLVar3,aLStack288);
  lib::L2CValue::operator_(pLVar4,aLStack272);
  lib::L2CValue::operator_(pLVar5,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack288,*pfVar7);
  lib::L2CValue::L2CValue(aLStack272,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack256,pfVar7[2]);
  FUN_7100008920(aLStack304,this,aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  lib::L2CValue::operator_(pLVar4,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
  uVar2 = lib::L2CValue::as_number(pLVar3);
  lVar10 = lib::L2CValue::as_number(pLVar4);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  local_90 = uVar2 & 0xffffffff | lVar10 << 0x20;
  uStack136 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,aLStack176);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x162d277af);
  lib::L2CValue::L2CValue(aLStack384,1);
  uVar2 = lib::L2CValue::as_number(pLVar3);
  lVar10 = lib::L2CValue::as_number(pLVar4);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  local_90 = uVar2 & 0xffffffff | lVar10 << 0x20;
  uStack136 = (ulong)uVar9;
  iVar1 = lib::L2CValue::as_integer(aLStack384);
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_90,iVar1);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

