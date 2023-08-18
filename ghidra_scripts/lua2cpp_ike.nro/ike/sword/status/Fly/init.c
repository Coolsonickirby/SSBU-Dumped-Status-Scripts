
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponIkeSword::status::Fly_init(L2CWeaponIkeSword *this,L2CValue *return_value)

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
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  L2CValue aLStack272 [16];
  undefined8 local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_WEAPON_IKE_SWORD_STATUS_KIND_FLY);
  uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack272,0x51a07c0e7);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    HVar6 = lib::L2CValue::as_hash(aLStack272);
    uVar7 = lib::L2CValue::as_number(this_00);
    uVar8 = lib::L2CValue::as_number(this_01);
    uVar9 = lib::L2CValue::as_number(this_02);
    local_80 = CONCAT44(uVar8,uVar7);
    uStack120 = (ulong)uVar9;
    app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar6,(Vector3f *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_80);
    lib::L2CValue::L2CValue(aLStack240,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack224,(float)uStack120);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_100);
    lib::L2CValue::operator_(pLVar4,aLStack240);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_IKE_SWORD_STATUS_WORK_FLOAT_ANGLE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar10);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x51a07c0e7);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_80);
    uVar7 = lib::L2CValue::as_number(pLVar3);
    uVar8 = lib::L2CValue::as_number(pLVar4);
    uVar9 = lib::L2CValue::as_number(pLVar5);
    local_100 = CONCAT44(uVar8,uVar7);
    uStack248 = (ulong)uVar9;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar6,(Vector3f *)&local_100,0,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

