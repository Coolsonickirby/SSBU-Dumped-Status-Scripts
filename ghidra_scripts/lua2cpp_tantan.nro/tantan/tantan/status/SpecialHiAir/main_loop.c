
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAir_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCliffCheckKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  ulong uVar13;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CAgent *this_04;
  ulong *puVar14;
  BattleObjectModuleAccessor **ppBVar15;
  uint uVar16;
  float fVar17;
  long lVar18;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  ulong local_190;
  undefined8 uStack392;
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
  undefined8 local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  ppBVar15 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
    uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar5 & 1) != 0) goto LAB_710003d82c;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack480,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      goto LAB_710003d82c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
    uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar5 & 1) == 0) goto LAB_710003d82c;
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    HVar12 = lib::L2CValue::as_hash(aLStack416);
    uVar5 = lib::L2CValue::as_number(aLStack432);
    lVar18 = lib::L2CValue::as_number(aLStack448);
    uVar16 = lib::L2CValue::as_number(aLStack464);
    local_90 = uVar5 & 0xffffffff | lVar18 << 0x20;
    uStack136 = (ulong)uVar16;
    uVar5 = lib::L2CValue::as_number(pLVar9);
    lVar18 = lib::L2CValue::as_number(pLVar10);
    uVar16 = lib::L2CValue::as_number(pLVar11);
    local_a0 = uVar5 & 0xffffffff | lVar18 << 0x20;
    uStack152 = (ulong)uVar16;
    app::lua_bind::ModelModule__joint_global_position_with_offset_impl
              (*ppBVar15,HVar12,(Vector3f *)&local_90,(Vector3f *)&local_a0,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_a0);
    lib::L2CValue::L2CValue(aLStack384,local_a0._4_4_);
    lib::L2CValue::L2CValue(aLStack368,(float)uStack152);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::operator_(pLVar7,aLStack384);
    lib::L2CValue::operator_(pLVar8,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x121407fd4d);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar5,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar17);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x128d0eacf7);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar5,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar17);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
    lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
    HVar12 = lib::L2CValue::as_hash(aLStack416);
    uVar5 = lib::L2CValue::as_number(pLVar9);
    lVar18 = lib::L2CValue::as_number(pLVar10);
    uVar16 = lib::L2CValue::as_number(pLVar11);
    local_90 = uVar5 & 0xffffffff | lVar18 << 0x20;
    uStack136 = (ulong)uVar16;
    uVar5 = lib::L2CValue::as_number(this_01);
    lVar18 = lib::L2CValue::as_number(this_02);
    uVar16 = lib::L2CValue::as_number(this_03);
    local_a0 = uVar5 & 0xffffffff | lVar18 << 0x20;
    uStack152 = (ulong)uVar16;
    app::lua_bind::ModelModule__joint_global_position_with_offset_impl
              (*ppBVar15,HVar12,(Vector3f *)&local_90,(Vector3f *)&local_a0,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_a0);
    lib::L2CValue::L2CValue(aLStack384,local_a0._4_4_);
    lib::L2CValue::L2CValue(aLStack368,(float)uStack152);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::operator_(pLVar7,aLStack384);
    lib::L2CValue::operator_(pLVar8,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack416);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    lib::L2CValue::L2CValue(aLStack432,false);
    uVar5 = lib::L2CValue::as_number(pLVar6);
    uVar16 = lib::L2CValue::as_number(pLVar7);
    local_190 = uVar5 & 0xffffffff | (ulong)uVar16 << 0x20;
    uStack392 = 0;
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_a0);
    uVar16 = lib::L2CValue::as_number(aLStack416);
    local_90 = uVar5 & 0xffffffff | (ulong)uVar16 << 0x20;
    uStack136 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack432);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (*ppBVar15,(Vector2f *)&local_190,(Vector2f *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack496,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack496);
    lib::L2CValue::_L2CValue(aLStack496);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack544,_FIGHTER_TANTAN_STATUS_KIND_SPECIAL_HI_AIR_REACH);
      lib::L2CValue::L2CValue(aLStack560,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack560);
      pLVar6 = aLStack544;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,
                 _FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_IS_SPECIAL_HI_AIR_PHYSICS);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_IS_BLOCKED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue(aLStack512,_FIGHTER_TANTAN_STATUS_KIND_SPECIAL_HI_AIR_END);
      lib::L2CValue::L2CValue(aLStack528,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack528);
      pLVar6 = aLStack512;
    }
    lib::L2CValue::_L2CValue(pLVar6);
    goto LAB_710003d82c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
      uVar16 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar15,uVar16);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
      GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar15,GVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
      puVar14 = &local_190;
      goto LAB_710003d4e8;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_INSTANCE_WORK_ID_INT_AIR_LASSO_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,FIGHTER_INSTANCE_WORK_ID_INT_CLIFF_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0x13b0934dfd);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    uVar13 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar5,uVar13);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack208,0xf4c06fb5e);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    uVar13 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar5,uVar13);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_a0), (uVar5 & 1) != 0)) {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_STATUS_AIR_LASSO_FLAG_HANG_IMMIDIATE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    }
    bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    if ((bVar2 & 1U) == 0) {
LAB_710003d4c4:
      lib::L2CValue::_L2CValue(aLStack208);
    }
    else {
      bVar1 = app::lua_bind::GroundModule__can_entry_cliff_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack224);
        goto LAB_710003d4c4;
      }
      lib::L2CValue::L2CValue(aLStack256,FIGHTER_INSTANCE_WORK_ID_INT_CLIFF_NO_CATCH_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
      uVar5 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_AIR_LASSO_FLAG_HANG_IMMIDIATE);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
        uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
