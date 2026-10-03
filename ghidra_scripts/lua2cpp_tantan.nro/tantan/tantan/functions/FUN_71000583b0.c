
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000583b0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11,L2CValue *param_12_00,
                   L2CValue *param_12,L2CValue *param_14_00,L2CValue *param_13,L2CValue *param_14,
                   L2CValue *param_15,L2CValue *param_16,L2CValue *param_17,L2CValue *param_18,
                   L2CValue *param_19,L2CValue *param_20,L2CValue *param_21,L2CValue *param_22,
                   L2CValue *param_23)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  uint uVar5;
  LinkAttribute LVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  ulong uVar12;
  ulong uVar13;
  L2CValue *pLVar14;
  Fighter *pFVar15;
  void *pvVar16;
  Article *pAVar17;
  Hash40 HVar18;
  BattleObjectModuleAccessor **ppBVar19;
  float fVar20;
  float fVar21;
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lVar8 = lib::L2CValue::as_integer(param_9);
  lVar9 = lib::L2CValue::as_integer(param_10);
  ppBVar19 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
  app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar19,lVar8,lVar9);
  lVar8 = lib::L2CValue::as_integer(param_11);
  lVar9 = lib::L2CValue::as_integer(param_12_00);
  app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar19,lVar8,lVar9);
  pLVar14 = (L2CValue *)(param_2 + 200);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar14,5);
  lib::L2CValue::L2CValue(aLStack136,HIT_STATUS_OFF);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
  iVar3 = lib::L2CValue::as_integer(param_3);
  HVar4 = lib::L2CValue::as_integer(aLStack136);
  app::FighterSpecializer_Tantan::set_hit_status_default_arm(pBVar11,iVar3,HVar4);
  lib::L2CValue::~L2CValue(aLStack136);
  app::lua_bind::HitModule__reset_status_all_impl(*ppBVar19,0);
  lib::L2CValue::L2CValue(aLStack232,param_3);
  lib::L2CValue::L2CValue(aLStack248,param_17);
  lib::L2CValue::L2CValue(aLStack264,param_18);
  lib::L2CValue::L2CValue(aLStack280,param_19);
  lib::L2CValue::L2CValue(aLStack296,param_20);
  lib::L2CValue::L2CValue(aLStack152,0.0);
  lib::L2CValue::L2CValue(aLStack168,false);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar14,0x16);
  lib::L2CValue::L2CValue(aLStack136,SITUATION_KIND_AIR);
  uVar12 = lib::L2CValue::operator==(pLVar10,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar12 & 1) == 0) {
    fVar20 = (float)app::lua_bind::ControlModule__get_stick_dir_impl(*ppBVar19);
    lib::L2CValue::L2CValue(aLStack184,fVar20);
    lib::L2CValue::L2CValue(aLStack200,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack216,0x16acacde7d);
    uVar12 = lib::L2CValue::as_integer(aLStack200);
    uVar13 = lib::L2CValue::as_integer(aLStack216);
    fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar12,uVar13);
    lib::L2CValue::L2CValue(aLStack136,fVar20);
    uVar12 = lib::L2CValue::operator<(aLStack136,aLStack184);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::~L2CValue(aLStack200);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack200,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack216,0x1632cf261a);
      uVar12 = lib::L2CValue::as_integer(aLStack200);
      uVar13 = lib::L2CValue::as_integer(aLStack216);
      fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar12,uVar13);
      lib::L2CValue::L2CValue(aLStack136,fVar20);
      uVar12 = lib::L2CValue::operator<(aLStack184,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::~L2CValue(aLStack200);
      if ((uVar12 & 1) != 0) {
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](pLVar14,4);
        lib::L2CValue::L2CValue(aLStack216,0x10344810c6);
        pFVar15 = (Fighter *)lib::L2CValue::as_pointer(pLVar14);
        iVar3 = lib::L2CValue::as_integer(aLStack232);
        HVar18 = lib::L2CValue::as_hash(aLStack216);
        fVar20 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar15,iVar3,HVar18)
        ;
        lib::L2CValue::L2CValue(aLStack200,fVar20);
        lib::L2CValue::operator-(aLStack152,aLStack200);
        lib::L2CValue::operator=(aLStack152,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack200);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::L2CValue(aLStack136,true);
        lib::L2CValue::operator=(aLStack168,aLStack136);
        goto LAB_710005885c;
      }
    }
    else {
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](pLVar14,4);
      lib::L2CValue::L2CValue(aLStack216,0xeab38e7cd);
      pFVar15 = (Fighter *)lib::L2CValue::as_pointer(pLVar14);
      iVar3 = lib::L2CValue::as_integer(aLStack232);
      HVar18 = lib::L2CValue::as_hash(aLStack216);
      fVar20 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar15,iVar3,HVar18);
      lib::L2CValue::L2CValue(aLStack200,fVar20);
      lib::L2CValue::operator+(aLStack152,aLStack200);
      lib::L2CValue::operator=(aLStack152,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack200);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::L2CValue(aLStack136,true);
      lib::L2CValue::operator=(aLStack168,aLStack136);
