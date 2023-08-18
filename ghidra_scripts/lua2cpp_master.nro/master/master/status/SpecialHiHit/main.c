
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiHit_main(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  uint uVar6;
  VisibilityMode VVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  ulong uVar11;
  L2CValue *pLVar12;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  undefined8 *puVar13;
  void *pvVar14;
  Article *pAVar15;
  BattleObjectModuleAccessor *pBVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  long lVar21;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  undefined auStack528 [32];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined local_1a0 [32];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined8 auStack320 [2];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  ppBVar17 = &this->moduleAccessor;
  bVar1 = app::lua_bind::TurnModule__is_turn_impl(*ppBVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) != 0) {
    app::lua_bind::TurnModule__end_turn_impl(*ppBVar17);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)local_1a0,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack176,pLVar9);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TOUCH_DOWN)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0xef6cd96a7);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar19 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar17,HVar10,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x12b49f6368);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar19 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar17,HVar10,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  uVar20 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar17);
  lib::L2CValue::L2CValue(aLStack240,(float)uVar20);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar20 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack224);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  fVar18 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar17);
  lib::L2CValue::L2CValue(aLStack208,fVar18);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0x1be615bc1b);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,BATTLE_OBJECT_CATEGORY_INVALID);
  uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  if ((uVar8 & 1) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x13eca282b2);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,1.0);
      lib::L2CValue::L2CValue(aLStack304,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)auStack288);
      bVar1 = lib::L2CValue::as_bool(aLStack304);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar17,HVar10,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x179b28cc74);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,1.0);
      lib::L2CValue::L2CValue(aLStack304,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)auStack288);
      bVar1 = lib::L2CValue::as_bool(aLStack304);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar17,HVar10,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0.0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_1a0);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar17,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1a0,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    pvVar14 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar14 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,pvVar14);
    }
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x162d277af);
    lib::L2CValue::L2CValue(aLStack432,0x31d39a761);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
    this_03 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
    this_04 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x162d277af);
    lib::L2CValue::L2CValue(aLStack448,true);
    HVar10 = lib::L2CValue::as_hash(aLStack432);
    uVar8 = lib::L2CValue::as_number(pLVar9);
    lVar21 = lib::L2CValue::as_number(this_03);
    uVar6 = lib::L2CValue::as_number(this_04);
    local_90 = uVar8 & 0xffffffff | lVar21 << 0x20;
    uStack136 = (ulong)uVar6;
    bVar1 = lib::L2CValue::as_bool(aLStack448);
    pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack304);
    app::lua_bind::ModelModule__joint_global_position_impl
              (pBVar16,HVar10,(Vector3f *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,(float)local_90);
    pLVar9 = (L2CValue *)(local_1a0 + 0x10);
    lib::L2CValue::L2CValue(pLVar9,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack384,(float)uStack136);
    lib::L2CValue::operator_(pLVar12,(L2CValue *)local_1a0);
    lib::L2CValue::operator_(this_01,pLVar9);
    lib::L2CValue::operator_(this_02,aLStack384);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(pLVar9);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack464,pLVar9);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack480,pLVar9);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    fVar18 = (float)app::lua_bind::ModelModule__scale_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,fVar18);
    lib::L2CValue::operator_((L2CValue *)local_1a0,aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
    lib::L2CValue::L2CValue(aLStack448,fVar18);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,2.453);
      lib::L2CValue::operator_((L2CValue *)local_1a0,aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::operator_((L2CValue *)auStack528,aLStack448);
      lib::L2CValue::operator_(pLVar9,(L2CValue *)(auStack528 + 0x10));
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::operator_(pLVar9,aLStack496);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack528);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,12.677);
      lib::L2CValue::operator_((L2CValue *)local_1a0,aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::operator_(pLVar9,(L2CValue *)(auStack528 + 0x10));
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar9,aLStack496);
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,2.383);
      lib::L2CValue::operator_((L2CValue *)local_1a0,aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::operator_((L2CValue *)auStack528,aLStack448);
      lib::L2CValue::operator_(pLVar9,(L2CValue *)(auStack528 + 0x10));
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::operator_(pLVar9,aLStack496);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack528);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,11.695);
      lib::L2CValue::operator_((L2CValue *)local_1a0,aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::operator_(pLVar9,(L2CValue *)(auStack528 + 0x10));
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar9,aLStack496);
    }
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
    lib::L2CValue::operator_(pLVar9,pLVar12);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar9,pLVar12);
    pLVar9 = aLStack560;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,SUB81(pLVar9,0));
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack544);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x18cdc1683);
    lib::L2CValue::operator_(pLVar12,aLStack448);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack496,0x1fbdb2615);
    lib::L2CAgent::math_atan((L2CAgent *)auStack528,pLVar12,pLVar9);
    lib::L2CAgent::math_deg((L2CAgent *)local_1a0,pLVar12);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,90.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)local_1a0,(L2CValue *)(auStack528 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1a0,90.0);
        lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),(L2CValue *)local_1a0);
        goto LAB_710002ce5c;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0.0);
      lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),(L2CValue *)local_1a0);