LAB_710003d8d8:
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_AIR_LASSO_FLAG_HANG_IMMIDIATE);
          iVar3 = lib::L2CValue::as_integer(aLStack208);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::L2CValue
                    (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE
                    );
          bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_190);
          iVar3 = lib::L2CValue::as_integer(aLStack208);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar15,(bool)(bVar1 & 1),iVar3);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::L2CValue(aLStack576,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
          lib::L2CValue::L2CValue(aLStack592,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack592);
          lib::L2CValue::_L2CValue(aLStack576);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          return;
        }
        fVar17 = (float)app::lua_bind::GroundModule__hang_cliff_dir_impl(*ppBVar15);
        lib::L2CValue::L2CValue(aLStack256,fVar17);
        fVar17 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
        lib::L2CValue::L2CValue(aLStack272,fVar17);
        lib::L2CValue::operator_(aLStack256,aLStack272);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar5 & 1) != 0) goto LAB_710003d8d8;
      }
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    puVar14 = &local_90;
LAB_710003d4e8:
    lib::L2CValue::_L2CValue((L2CValue *)puVar14);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    pLVar6 = (L2CValue *)0x1a;
    this_04 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    lib::L2CAgent::math_abs(this_04,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0xce95eb5bc);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar13 = lib::L2CValue::as_integer(aLStack176);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar5,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar17);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    if ((uVar5 & 1) != 0) {
      bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar15,0.0);
      lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack608);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar15);
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((uVar5 & 1) == 0) {
LAB_710003d738:
    puVar14 = &local_90;
LAB_710003d81c:
    lib::L2CValue::_L2CValue((L2CValue *)puVar14);
  }
  else {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      if ((uVar5 & 1) == 0) goto LAB_710003d700;
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_710003d780:
      lib::L2CValue::L2CValue((L2CValue *)&local_190,0x16ba39edca);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x14dd899136);
      lib::L2CValue::L2CValue(aLStack624,false);
      lib::L2CValue::L2CValue(aLStack640,false);
      lib::L2CValue::L2CValue(aLStack656,(L2CValue *)&local_190);
      lib::L2CValue::L2CValue(aLStack672,(L2CValue *)&local_90);
      FUN_7100039930(this,aLStack624,aLStack640,aLStack656,aLStack672);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      puVar14 = &local_190;
      goto LAB_710003d81c;
    }
LAB_710003d700:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    if ((uVar5 & 1) != 0) goto LAB_710003d738;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar5 & 1) != 0) goto LAB_710003d780;
  }
  FUN_710003a8b0(this);
LAB_710003d82c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

