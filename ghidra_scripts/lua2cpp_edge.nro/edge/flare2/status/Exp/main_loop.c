
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Exp_main_loop(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  long lVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar12;
  float fVar13;
  undefined8 uVar14;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLAG_REFLECT);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
    lib::L2CValue::L2CValue(aLStack128,uVar4);
    lib::L2CValue::_L2CValue(aLStack352);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack352,false);
    uVar5 = lib::L2CValue::operator__(aLStack208,aLStack352);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar6);
      }
      lib::L2CValue::L2CValue(aLStack352,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLAG_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack352);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      uVar14 = app::lua_bind::PostureModule__pos_2d_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack208,(float)uVar14);
      lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::L2CValue(aLStack352,aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack192);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack352,0x109d30aa1b);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xc6c8a6c8d);
      uVar5 = lib::L2CValue::as_integer(aLStack352);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack224,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(pBVar7,iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack352,uVar4);
      lib::L2CValue::operator_(aLStack128,aLStack352);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::sv_battle_object::is_active(uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack352,false);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack352);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack352,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack352,pvVar6);
        }
        lib::L2CValue::operator_(aLStack144,aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue(aLStack352,false);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack352,0xf5c75804b);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          lVar9 = app::lua_bind::WorkModule__get_param_int64_impl(pBVar7,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack240,lVar9);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,0x137b567280);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack256,fVar13);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,0x130c514216);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack272,fVar13);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,0x13955813ac);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
          lib::L2CValue::L2CValue(aLStack288,fVar13);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
          this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack368,true);
          HVar12 = lib::L2CValue::as_hash(aLStack240);
          uVar5 = lib::L2CValue::as_number(aLStack256);
          lVar9 = lib::L2CValue::as_number(aLStack272);
          uVar4 = lib::L2CValue::as_number(aLStack288);
          local_60 = uVar5 & 0xffffffff | lVar9 << 0x20;
          uStack88 = (ulong)uVar4;
          uVar5 = lib::L2CValue::as_number(this_00);
          lVar9 = lib::L2CValue::as_number(this_01);
          uVar4 = lib::L2CValue::as_number(aLStack304);
          local_70 = uVar5 & 0xffffffff | lVar9 << 0x20;
          uStack104 = (ulong)uVar4;
          bVar1 = lib::L2CValue::as_bool(aLStack368);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                    (pBVar7,HVar12,(Vector3f *)&local_60,(Vector3f *)&local_70,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack352,(float)local_70);
          lib::L2CValue::L2CValue(aLStack336,local_70._4_4_);
          lib::L2CValue::L2CValue(aLStack320,(float)uStack104);
          lib::L2CValue::operator_(pLVar10,aLStack352);
          lib::L2CValue::operator_(pLVar11,aLStack336);
          lib::L2CValue::operator_(aLStack304,aLStack320);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
        }
        uVar14 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack352,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack336);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator_(aLStack176,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack240);
        lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x90);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::operator_(aLStack224);
        lib::L2CValue::operator_(aLStack240,aLStack272);
        lib::L2CValue::operator_(aLStack176,aLStack256);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
        uVar5 = lib::L2CValue::as_number(pLVar10);
        uVar4 = lib::L2CValue::as_number(pLVar11);
        local_60 = uVar5 & 0xffffffff | (ulong)uVar4 << 0x20;
        uStack88 = 0;
        app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,false);
      }
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,false);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_EDGE_FLARE2_STATUS_KIND_REF);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

