
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiHit_null(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  Hash40 HVar9;
  ulong uVar10;
  void *pvVar11;
  Article *pAVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  L2CValue *pLVar17;
  BattleObjectModuleAccessor *pBVar18;
  L2CValue *pLVar19;
  BattleObjectModuleAccessor **ppBVar20;
  float fVar21;
  long lVar22;
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
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_HIT_LEAVE_STOP);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  ppBVar20 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack448,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack448);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar8 & 1) == 0) goto LAB_710000b670;
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar4 = lib::L2CValue::as_integer(aLStack448);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue(aLStack160,iVar4);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack448,BATTLE_OBJECT_CATEGORY_INVALID);
  uVar8 = lib::L2CValue::operator__(aLStack160,aLStack448);
  lib::L2CValue::_L2CValue(aLStack448);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,aLStack160);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack192,iVar4);
    lib::L2CValue::L2CValue(aLStack448,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar8 = lib::L2CValue::operator__(aLStack176,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack448,_BATTLE_OBJECT_CATEGORY_ENEMY);
      uVar8 = lib::L2CValue::operator__(aLStack176,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      if ((uVar8 & 1) != 0) goto LAB_710000a9cc;
      lib::L2CValue::L2CValue(aLStack448,_BATTLE_OBJECT_CATEGORY_ITEM);
      uVar8 = lib::L2CValue::operator__(aLStack176,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      }
      else {
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::sv_item::is_captured(uVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      }
    }
    else {
LAB_710000a9cc:
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      fVar21 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar20);
      lib::L2CValue::L2CValue(aLStack208,fVar21);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x20);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::L2CValue(aLStack448,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack448);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar20,GVar5);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_MASTER_SWORD_STATUS_KIND_HANG);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::ArticleModule__change_status_impl(*ppBVar20,iVar4,iVar6,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x107bf57a68);
      uVar8 = lib::L2CValue::as_integer(aLStack448);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar21);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar21);
      lib::L2CValue::L2CValue(aLStack448,-1.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack448,180.0);
        lib::L2CValue::operator_(aLStack448,(L2CValue *)auStack240);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::operator_((L2CValue *)auStack240,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      pLVar19 = (L2CValue *)(ulong)_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD;
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CAgent::math_rad((L2CAgent *)auStack240,pLVar19);
      lib::L2CValue::L2CValue(aLStack256,_WEAPON_LASSO_INSTANCE_WORK_ID_FLOAT_REACH_ANGLE);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar6 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar20,iVar4,fVar21,iVar6);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      pvVar11 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar20,iVar4);
      if (pvVar11 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack256,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,pvVar11);
      }
      lib::L2CValue::_L2CValue(aLStack448);
      pAVar12 = (Article *)lib::L2CValue::as_pointer(aLStack256);
      uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar12);
      lib::L2CValue::L2CValue(aLStack448,uVar7);
      uVar7 = lib::L2CValue::as_integer(aLStack448);
      pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar7);
      if (pvVar11 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack272,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,pvVar11);
      }
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
      lib::L2CValue::L2CValue(aLStack464,0x78f9703f9);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
      lib::L2CValue::L2CValue(aLStack480,true);
      HVar9 = lib::L2CValue::as_hash(aLStack464);
      uVar8 = lib::L2CValue::as_number(pLVar15);
      lVar22 = lib::L2CValue::as_number(pLVar16);
      uVar7 = lib::L2CValue::as_number(pLVar17);
      local_90 = uVar8 & 0xffffffff | lVar22 << 0x20;
      uStack136 = (ulong)uVar7;
      bVar1 = lib::L2CValue::as_bool(aLStack480);
      pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
      app::lua_bind::ModelModule__joint_global_position_impl
                (pBVar18,HVar9,(Vector3f *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack448,(float)local_90);
      lib::L2CValue::L2CValue(aLStack432,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack416,(float)uStack136);
      lib::L2CValue::operator_(pLVar19,aLStack448);
      lib::L2CValue::operator_(pLVar13,aLStack432);
      lib::L2CValue::operator_(pLVar14,aLStack416);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
      lib::L2CValue::L2CValue(aLStack464,0x74dd9f50f);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x162d277af);
      lib::L2CValue::L2CValue(aLStack480,true);
      HVar9 = lib::L2CValue::as_hash(aLStack464);
      uVar8 = lib::L2CValue::as_number(pLVar15);
      lVar22 = lib::L2CValue::as_number(pLVar16);
      uVar7 = lib::L2CValue::as_number(pLVar17);
      local_90 = uVar8 & 0xffffffff | lVar22 << 0x20;
      uStack136 = (ulong)uVar7;
      bVar1 = lib::L2CValue::as_bool(aLStack480);
      pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
      app::lua_bind::ModelModule__joint_global_position_impl
                (pBVar18,HVar9,(Vector3f *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack448,(float)local_90);
      lib::L2CValue::L2CValue(aLStack432,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack416,(float)uStack136);
      lib::L2CValue::operator_(pLVar19,aLStack448);
      lib::L2CValue::operator_(pLVar13,aLStack432);
      lib::L2CValue::operator_(pLVar14,aLStack416);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::L2CValue(aLStack496,aLStack288);
      lib::L2CValue::L2CValue(aLStack512,aLStack352);
      lua2cpp::L2CFighterBase::Vector3__distance(this,(L2CValue)0x10,(L2CValue)0x0);
      fVar21 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar20);
      lib::L2CValue::L2CValue(aLStack464,fVar21);
      lib::L2CValue::operator_(aLStack448,aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::L2CValue(aLStack464,11.3);
      lib::L2CValue::L2CValue(aLStack480,50.0);
      lib::L2CValue::L2CValue(aLStack528,(L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack544,aLStack464);
      lib::L2CValue::L2CValue(aLStack560,aLStack480);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::L2CValue(aLStack592,1.0);
      lib::L2CValue::L2CValue(aLStack448,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack624,0x171e7b6a7c);
      uVar8 = lib::L2CValue::as_integer(aLStack448);
      uVar10 = lib::L2CValue::as_integer(aLStack624);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar10);
      lib::L2CValue::L2CValue(aLStack608,fVar21);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack464);
      lib::L2CValue::operator_(aLStack480,aLStack464);
      lib::L2CValue::operator_(aLStack656,aLStack672);
      lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack592);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      lib::L2CValue::operator_(aLStack576,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_ATTACK_MUL);
      fVar21 = (float)lib::L2CValue::as_number(aLStack624);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar20,fVar21,iVar4);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_MASTER_SWORD_STATUS_KIND_HANG_REWIND);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::ArticleModule__change_status_impl(*ppBVar20,iVar4,iVar6,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
      lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack288,0xcf83623d6);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      uVar10 = lib::L2CValue::as_integer(aLStack288);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar10);
      lib::L2CValue::L2CValue(aLStack256,fVar21);
      lib::L2CValue::operator_(aLStack256,aLStack208);
      lib::L2CValue::L2CValue
                (aLStack352,_WEAPON_LASSO_STATUS_HANG_REWIND_WORK_ID_FLOAT_STRECH_BACK_SPEED);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar6 = lib::L2CValue::as_integer(aLStack352);
      app::lua_bind::ArticleModule__set_float_impl(*ppBVar20,iVar4,fVar21,iVar6);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,true);
      bVar1 = lib::L2CValue::as_bool(aLStack448);
      app::lua_bind::GroundModule__set_test_coll_stop_status_impl(*ppBVar20,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar3 = lib::L2CValue::as_integer(aLStack448);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::GroundModule__set_shape_flag_impl(*ppBVar20,uVar3,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,false);
      bVar1 = lib::L2CValue::as_bool(aLStack448);
      app::lua_bind::ItemModule__set_have_item_visibility_impl(*ppBVar20,(bool)(bVar1 & 1),0);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD_DOWN);
      iVar4 = lib::L2CValue::as_integer(aLStack448);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue((L2CValue *)auStack240);
      lib::L2CValue::_L2CValue(aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack448,BATTLE_OBJECT_CATEGORY_INVALID);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
    iVar4 = lib::L2CValue::as_integer(aLStack448);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::L2CValue(aLStack448,0x12b49f6368);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    HVar9 = lib::L2CValue::as_hash(aLStack448);
    fVar21 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar20,HVar9,fVar21,1.0,0.0,false,false);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack448,0x12b49f6368);
    HVar9 = lib::L2CValue::as_hash(aLStack448);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar20,HVar9,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_HIT_LEAVE_STOP);
  iVar4 = lib::L2CValue::as_integer(aLStack448);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack160);
LAB_710000b670:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

