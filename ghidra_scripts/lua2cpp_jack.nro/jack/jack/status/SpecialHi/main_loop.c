
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHi_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCliffCheckKind GVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong *this_01;
  L2CAgent *this_02;
  ulong uVar8;
  void *pvVar9;
  Article *pAVar10;
  BattleObjectModuleAccessor *pBVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar15;
  undefined8 *this_05;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  undefined8 auStack560 [2];
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
  undefined8 auStack224 [2];
  L2CValue aLStack208 [16];
  undefined8 auStack192 [2];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  ppBVar16 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_190);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71000090cc:
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    if ((uVar6 & 1) == 0) {
LAB_7100009238:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      if ((uVar6 & 1) != 0) {
        bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar16);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        }
        else {
          lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
          uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar6 & 1) == 0) goto LAB_7100009ec0;
        }
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar16);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack240,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::_L2CValue(aLStack240);
          this_05 = auStack224;
          goto LAB_7100009ebc;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
          uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) goto LAB_71000095e4;
          lib::L2CValue::L2CValue((L2CValue *)&local_190,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar16,uVar5);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES)
          ;
          GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar16,GVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar3);
          this_01 = &local_190;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl(*ppBVar16);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
          if ((bVar2 & 1U) != 0) {
            bVar1 = app::lua_bind::GroundModule__can_entry_cliff_impl(*ppBVar16);
            lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack256,FIGHTER_INSTANCE_WORK_ID_INT_CLIFF_NO_CATCH_FRAME);
              iVar3 = lib::L2CValue::as_integer(aLStack256);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar16,iVar3);
              lib::L2CValue::L2CValue(aLStack160,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
              uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_190);
              lib::L2CValue::_L2CValue((L2CValue *)&local_190);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
                lib::L2CValue::L2CValue(aLStack288,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
                lib::L2CValue::_L2CValue(aLStack288);
                lib::L2CValue::_L2CValue(aLStack272);
                iVar3 = 1;
                goto LAB_7100009ec8;
              }
              goto LAB_71000095e4;
            }
            lib::L2CValue::_L2CValue(aLStack144);
          }
          this_01 = &local_80;
        }
        lib::L2CValue::_L2CValue((L2CValue *)this_01);
      }