LAB_710002ce5c:
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    }
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack528 + 0x10));
    app::lua_bind::MotionModule__set_frame_impl(*ppBVar17,fVar18,true);
    app::lua_bind::CatchModule__set_catch_impl(*ppBVar17,0x50000000);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,true);
    lib::L2CValue::L2CValue(aLStack576,_WEAPON_LASSO_INSTANCE_WORK_ID_FLAG_CLIFF_OFFSET);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack528);
    iVar5 = lib::L2CValue::as_integer(aLStack576);
    app::lua_bind::ArticleModule__set_flag_impl(*ppBVar17,iVar3,(bool)(bVar1 & 1),iVar5);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue(aLStack576,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack592,0xf0e7bf0b9);
    uVar8 = lib::L2CValue::as_integer(aLStack576);
    uVar11 = lib::L2CValue::as_integer(aLStack592);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,fVar18);
    lib::L2CValue::L2CValue(aLStack608,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_CLIFF_OFFSET_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack528);
    iVar5 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue(aLStack576,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack592,0xf797cc02f);
    uVar8 = lib::L2CValue::as_integer(aLStack576);
    uVar11 = lib::L2CValue::as_integer(aLStack592);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,fVar18);
    lib::L2CValue::L2CValue(aLStack608,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_CLIFF_OFFSET_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack528);
    iVar5 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue(aLStack576,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack592,0xf89c64879);
    uVar8 = lib::L2CValue::as_integer(aLStack576);
    uVar11 = lib::L2CValue::as_integer(aLStack592);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,fVar18);
    lib::L2CValue::L2CValue(aLStack608,_WEAPON_MASTER_SWORD_INSTANCE_WORK_ID_FLOAT_CONNECT_DIST_MAX)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack528);
    iVar5 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,_WEAPON_MASTER_SWORD_STATUS_KIND_REACH);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack528);
    app::lua_bind::ArticleModule__change_status_impl(*ppBVar17,iVar3,iVar5,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,0x299488358b);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack528);
    app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar17,iVar3,HVar10,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue((L2CValue *)auStack528,_WEAPON_MASTER_SWORD_STATUS_KIND_CONNECT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack528);
    app::lua_bind::ArticleModule__change_status_impl(*ppBVar17,iVar3,iVar5,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)auStack528);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x13dc26ddea);
      lib::L2CValue::operator_((L2CValue *)auStack528,(L2CValue *)local_1a0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x164cc83f97);
      lib::L2CValue::operator_((L2CValue *)auStack528,(L2CValue *)local_1a0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue(aLStack576,0x1086bc4a93);
    uVar8 = lib::L2CValue::as_integer(aLStack576);
    uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack528);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar3);
    lib::L2CValue::L2CValue(aLStack592,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_STOP_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    iVar5 = lib::L2CValue::as_integer(aLStack592);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar5);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    puVar13 = auStack320;
