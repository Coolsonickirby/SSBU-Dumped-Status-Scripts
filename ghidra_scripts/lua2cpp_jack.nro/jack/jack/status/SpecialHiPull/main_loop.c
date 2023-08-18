
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiPull_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  Hash40 HVar15;
  L2CValue *pLVar16;
  undefined8 *this_01;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  undefined8 auStack736 [2];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  undefined8 auStack688 [2];
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
  undefined8 local_1e0;
  undefined8 uStack472;
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
  undefined8 local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1e0,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1e0,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1e0,BATTLE_OBJECT_CATEGORY_INVALID);
  uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_1e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar3);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack176,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar6);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack176);
    uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,uVar4);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack192,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,pvVar6);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
    fVar17 = (float)app::lua_bind::MotionModule__frame_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar17);
    lib::L2CValue::L2CValue(aLStack240,aLStack144);
    lib::L2CValue::L2CValue(aLStack256,aLStack160);
    FUN_710001d300(aLStack224,aLStack240,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack272,0x19ef5941a7);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
    uVar5 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,0x172770da20);
      lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,100.0);
    lib::L2CValue::operator_((L2CValue *)&local_1e0,aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    uVar9 = lib::L2CValue::as_integer(aLStack272);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,fVar17);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
      uVar5 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      if ((uVar5 & 1) != 0) {
        FUN_710001be70(this);
      }
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
      lib::L2CValue::L2CValue(aLStack496,0x5e008fd84);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
      HVar15 = lib::L2CValue::as_hash(aLStack496);
      local_80._0_4_ = (float)lib::L2CValue::as_number(pLVar12);
      local_80._4_4_ = (float)lib::L2CValue::as_number(pLVar13);
      uVar4 = lib::L2CValue::as_number(pLVar14);
      uStack120 = (ulong)uVar4;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar15,(Vector3f *)&local_80,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(float)local_80);
      lib::L2CValue::L2CValue(aLStack464,local_80._4_4_);
      lib::L2CValue::L2CValue(aLStack448,(float)uStack120);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)&local_1e0);
      lib::L2CValue::operator_(pLVar10,aLStack464);
      lib::L2CValue::operator_(pLVar11,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x162d277af);
      lib::L2CValue::L2CValue(aLStack496,0x54f934137);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x162d277af);
      HVar15 = lib::L2CValue::as_hash(aLStack496);
      fVar17 = (float)lib::L2CValue::as_number(pLVar12);
      fVar18 = (float)lib::L2CValue::as_number(pLVar13);
      uVar4 = lib::L2CValue::as_number(pLVar14);
      uStack120 = (ulong)uVar4;
      local_80._0_4_ = fVar17;
      local_80._4_4_ = fVar18;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar15,(Vector3f *)&local_80,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(float)local_80);
      lib::L2CValue::L2CValue(aLStack464,local_80._4_4_);
      lib::L2CValue::L2CValue(aLStack448,(float)uStack120);
      lib::L2CValue::operator_(pLVar16,(L2CValue *)&local_1e0);
      lib::L2CValue::operator_(pLVar10,aLStack464);
      lib::L2CValue::operator_(pLVar11,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar16 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      lib::L2CValue::operator_(pLVar11,pLVar12);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar11,pLVar12);
      lib::L2CValue::L2CValue(aLStack544,false);
      uVar19 = lib::L2CValue::as_number(pLVar16);
      uVar20 = lib::L2CValue::as_number(pLVar10);
      local_1e0 = CONCAT44(uVar20,uVar19);
      uStack472 = 0;
      uVar19 = lib::L2CValue::as_number(aLStack512);
      uVar20 = lib::L2CValue::as_number(aLStack528);
      local_80 = CONCAT44(uVar20,uVar19);
      uStack120 = 0;
      bVar2 = lib::L2CValue::as_bool(aLStack544);
      bVar2 = app::lua_bind::GroundModule__ray_check_impl
                        (this->moduleAccessor,(Vector2f *)&local_1e0,(Vector2f *)&local_80,
                         (bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack496,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,true);
      uVar5 = lib::L2CValue::operator__(aLStack496,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        lib::L2CValue::L2CValue(aLStack560,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_CUT);
        lib::L2CValue::L2CValue(aLStack576,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,true);
      uVar5 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_PICKUP);
        lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_1e0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_THROW);
        lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_1e0);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&local_80);
      lib::L2CValue::L2CValue(aLStack320,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      bVar1 = true;
    }
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    if (bVar1) goto LAB_710001e128;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar3);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1e0,
                 (L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,pvVar6);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    pAVar7 = (Article *)lib::L2CValue::as_pointer((L2CValue *)&local_1e0);
    uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue(aLStack176,uVar4);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,
                 (L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,pvVar6);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_80);
    fVar17 = (float)app::lua_bind::PhysicsModule__get_2nd_active_length_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack176,fVar17);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x1286b5ed52);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar9 = lib::L2CValue::as_integer(aLStack224);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar9);
    lib::L2CValue::L2CValue(aLStack192,fVar17);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack592,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_CUT);
      lib::L2CValue::L2CValue(aLStack608,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue(aLStack592);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      goto LAB_710001e128;
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1e0,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar5 & 1) != 0) {
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack656,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack672,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack672);
      pLVar16 = aLStack656;
    }
    else {
      lib::L2CValue::L2CValue(aLStack624,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack640,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack640);
      pLVar16 = aLStack624;
    }
    lib::L2CValue::_L2CValue(pLVar16);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001e128;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  if ((uVar5 & 1) == 0) {
LAB_710001e114:
    this_01 = &local_80;
LAB_710001e118:
    lib::L2CValue::_L2CValue((L2CValue *)this_01);
  }
  else {
    this_00 = &this->globalTable;
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((uVar5 & 1) != 0) {
      pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      if ((uVar5 & 1) == 0) goto LAB_710001e0dc;
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
LAB_710001e198:
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack736,false);
        lib::L2CValue::L2CValue(aLStack752,0xfdcc8841e);
        lib::L2CValue::L2CValue(aLStack768,0x13d75109ca);
        FUN_7100008540(this,auStack736,aLStack752,aLStack768);
        lib::L2CValue::_L2CValue(aLStack768);
        lib::L2CValue::_L2CValue(aLStack752);
        this_01 = auStack736;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack688,false);
        lib::L2CValue::L2CValue(aLStack704,0x118ab9a6ca);
        lib::L2CValue::L2CValue(aLStack720,0x15fce452d5);
        FUN_7100008540(this,auStack688,aLStack704,aLStack720);
        lib::L2CValue::_L2CValue(aLStack720);
        lib::L2CValue::_L2CValue(aLStack704);
        this_01 = auStack688;
      }
      goto LAB_710001e118;
    }
LAB_710001e0dc:
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((uVar5 & 1) != 0) goto LAB_710001e114;
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar16,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar5 & 1) != 0) goto LAB_710001e198;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001e128:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

