
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPichuVortex::status::Hit_main_loop(L2CWeaponPichuVortex *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined8 local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_110,_WEAPON_PIKACHU_VORTEX_INSTANCE_WORK_ID_INT_OWNER_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,0x50000000);
  uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  if ((uVar4 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar5);
    }
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::L2CValue(aLStack288,0x35dbfe258);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::L2CValue(aLStack304,true);
    HVar9 = lib::L2CValue::as_hash(aLStack288);
    uVar11 = lib::L2CValue::as_number(this_00);
    uVar12 = lib::L2CValue::as_number(this_01);
    uVar3 = lib::L2CValue::as_number(this_02);
    local_80 = CONCAT44(uVar12,uVar11);
    uStack120 = (ulong)uVar3;
    bVar1 = lib::L2CValue::as_bool(aLStack304);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::ModelModule__joint_global_position_impl
              (pBVar10,HVar9,(Vector3f *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)local_80);
    lib::L2CValue::L2CValue(aLStack256,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack240,(float)uStack120);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_110);
    lib::L2CValue::operator_(pLVar7,aLStack256);
    lib::L2CValue::operator_(pLVar8,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    uVar11 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar7);
    uVar3 = lib::L2CValue::as_number(pLVar8);
    local_110 = CONCAT44(uVar12,uVar11);
    uStack264 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_110);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_110,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_ROT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar10,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar13);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    fVar13 = (float)app::lua_bind::PostureModule__lr_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack304,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,90.0);
    lib::L2CValue::operator_((L2CValue *)&local_110,aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    uVar11 = lib::L2CValue::as_number((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_number(aLStack288);
    uVar3 = lib::L2CValue::as_number(aLStack320);
    local_110 = CONCAT44(uVar12,uVar11);
    uStack264 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_110,0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

