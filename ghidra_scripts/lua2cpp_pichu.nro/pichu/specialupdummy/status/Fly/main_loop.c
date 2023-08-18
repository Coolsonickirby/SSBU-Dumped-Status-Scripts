
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPichuSpecialupdummy::status::Fly_main_loop
          (L2CWeaponPichuSpecialupdummy *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this_00;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 uStack80;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::sv_battle_object::is_null(uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&uStack80,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) == 0) {
    lVar1 = -0x40;
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::sv_battle_object::is_active(uVar5);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((bVar3 & 1U) == 0) goto LAB_710002c074;
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar7);
    }
    lib::L2CValue::L2CValue(aLStack192,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,true);
    HVar8 = lib::L2CValue::as_hash(aLStack192);
    uStack80._0_4_ = (float)lib::L2CValue::as_number(aLStack208);
    uStack80._4_4_ = (float)lib::L2CValue::as_number(aLStack224);
    uVar5 = lib::L2CValue::as_number(aLStack240);
    uStack72 = (ulong)uVar5;
    bVar2 = lib::L2CValue::as_bool(aLStack256);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::ModelModule__joint_global_rotation_impl
              (pBVar9,HVar8,(Vector3f *)&uStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack176,(float)uStack80);
    lib::L2CValue::L2CValue(aLStack160,uStack80._4_4_);
    lib::L2CValue::L2CValue(aLStack144,(float)uStack72);
    FUN_710001af90(aLStack128,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x31d39a761);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    HVar8 = lib::L2CValue::as_hash(aLStack192);
    uVar10 = lib::L2CValue::as_number(this_00);
    uVar11 = lib::L2CValue::as_number(aLStack208);
    uVar5 = lib::L2CValue::as_number(aLStack224);
    uStack80 = CONCAT44(uVar11,uVar10);
    uStack72 = (ulong)uVar5;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar8,(Vector3f *)&uStack80,0,0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710002c074:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