LAB_71000095e4:
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_190,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_REVERSE_LR);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        pLVar7 = (L2CValue *)0x1a;
        this_02 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CAgent::math_abs(this_02,pLVar7);
        lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack160,0xaadffd255);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        if ((uVar6 & 1) != 0) {
          bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar16,0.0);
          lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack304);
          app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar16);
        }
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_SHOOT_WIREROPE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        pvVar9 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar16,iVar3);
        if (pvVar9 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,pvVar9);
        }
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        uVar6 = lib::L2CValue::operator__
                          (aLStack144,
                           (L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
        if ((uVar6 & 1) == 0) {
          pAVar10 = (Article *)lib::L2CValue::as_pointer(aLStack144);
          uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,uVar5);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue
                      (aLStack160,
                       (L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,pvVar9);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
          iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar11);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_JACK_WIREROPE_STATUS_KIND_EXTEND);
          uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack320,0.0);
            lib::L2CValue::L2CValue(aLStack336,0.0);
            lib::L2CValue::L2CValue(aLStack352,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue(aLStack320);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
            lib::L2CValue::L2CValue(aLStack416,0x5e008fd84);
            pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
            this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
            this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
            HVar15 = lib::L2CValue::as_hash(aLStack416);
            uVar6 = lib::L2CValue::as_number(pLVar14);
            lVar18 = lib::L2CValue::as_number(this_03);
            uVar5 = lib::L2CValue::as_number(this_04);
            local_80 = uVar6 & 0xffffffff | lVar18 << 0x20;
            uStack120 = (ulong)uVar5;
            app::lua_bind::ModelModule__joint_global_position_impl
                      (*ppBVar16,HVar15,(Vector3f *)&local_80,true);
            lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_80);
            lib::L2CValue::L2CValue(aLStack384,local_80._4_4_);
            lib::L2CValue::L2CValue(aLStack368,(float)uStack120);
            lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_190);
            lib::L2CValue::operator_(pLVar12,aLStack384);
            lib::L2CValue::operator_(pLVar13,aLStack368);
            lib::L2CValue::_L2CValue(aLStack368);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue((L2CValue *)&local_190);
            lib::L2CValue::_L2CValue(aLStack416);
            uVar19 = app::lua_bind::GroundModule__get_center_pos_impl(*ppBVar16);
            lib::L2CValue::L2CValue(aLStack448,(float)uVar19);
            lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar19 >> 0x20));
            lib::L2CValue::L2CValue((L2CValue *)&local_190,aLStack448);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack432);
            lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_190);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue(aLStack448);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_190,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_SHOOT_WIREROPE);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_190);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x18cdc1683);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x1fbdb2615);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
            pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x18cdc1683);
            lib::L2CValue::operator_(pLVar13,pLVar14);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
            pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x1fbdb2615);
            lib::L2CValue::operator_(pLVar13,pLVar14);
            lib::L2CValue::L2CValue(aLStack512,false);
            uVar6 = lib::L2CValue::as_number(pLVar7);
            uVar5 = lib::L2CValue::as_number(pLVar12);
            local_190 = uVar6 & 0xffffffff | (ulong)uVar5 << 0x20;
            uStack392 = 0;
            uVar6 = lib::L2CValue::as_number(aLStack480);
            uVar5 = lib::L2CValue::as_number(aLStack496);
            local_80 = uVar6 & 0xffffffff | (ulong)uVar5 << 0x20;
            uStack120 = 0;
            bVar1 = lib::L2CValue::as_bool(aLStack512);
            bVar1 = app::lua_bind::GroundModule__ray_check_impl
                              (*ppBVar16,(Vector2f *)&local_190,(Vector2f *)&local_80,
                               (bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack464,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
            uVar6 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_190);
            lib::L2CValue::_L2CValue((L2CValue *)&local_190);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack512);
            lib::L2CValue::_L2CValue(aLStack496);
            lib::L2CValue::_L2CValue(aLStack480);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack528,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_PULL);
              lib::L2CValue::L2CValue(aLStack544,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
              lib::L2CValue::_L2CValue(aLStack544);
              lib::L2CValue::_L2CValue(aLStack528);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              return;
            }
            lib::L2CValue::_L2CValue(aLStack416);
            lib::L2CValue::_L2CValue(aLStack256);
          }
          lib::L2CValue::_L2CValue(aLStack160);
        }
        lib::L2CValue::_L2CValue(aLStack144);
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar16);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      if ((uVar6 & 1) == 0) {
LAB_7100009e18:
        this_05 = &local_80;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        if ((uVar6 & 1) == 0) {
LAB_7100009de0:
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) != 0) goto LAB_7100009e18;
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar6 & 1) == 0) goto LAB_7100009ec0;
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_190);
          lib::L2CValue::_L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) == 0) goto LAB_7100009de0;
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack560,false);
        lib::L2CValue::L2CValue(aLStack576,0xa28f17495);
        lib::L2CValue::L2CValue(aLStack592,0xed8a31e01);
        FUN_7100008540(this,auStack560,aLStack576,aLStack592);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack576);
        this_05 = auStack560;
      }
    }
    else {
      bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar16);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
        uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_190);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar6 & 1) == 0) goto LAB_7100009ec0;
      }
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar16);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_190);
      lib::L2CValue::_L2CValue((L2CValue *)&local_190);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_190);
        goto LAB_7100009238;
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      this_05 = auStack192;
    }
LAB_7100009ebc:
    lib::L2CValue::_L2CValue((L2CValue *)this_05);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
    uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_190);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_71000090cc;
  }
LAB_7100009ec0:
  iVar3 = 0;
LAB_7100009ec8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