LAB_710005885c:
      lib::L2CValue::~L2CValue(aLStack136);
    }
    lVar8 = -0xa8;
LAB_71000588f4:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar8));
  }
  else {
    lib::L2CValue::L2CValue(aLStack136,false);
    uVar12 = lib::L2CValue::operator==(aLStack296,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar12 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack136,true);
      uVar12 = lib::L2CValue::operator==(aLStack280,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar12 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack200,0xc1f106e8d);
        lib::L2CValue::L2CValue(aLStack216,0x92239f3ed);
        uVar12 = lib::L2CValue::as_integer(aLStack200);
        uVar13 = lib::L2CValue::as_integer(aLStack216);
        fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar12,uVar13);
        lib::L2CValue::L2CValue(aLStack184,fVar20);
        lib::L2CValue::operator-(aLStack184);
        lib::L2CValue::operator=(aLStack152,aLStack136);
      }
      else {
        lib::L2CValue::L2CValue(aLStack200,0xc1f106e8d);
        lib::L2CValue::L2CValue(aLStack216,0x100351cd45);
        uVar12 = lib::L2CValue::as_integer(aLStack200);
        uVar13 = lib::L2CValue::as_integer(aLStack216);
        fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar19,uVar12,uVar13);
        lib::L2CValue::L2CValue(aLStack184,fVar20);
        lib::L2CValue::operator-(aLStack184);
        lib::L2CValue::operator=(aLStack152,aLStack136);
      }
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack216);
      lVar8 = -0xb8;
      goto LAB_71000588f4;
    }
  }
  lib::L2CValue::L2CValue(aLStack136,0.0);
  lib::L2CValue::operator+(aLStack152,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  fVar20 = (float)lib::L2CValue::as_number(aLStack184);
  iVar3 = lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar19,fVar20,iVar3);
  lib::L2CValue::~L2CValue(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack168);
  iVar3 = lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar19,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::L2CValue(aLStack136,FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::operator|(aLStack136,param_21);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
  lib::L2CValue::operator|(aLStack168,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  uVar12 = lib::L2CValue::as_integer(aLStack152);
  app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(*ppBVar19,uVar12);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_ENABLE);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar19,iVar3);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CANCEL_ENABLE);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar19,iVar3);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
  lVar8 = lib::L2CValue::as_integer(param_4);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar19,lVar8,iVar3);
  lib::L2CValue::~L2CValue(aLStack136);
  iVar3 = lib::L2CValue::as_integer(param_12);
  app::lua_bind::ArticleModule__generate_article_impl(*ppBVar19,iVar3,false,-1);
  iVar3 = lib::L2CValue::as_integer(param_14_00);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar19,iVar3);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((bVar2 & 1U) != 0) {
    iVar3 = lib::L2CValue::as_integer(param_14_00);
    pvVar16 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar19,iVar3);
    if (pvVar16 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack152,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,pvVar16);
    }
    uVar12 = lib::L2CValue::operator==
                       (aLStack152,
                        (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    if ((uVar12 & 1) == 0) {
      pAVar17 = (Article *)lib::L2CValue::as_pointer(aLStack152);
      uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar17);
      lib::L2CValue::L2CValue(aLStack136,uVar5);
      uVar5 = lib::L2CValue::as_integer(aLStack136);
      pvVar16 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar16 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack168,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack168,pvVar16);
      }
      lib::L2CValue::~L2CValue(aLStack136);
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      HVar18 = app::lua_bind::MotionModule__motion_kind_impl(pBVar11);
      lib::L2CValue::L2CValue(aLStack184,HVar18);
      lib::L2CValue::L2CValue(aLStack136,0xf5a127a27);
      uVar12 = lib::L2CValue::operator==(aLStack184,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack184);
      if ((uVar12 & 1) == 0) {
        iVar3 = lib::L2CValue::as_integer(param_14_00);
        app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar19,iVar3,0);
      }
      lib::L2CValue::~L2CValue(aLStack168);
    }
    lib::L2CValue::~L2CValue(aLStack152);
  }
  iVar3 = lib::L2CValue::as_integer(param_12);
  pvVar16 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar19,iVar3);
  if (pvVar16 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack152,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,pvVar16);
  }
  uVar12 = lib::L2CValue::operator==
                     (aLStack152,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                     );
  if ((uVar12 & 1) == 0) {
    pAVar17 = (Article *)lib::L2CValue::as_pointer(aLStack152);
    uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar17);
    lib::L2CValue::L2CValue(aLStack168,uVar5);
    uVar5 = lib::L2CValue::as_integer(aLStack168);
    pvVar16 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar16 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack136,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,pvVar16);
    }
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::L2CValue
              (aLStack184,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack184);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack136);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack168,iVar3);
    lib::L2CValue::~L2CValue(aLStack184);
    iVar3 = lib::L2CValue::as_integer(param_16);
    uVar5 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = app::lua_bind::LinkModule__link_impl(*ppBVar19,iVar3,uVar5);
    lib::L2CValue::L2CValue(aLStack312,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack184,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
    lib::L2CValue::L2CValue(aLStack200,true);
    iVar3 = lib::L2CValue::as_integer(param_16);
    LVar6 = lib::L2CValue::as_integer(aLStack184);
    bVar1 = lib::L2CValue::as_bool(aLStack200);
    app::lua_bind::LinkModule__set_attribute_impl(*ppBVar19,iVar3,LVar6,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack344,param_11);
    lib::L2CValue::L2CValue(aLStack360,0xd9838e994);
    FUN_710002a0c0(aLStack328,param_2,aLStack344,aLStack360);
    lib::L2CValue::~L2CValue(aLStack328);
    lib::L2CValue::~L2CValue(aLStack360);
    lib::L2CValue::~L2CValue(aLStack344);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_SHOOT);
  iVar3 = lib::L2CValue::as_integer(param_12);
  iVar7 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::ArticleModule__change_status_impl(*ppBVar19,iVar3,iVar7,0);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,true);
  uVar12 = lib::L2CValue::operator==(param_14,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET);
    iVar3 = lib::L2CValue::as_integer(aLStack168);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar19,iVar3);
    lib::L2CValue::L2CValue(aLStack136,iVar3);
    uVar12 = lib::L2CValue::operator==(param_3,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((uVar12 & 1) == 0) {
      iVar3 = lib::L2CValue::as_integer(param_3);
      app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar19,iVar3,false);
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_7100059074;
    }
    iVar3 = lib::L2CValue::as_integer(param_15);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar19,iVar3);
    lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack136,true);
    uVar12 = lib::L2CValue::operator==(aLStack168,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((uVar12 & 1) != 0) {
      lib::L2CValue::operator=(param_5,param_6);
      lib::L2CValue::operator=(param_7,param_8);
    }
  }
  lib::L2CValue::L2CValue(aLStack136,true);
  uVar12 = lib::L2CValue::operator==(param_13,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack136,0.0);
    lib::L2CValue::L2CValue(aLStack168,1.0);
    lib::L2CValue::L2CValue(aLStack184,false);
    HVar18 = lib::L2CValue::as_hash(param_7);
    fVar20 = (float)lib::L2CValue::as_number(aLStack136);
    fVar21 = (float)lib::L2CValue::as_number(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar19,HVar18,fVar20,fVar21,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack136);
  }
  iVar3 = lib::L2CValue::as_integer(param_3);
  HVar18 = lib::L2CValue::as_hash(param_5);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*ppBVar19,iVar3,HVar18,0.0,1.0,false,false,0.0,true,true,false);
  lib::L2CValue::L2CValue(aLStack376,param_22);
  lib::L2CValue::L2CValue(aLStack392,param_23);
  FUN_710002ac50(param_2,aLStack376,aLStack392);
  lib::L2CValue::~L2CValue(aLStack392);
  lib::L2CValue::~L2CValue(aLStack376);
  lib::L2CValue::L2CValue(param_1,0);
LAB_7100059074:
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}