LAB_710002d4ac:
    lib::L2CValue::_L2CValue((L2CValue *)puVar13);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack288,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_HIT_WALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack624,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar17,GVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack288,_WEAPON_LASSO_INSTANCE_WORK_ID_FLAG_CLIFF_OFFSET);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      app::lua_bind::ArticleModule__set_flag_impl(*ppBVar17,iVar3,(bool)(bVar1 & 1),iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack304,0xdfa75b027);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      uVar11 = lib::L2CValue::as_integer(aLStack304);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack320,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_CLIFF_OFFSET_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack304,0xd8d7280b1);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      uVar11 = lib::L2CValue::as_integer(aLStack304);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack320,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_CLIFF_OFFSET_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_MASTER_SWORD_STATUS_KIND_REACH);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::ArticleModule__change_status_impl(*ppBVar17,iVar3,iVar5,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x299488358b);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar17,iVar3,HVar10,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack288,_WEAPON_MASTER_SWORD_INSTANCE_WORK_ID_FLAG_HIT_EFFECT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      app::lua_bind::ArticleModule__set_flag_impl(*ppBVar17,iVar3,(bool)(bVar1 & 1),iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_MASTER_SWORD_STATUS_KIND_HANG);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::ArticleModule__change_status_impl(*ppBVar17,iVar3,iVar5,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0xe8865716b);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,-1.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_1a0,180.0);
        lib::L2CValue::operator_((L2CValue *)local_1a0,(L2CValue *)auStack288);
        lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
        lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      pLVar9 = (L2CValue *)(ulong)_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD;
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CAgent::math_rad((L2CAgent *)auStack288,pLVar9);
      lib::L2CValue::L2CValue(aLStack304,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_REACH_ANGLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_MASTER_SWORD_STATUS_KIND_HANG_REWIND);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::ArticleModule__change_status_impl(*ppBVar17,iVar3,iVar5,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue
                (aLStack432,_WEAPON_LASSO_STATUS_HANG_REWIND_WORK_ID_FLOAT_STRECH_BACK_SPEED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      iVar5 = lib::L2CValue::as_integer(aLStack432);
      fVar18 = (float)app::lua_bind::ArticleModule__get_float_impl(*ppBVar17,iVar3,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)local_1a0,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
        lib::L2CValue::L2CValue((L2CValue *)auStack320,0xcf83623d6);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack320);
        fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
        lib::L2CValue::L2CValue((L2CValue *)local_1a0,fVar18);
        lib::L2CValue::operator_(aLStack304,(L2CValue *)local_1a0);
        lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::operator_(aLStack304,aLStack208);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack320,
                 _WEAPON_LASSO_STATUS_HANG_REWIND_WORK_ID_FLOAT_STRECH_BACK_SPEED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar17,iVar3,fVar18,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
      app::lua_bind::GroundModule__set_test_coll_stop_status_impl(*ppBVar17,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y)
      ;
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar17,uVar2,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
      app::lua_bind::ItemModule__set_have_item_visibility_impl(*ppBVar17,(bool)(bVar1 & 1),0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD_DOWN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0x13d0c81702);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar3);
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_STOP_FRAME);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      iVar5 = lib::L2CValue::as_integer(aLStack432);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar5);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xac5f6086f);
        lib::L2CValue::L2CValue((L2CValue *)auStack320,0);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack320);
        local_1a0._8_8_ = FIGHTER_COMBO_TYPE_NONE;
        local_1a0._0_8_ = FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT;
        app::lua_bind::ShakeModule__req_time_scale_impl
                  (*ppBVar17,HVar10,iVar3,false,(Vector2f *)local_1a0,1.0,0.0,false,false,-1,1.0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
        puVar13 = &local_90;
      }
      else {
        lib::L2CValue::L2CValue(aLStack432,GROUND_TOUCH_FLAG_DOWN);
        uVar6 = lib::L2CValue::as_integer(aLStack432);
        uVar20 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar6);
        lib::L2CValue::L2CValue(aLStack656,(float)uVar20);
        lib::L2CValue::L2CValue(aLStack640,(float)((ulong)uVar20 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)local_1a0,aLStack656);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack640);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack656);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xda04c0bf4);
        lib::L2CValue::L2CValue(aLStack432,0);
        lib::L2CValue::L2CValue(aLStack448,true);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        bVar1 = lib::L2CValue::as_bool(aLStack448);
        uVar8 = lib::L2CValue::as_number(pLVar9);
        uVar6 = lib::L2CValue::as_number(pLVar12);
        local_1a0._0_8_ = (void **)(uVar8 & 0xffffffff | (ulong)uVar6 << 0x20);
        local_1a0._8_8_ = (lua_State *)0x0;
        app::lua_bind::ShakeModule__req_time_scale_impl
                  (*ppBVar17,HVar10,iVar3,(bool)(bVar1 & 1),(Vector2f *)local_1a0,1.0,0.0,false,
                   false,-1,1.0);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        puVar13 = auStack320;
      }
      lib::L2CValue::_L2CValue((L2CValue *)puVar13);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x201c8dfdad);
      lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)local_1a0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1a0,_FIGHTER_MASTER_GROUND_RHOMBUS_MODIFY_SPECIAL_HI_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      app::lua_bind::GroundModule__set_rhombus_modify_impl(*ppBVar17,iVar3);
      puVar13 = (undefined8 *)local_1a0;
      goto LAB_710002d4ac;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack288,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_STRECH_LENGTH_INIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
  fVar18 = (float)app::lua_bind::ArticleModule__get_float_impl(*ppBVar17,iVar3,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lib::L2CValue::L2CValue(aLStack304,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_STRECH_LENGTH);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  iVar5 = lib::L2CValue::as_integer(aLStack304);
  fVar18 = (float)app::lua_bind::ArticleModule__get_float_impl(*ppBVar17,iVar3,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar18);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  pvVar14 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar17,iVar3);
  if (pvVar14 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack304,pvVar14);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  pAVar15 = (Article *)lib::L2CValue::as_pointer(aLStack304);
  uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar15);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,uVar6);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  pvVar14 = (void *)app::sv_battle_object::module_accessor(uVar6);
  if (pvVar14 == (void *)0x0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack320,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack320,pvVar14);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::L2CValue(aLStack496,0x1086bc4a93);
  uVar8 = lib::L2CValue::as_integer(aLStack496);
  uVar11 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar8,uVar11);
  lib::L2CValue::L2CValue(aLStack448,fVar18);
  lib::L2CValue::operator_(aLStack448,aLStack208);
  lib::L2CValue::operator_((L2CValue *)&local_90,aLStack432);
  uVar8 = lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack496);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
    uVar8 = lib::L2CValue::operator__(aLStack256,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) goto LAB_710002d94c;
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
    pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack320);
    app::lua_bind::MotionAnimcmdModule__flush_impl(pBVar16,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_WEAPON_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack432,0x135770d03f);
    lib::L2CValue::L2CValue(aLStack448,-1);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    HVar10 = lib::L2CValue::as_hash(aLStack432);
    iVar5 = lib::L2CValue::as_integer(aLStack448);
    pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack320);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(pBVar16,iVar3,HVar10,iVar5);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    lib::L2CValue::L2CValue(aLStack432,false);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    bVar1 = lib::L2CValue::as_bool(aLStack432);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar17,iVar3,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_VISIBILITY_MODE_GUARANTEE);
    VVar7 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    app::lua_bind::VisibilityModule__set_visibility_mode_impl(*ppBVar17,VVar7);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    app::lua_bind::MotionAnimcmdModule__flush_impl(*ppBVar17,false);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack432,0x19bba10362);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    HVar10 = lib::L2CValue::as_hash(aLStack432);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar17,iVar3,HVar10,-1);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
    uVar8 = lib::L2CValue::operator__(aLStack256,(L2CValue *)local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    if ((uVar8 & 1) == 0) goto LAB_710002d94c;
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
    app::lua_bind::LinkModule__remove_model_constraint_impl(*ppBVar17,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    uVar8 = lib::L2CValue::as_number(pLVar9);
    uVar6 = lib::L2CValue::as_number(pLVar12);
    local_1a0._0_8_ = (void **)(uVar8 & 0xffffffff | (ulong)uVar6 << 0x20);
    local_1a0._8_8_ = (lua_State *)0x0;
    app::lua_bind::PostureModule__set_pos_2d_impl(*ppBVar17,(Vector2f *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,_FIGHTER_KINETIC_TYPE_MASTER_SPECIAL_HI_HIT_WALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar17,iVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
LAB_710002d94c:
  lib::L2CValue::L2CValue(aLStack432,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack448,0x19b890bf33);
  uVar8 = lib::L2CValue::as_integer(aLStack432);
  uVar11 = lib::L2CValue::as_integer(aLStack448);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar8,uVar11);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar3);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_DISABLE_LANDING_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  iVar5 = lib::L2CValue::as_integer(aLStack432);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack448,0xb22ea6032);
  lib::L2CValue::L2CValue(aLStack496,0xc42e8e1ed);
  uVar8 = lib::L2CValue::as_integer(aLStack448);
  uVar11 = lib::L2CValue::as_integer(aLStack496);
  pBVar16 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack320);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(pBVar16,uVar8,uVar11);
  lib::L2CValue::L2CValue(aLStack432,iVar3);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_CHECK_UPSIDE_DOWN_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  iVar5 = lib::L2CValue::as_integer(aLStack448);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack448,0x157e1d4811);
  HVar10 = lib::L2CValue::as_hash(aLStack448);
  iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar17,HVar10,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack672,iVar3);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack688,&DAT_710002e680);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

