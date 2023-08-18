
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaTriforce::status::Seal_main_loop(L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  L2CValue *this_00;
  undefined8 *this_01;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  BattleObjectModuleAccessor *pBVar10;
  float *pfVar11;
  ulong uVar12;
  L2CValue *this_02;
  Hash40 HVar13;
  float fVar14;
  long lVar15;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong uStack112;
  ulong uStack104;
  
  bVar1 = app::lua_bind::VisibilityModule__get_whole_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack400);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0xb38b339df);
    lib::L2CValue::L2CValue(aLStack128,pLVar6);
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    FUN_710001ec30(this,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0xa36556540);
    lib::L2CValue::L2CValue(aLStack192,pLVar6);
    lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    FUN_710001f420(this,aLStack160,aLStack176,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack400,_WEAPON_ZELDA_TRIFORCE_STATUS_WORK_INT_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::_L2CValue(aLStack400);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack496,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack496);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack400);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack400);
    pLVar6 = aLStack496;
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&uStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack496);
    if ((bVar2 & 1U) == 0) goto LAB_7100020870;
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack256,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,pvVar7);
    }
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    this_01 = &this[1].field_0x30;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa36556540);
    uVar9 = lib::L2CValue::operator_(pLVar6,pLVar8);
    if ((uVar9 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb824206a8);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa36556540);
      lib::L2CValue::operator_(pLVar6,pLVar8);
      uVar4 = app::lua_bind::TeamModule__team_owner_id_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&uStack112,uVar4);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      fVar14 = (float)lib::L2CValue::as_number(aLStack400);
      fVar14 = (float)app::FighterUtil::calc_add_damage_power_for_final(uVar4,uVar5,fVar14);
      lib::L2CValue::L2CValue(aLStack496,fVar14);
      lib::L2CValue::operator_(aLStack400,aLStack496);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
      lib::L2CValue::L2CValue(aLStack496,0);
      fVar14 = (float)lib::L2CValue::as_number(aLStack400);
      iVar3 = lib::L2CValue::as_integer(aLStack496);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
      app::lua_bind::DamageModule__add_damage_impl(pBVar10,fVar14,iVar3);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
      uVar4 = lib::L2CValue::as_integer(pLVar8);
      iVar3 = app::sv_battle_object::log_attack_kind(uVar4);
      lib::L2CValue::L2CValue(aLStack496,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&uStack112,false);
      uVar4 = lib::L2CValue::as_integer(pLVar6);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      fVar14 = (float)lib::L2CValue::as_number(aLStack400);
      iVar3 = lib::L2CValue::as_integer(aLStack496);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&uStack112);
      app::lua_bind::FighterManager__notify_log_event_collision_hit_impl
                (LUA_SCRIPT_LINE_WAZA_CUSTOMIZE,uVar4,uVar5,fVar14,iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xf649b0b59);
      lib::L2CValue::L2CValue(aLStack272,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa6feb7c09);
      lib::L2CValue::L2CValue(aLStack288,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa36556540);
      lib::L2CValue::L2CValue(aLStack304,pLVar6);
      lib::L2CValue::L2CValue(aLStack320,0);
      lib::L2CValue::L2CValue(aLStack336,aLStack256);
      FUN_710001f420(this,aLStack272,aLStack288,aLStack304,aLStack320,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack400);
    }
    pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack400,*pfVar11);
    lib::L2CValue::L2CValue(aLStack384,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack368,pfVar11[2]);
    FUN_710000bf50(aLStack352,this,aLStack400);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack400);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    fVar14 = (float)app::lua_bind::PostureModule__scale_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack416,fVar14);
    lib::L2CValue::L2CValue(aLStack496,0x170c3e372e);
    lib::L2CValue::L2CValue((L2CValue *)&uStack112,0);
    uVar9 = lib::L2CValue::as_integer(aLStack496);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&uStack112);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar10,uVar9,uVar12);
    lib::L2CValue::L2CValue(aLStack432,fVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue(aLStack496);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack416,aLStack432);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&uStack112);
    lib::L2CValue::L2CValue(aLStack448,_FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Y);
    fVar14 = (float)lib::L2CValue::as_number(aLStack496);
    iVar3 = lib::L2CValue::as_integer(aLStack448);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::WorkModule__set_float_impl(pBVar10,fVar14,iVar3);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack496,*pfVar11);
    lib::L2CValue::L2CValue(aLStack480,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack464,pfVar11[2]);
    FUN_710000bf50(&uStack112,this,aLStack496);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack496);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    fVar14 = (float)app::lua_bind::GroundModule__get_z_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack512,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)&uStack112,1.0);
    lib::L2CValue::operator_(aLStack512,(L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
    lib::L2CValue::operator_(pLVar6,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack512);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
    uVar9 = lib::L2CValue::as_number(pLVar6);
    lVar15 = lib::L2CValue::as_number(pLVar8);
    uVar4 = lib::L2CValue::as_number(this_02);
    uStack112 = uVar9 & 0xffffffff | lVar15 << 0x20;
    uStack104 = (ulong)uVar4;
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::PostureModule__set_pos_impl(pBVar10,(Vector3f *)&uStack112);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar6 = aLStack256;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_7100020870:
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0xa36556540);
  uVar9 = lib::L2CValue::operator__(pLVar6,pLVar8);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&uStack112,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack256,0x140ea2e5ee);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack112);
    HVar13 = lib::L2CValue::as_hash(aLStack256);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar13);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

