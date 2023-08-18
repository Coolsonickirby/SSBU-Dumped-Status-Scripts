
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNDrink_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  FighterEntryID FVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FighterKind FVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  void *pvVar14;
  Hash40 HVar15;
  ulong uVar16;
  FighterEntry *pFVar17;
  BattleObjectModuleAccessor *pBVar18;
  FighterModuleAccessor *pFVar19;
  BattleObjectModuleAccessor **ppBVar20;
  float fVar21;
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
  L2CValue aLStack112 [16];
  
  ppBVar20 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar20);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar12 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar12 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar13 = aLStack128;
LAB_710022c750:
      lib::L2CValue::_L2CValue(pLVar13);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar12 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar12 & 1) != 0) goto LAB_710022c5f0;
    }
    iVar5 = 1;
    goto LAB_710022d218;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710022c5f0:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar20);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar12 = lib::L2CValue::operator__(pLVar13,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar12 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar13 = aLStack272;
      goto LAB_710022c750;
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar20);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar12 = lib::L2CValue::operator__(pLVar13,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar12 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack320,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar13 = aLStack304;
      goto LAB_710022c750;
    }
  }
  FUN_7100229ec0(aLStack128,this);
  lib::L2CValue::operator_(aLStack128);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar3 & 1U) != 0) {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar12 = lib::L2CValue::operator__(pLVar13,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar20,GVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar5);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  FUN_710022a090(aLStack112,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    FUN_71001a6740(this);
  }
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar12 = lib::L2CValue::operator__(pLVar13,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SPIT_END);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar5);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar12 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar12 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar8 = app::lua_bind::LinkModule__get_node_object_id_impl(*ppBVar20,iVar5);
        lib::L2CValue::L2CValue(aLStack128,uVar8);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x50000000);
        uVar12 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar12 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_GENERATE_ARTICLE_STARMISSILE);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::ArticleModule__generate_article_impl(*ppBVar20,iVar5,false,-1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_TARGET_TASK);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar5);
          lib::L2CValue::L2CValue(aLStack144,iVar5);
          lib::L2CValue::L2CValue(aLStack176,0x54f934137);
          lib::L2CValue::L2CValue
                    (aLStack208,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_TARGET_HIT_GROUP);
          iVar5 = lib::L2CValue::as_integer(aLStack208);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar5);
          lib::L2CValue::L2CValue(aLStack192,iVar5);
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_TARGET_HIT_NO)
          ;
          iVar5 = lib::L2CValue::as_integer(aLStack240);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar5);
          lib::L2CValue::L2CValue(aLStack224,iVar5);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar8 = lib::L2CValue::as_integer(aLStack144);
          HVar15 = lib::L2CValue::as_hash(aLStack176);
          iVar9 = lib::L2CValue::as_integer(aLStack192);
          iVar10 = lib::L2CValue::as_integer(aLStack224);
          app::lua_bind::AttackModule__hit_absolute_joint_impl
                    (*ppBVar20,iVar5,uVar8,HVar15,iVar9,iVar10);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          pvVar14 = (void *)app::sv_battle_object::module_accessor(uVar8);
          if (pvVar14 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,pvVar14);
          }
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          uVar8 = app::sv_battle_object::kind(uVar8);
          lib::L2CValue::L2CValue(aLStack160,uVar8);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          uVar8 = app::sv_battle_object::category(uVar8);
          lib::L2CValue::L2CValue(aLStack176,uVar8 & 0xff);
          lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_FIGHTER);
          uVar12 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar12 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIND_NONE);
            lib::L2CValue::operator_(aLStack160,aLStack112);
LAB_710022cf48:
            lib::L2CValue::_L2CValue(aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_MASTERCORE);
            iVar5 = lib::L2CValue::as_integer(aLStack176);
            pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar18,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack176);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIND_NONE);
              lib::L2CValue::operator_(aLStack160,aLStack112);
              goto LAB_710022cf48;
            }
          }
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_METAMON);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar18,iVar5);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
          lib::L2CValue::_L2CValue(aLStack112);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = app::sv_battle_object::entry_id(uVar8);
          lib::L2CValue::L2CValue(aLStack192,iVar5);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KIND_KIRBY);
          uVar12 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar12 & 1) != 0) {
            pFVar19 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            iVar5 = app::FighterSpecializer_Kirby::get_copy_kind(pFVar19);
            lib::L2CValue::L2CValue(aLStack208,iVar5);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIND_NONE);
            uVar12 = lib::L2CValue::operator__(aLStack208,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar12 & 1) == 0) {
              lib::L2CValue::operator_(aLStack160,aLStack208);
              pFVar19 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
              iVar5 = app::FighterSpecializer_Kirby::get_copy_slot_no(pFVar19);
              lib::L2CValue::L2CValue(aLStack112,iVar5);
              lib::L2CValue::operator_(aLStack192,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
            }
            lib::L2CValue::_L2CValue(aLStack208);
          }
          app::LinkEventStarShot::new_l2c_table();
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x105a79305b);
          lib::L2CValue::L2CValue(aLStack112,0xeb91bf7e2);
          lib::L2CValue::operator_(pLVar13,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_WN_STAR_TASK_ID);
          iVar5 = lib::L2CValue::as_integer(aLStack224);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar5);
          lib::L2CValue::L2CValue(aLStack112,iVar5);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x7bff80916);
          lib::L2CValue::operator_(pLVar13,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x5109fcb99);
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator_(pLVar13,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack224,LINK_NO_CAPTURE);
          FUN_7100010a00(aLStack112,this,aLStack224,aLStack208);
          lib::L2CValue::operator_(aLStack208,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          lib::L2CValue::L2CValue(aLStack112,true);
          pFVar19 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
          iVar5 = lib::L2CValue::as_integer(aLStack192);
          FVar11 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = lib::L2CValue::as_bool(aLStack112);
          bVar4 = lib::L2CValue::as_bool(aLStack176);
          app::FighterSpecializer_Kirby::copy_setup
                    (pFVar19,iVar5,FVar11,(bool)(bVar2 & 1),(bool)(bVar4 & 1));
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lVar1 = -0x70;
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        FVar7 = lib::L2CValue::as_integer(aLStack112);
        pvVar14 = (void *)app::lua_bind::FighterManager__get_fighter_entry_impl
                                    (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE,FVar7);
        if (pvVar14 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,pvVar14);
        }
        uVar12 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar12 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack176,0x204bff27ec);
          uVar12 = lib::L2CValue::as_integer(aLStack160);
          uVar16 = lib::L2CValue::as_integer(aLStack176);
          fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar12,uVar16);
          lib::L2CValue::L2CValue(aLStack144,fVar21);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CValue::L2CValue(aLStack176,0);
          fVar21 = (float)lib::L2CValue::as_number(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          pFVar17 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack128);
          app::lua_bind::FighterEntry__heal_impl(pFVar17,fVar21,(bool)(bVar2 & 1),iVar5,0x7fb997a80)
          ;
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lVar1 = -0x60;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
  }
  iVar5 = 0;
LAB_710022d218:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

