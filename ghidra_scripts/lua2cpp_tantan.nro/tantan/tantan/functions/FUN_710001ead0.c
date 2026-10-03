
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ead0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11,L2CValue *param_12,
                   L2CValue *param_13,L2CValue *param_14,L2CValue *param_15,L2CValue *param_16,
                   L2CValue *param_17)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  Article *pAVar11;
  BattleObjectModuleAccessor *pBVar12;
  Hash40 HVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  L2CValue aLStack696 [16];
  L2CValue aLStack680 [16];
  L2CValue aLStack664 [16];
  L2CValue aLStack648 [16];
  L2CValue aLStack632 [16];
  L2CValue aLStack616 [16];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
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
  L2CValue aLStack152 [24];
  
  lib::L2CValue::L2CValue(param_1,false);
  iVar5 = lib::L2CValue::as_integer(param_3);
  ppBVar14 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar5);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,true);
  uVar8 = lib::L2CValue::operator==(aLStack168,aLStack152);
  lib::L2CValue::~L2CValue(aLStack152);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack168);
LAB_710001ed6c:
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar14,iVar5);
    lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack152);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID);
    iVar5 = lib::L2CValue::as_integer(aLStack184);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar5);
    lib::L2CValue::L2CValue(aLStack152,iVar5);
    uVar7 = lib::L2CValue::as_integer(aLStack152);
    pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack168,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack168,pvVar10);
    }
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack184);
    HVar13 = app::lua_bind::ArticleModule__motion_kind_impl(*ppBVar14,iVar5,1);
    lib::L2CValue::L2CValue(aLStack152,HVar13);
    uVar8 = lib::L2CValue::operator==(aLStack152,param_7);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack184);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      iVar5 = lib::L2CValue::as_integer(aLStack184);
      HVar13 = app::lua_bind::ArticleModule__motion_kind_impl(*ppBVar14,iVar5,1);
      lib::L2CValue::L2CValue(aLStack152,HVar13);
      uVar8 = lib::L2CValue::operator==(aLStack152,param_10);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::~L2CValue(aLStack184);
      if ((uVar8 & 1) == 0) goto LAB_710001fe68;
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar12);
      lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack152,true);
      uVar8 = lib::L2CValue::operator==(aLStack184,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::~L2CValue(aLStack184);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack152,0.0);
        lib::L2CValue::L2CValue(aLStack184,1.0);
        lib::L2CValue::L2CValue(aLStack200,false);
        HVar13 = lib::L2CValue::as_hash(param_9);
        fVar15 = (float)lib::L2CValue::as_number(aLStack152);
        fVar16 = (float)lib::L2CValue::as_number(aLStack184);
        bVar1 = lib::L2CValue::as_bool(aLStack200);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar14,HVar13,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack200);
        lib::L2CValue::~L2CValue(aLStack184);
        lib::L2CValue::~L2CValue(aLStack152);
        FUN_71000209e0(param_2);
        app::lua_bind::VisibilityModule__set_default_all_impl(*ppBVar14);
        goto LAB_710001fe68;
      }
      iVar5 = lib::L2CValue::as_integer(param_6);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar14,iVar5);
      iVar5 = lib::L2CValue::as_integer(param_6);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar5);
      lib::L2CValue::L2CValue(aLStack152,iVar5);
      uVar8 = lib::L2CValue::operator<=(param_16,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      if ((uVar8 & 1) == 0) goto LAB_710001fe68;
      iVar5 = lib::L2CValue::as_integer(param_4);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar5);
      lib::L2CValue::L2CValue(aLStack184,fVar15);
      lib::L2CValue::L2CValue(aLStack648,aLStack184);
      FUN_7100020800(param_2,aLStack648);
      lib::L2CValue::~L2CValue(aLStack648);
      lib::L2CValue::operator-(aLStack184,param_17);
      lib::L2CValue::L2CValue(aLStack680,0.0);
      lib::L2CValue::L2CValue(aLStack696,10.0);
      lua2cpp::L2CFighterBase::clamp(param_2,(L2CValue)0x68,(L2CValue)0x58,(L2CValue)0x48);
      lib::L2CValue::operator=(aLStack184,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::~L2CValue(aLStack696);
      lib::L2CValue::~L2CValue(aLStack680);
      lib::L2CValue::~L2CValue(aLStack664);
      lib::L2CValue::L2CValue(aLStack152,0.0);
      lib::L2CValue::operator+(aLStack184,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      fVar15 = (float)lib::L2CValue::as_number(aLStack200);
      iVar5 = lib::L2CValue::as_integer(param_4);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar5);
LAB_710001f4b0:
      lVar9 = -0xb8;
    }
    else {
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar12);
      lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack152,true);
      uVar8 = lib::L2CValue::operator==(aLStack184,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::~L2CValue(aLStack184);
      if ((uVar8 & 1) == 0) {
        iVar5 = lib::L2CValue::as_integer(param_6);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar14,iVar5);
        iVar5 = lib::L2CValue::as_integer(param_6);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar5);
        lib::L2CValue::L2CValue(aLStack152,iVar5);
        uVar8 = lib::L2CValue::operator<=(param_14,aLStack152);
        lib::L2CValue::~L2CValue(aLStack152);
        if ((uVar8 & 1) == 0) goto LAB_710001fe68;
        iVar5 = lib::L2CValue::as_integer(param_4);
        fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar5);
        lib::L2CValue::L2CValue(aLStack184,fVar15);
        lib::L2CValue::L2CValue(aLStack584,aLStack184);
        FUN_7100020800(param_2,aLStack584);
        lib::L2CValue::~L2CValue(aLStack584);
        lib::L2CValue::operator-(aLStack184,param_15);
        lib::L2CValue::L2CValue(aLStack616,0.0);
        lib::L2CValue::L2CValue(aLStack632,10.0);
        lua2cpp::L2CFighterBase::clamp(param_2,(L2CValue)0xa8,(L2CValue)0x98,(L2CValue)0x88);
        lib::L2CValue::operator=(aLStack184,aLStack152);
        lib::L2CValue::~L2CValue(aLStack152);
        lib::L2CValue::~L2CValue(aLStack632);
        lib::L2CValue::~L2CValue(aLStack616);
        lib::L2CValue::~L2CValue(aLStack600);
        lib::L2CValue::L2CValue(aLStack152,0.0);
        lib::L2CValue::operator+(aLStack184,aLStack152);
        lib::L2CValue::~L2CValue(aLStack152);
        fVar15 = (float)lib::L2CValue::as_number(aLStack200);
        iVar5 = lib::L2CValue::as_integer(param_4);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar5);
        goto LAB_710001f4b0;
      }
      iVar5 = lib::L2CValue::as_integer(param_5);
      bVar1 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar14,iVar5,0);
      lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      if ((bVar2 & 1U) == 0) goto LAB_710001fe68;
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      uVar7 = app::lua_bind::MotionModule__end_frame_impl(pBVar12);
      lib::L2CValue::L2CValue(aLStack184,uVar7);
      lib::L2CValue::L2CValue(aLStack504,param_10);
      lib::L2CValue::L2CValue(aLStack520,param_11);
      lib::L2CValue::L2CValue(aLStack536,-1.0);
      lib::L2CValue::L2CValue(aLStack552,1.0);
      FUN_71000204c0(param_2,aLStack504,aLStack520,aLStack536,aLStack552);
      lib::L2CValue::~L2CValue(aLStack552);
      lib::L2CValue::~L2CValue(aLStack536);
      lib::L2CValue::~L2CValue(aLStack520);
      lib::L2CValue::~L2CValue(aLStack504);
      lib::L2CValue::operator/(aLStack184,param_13);
      FUN_7100020800(param_2,aLStack568);
      lib::L2CValue::~L2CValue(aLStack568);
      lib::L2CValue::operator/(aLStack184,param_13);
      lib::L2CValue::L2CValue(aLStack152,0.0);
      lib::L2CValue::operator+(aLStack216,aLStack152);
      lib::L2CValue::~L2CValue(aLStack152);
      fVar15 = (float)lib::L2CValue::as_number(aLStack200);
      iVar5 = lib::L2CValue::as_integer(param_4);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar5);
      lib::L2CValue::~L2CValue(aLStack200);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::L2CValue(aLStack152,0);
      iVar5 = lib::L2CValue::as_integer(aLStack152);
      iVar6 = lib::L2CValue::as_integer(param_6);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar5,iVar6);
      lib::L2CValue::~L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack152,true);
      lib::L2CValue::operator=(param_1,aLStack152);
      lVar9 = -0x88;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
    lVar9 = -0xa8;
  }
  else {
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack200);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar14,iVar5);
    lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack152,false);
    uVar8 = lib::L2CValue::operator==(aLStack184,aLStack152);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((uVar8 & 1) == 0) goto LAB_710001ed6c;
    lib::L2CValue::L2CValue
              (aLStack392,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    lib::L2CValue::L2CValue
              (aLStack408,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    lib::L2CValue::L2CValue(aLStack152,0x5c56b7b64);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
    lVar9 = lib::L2CValue::as_integer(aLStack152);
    iVar5 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar14,lVar9,iVar5);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar5);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar14,iVar5,false,-1);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar5);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar14,iVar5,false,-1);
    lib::L2CValue::~L2CValue(aLStack152);
    FUN_7100020a90(param_2);
    FUN_7100021430(param_2);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack168);
    pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar14,iVar5);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack152,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,pvVar10);
    }
    lib::L2CValue::~L2CValue(aLStack168);
    uVar8 = lib::L2CValue::operator==
                      (aLStack152,
                       (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    if ((uVar8 & 1) == 0) {
      pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack152);
      uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
      lib::L2CValue::L2CValue(aLStack184,uVar7);
      uVar7 = lib::L2CValue::as_integer(aLStack184);
      pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack168,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack168,pvVar10);
      }
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::L2CValue(aLStack200,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
      iVar5 = lib::L2CValue::as_integer(aLStack200);
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar12,iVar5);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack184,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack184,pvVar10);
      }
      lib::L2CValue::~L2CValue(aLStack200);
      uVar8 = lib::L2CValue::operator==
                        (aLStack184,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      if ((uVar8 & 1) == 0) {
        pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack184);
        uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
        lib::L2CValue::L2CValue(aLStack216,uVar7);
        uVar7 = lib::L2CValue::as_integer(aLStack216);
        pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
        if (pvVar10 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack200,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack200,pvVar10);
        }
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::L2CValue(aLStack232,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_FLAG_IS_REINFORCE)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack232);
        pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack200);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack216);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::~L2CValue(aLStack232);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack216,0xa02480224);
          lib::L2CValue::L2CValue(aLStack232,0.0);
          lib::L2CValue::L2CValue(aLStack248,1.0);
          lib::L2CValue::L2CValue(aLStack264,true);
          lib::L2CValue::L2CValue(aLStack280,0.0);
          lib::L2CValue::L2CValue(aLStack296,false);
          lib::L2CValue::L2CValue(aLStack312,false);
          HVar13 = lib::L2CValue::as_hash(aLStack216);
          fVar15 = (float)lib::L2CValue::as_number(aLStack232);
          fVar16 = (float)lib::L2CValue::as_number(aLStack248);
          bVar1 = lib::L2CValue::as_bool(aLStack264);
          fVar17 = (float)lib::L2CValue::as_number(aLStack280);
          bVar3 = lib::L2CValue::as_bool(aLStack296);
          bVar4 = lib::L2CValue::as_bool(aLStack312);
          pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack200);
          app::lua_bind::MotionModule__change_motion_impl
                    (pBVar12,HVar13,fVar15,fVar16,(bool)(bVar1 & 1),fVar17,(bool)(bVar3 & 1),
                     (bool)(bVar4 & 1));
        }
        else {
          lib::L2CValue::L2CValue(aLStack216,0x113254e2cd);
          lib::L2CValue::L2CValue(aLStack232,0.0);
          lib::L2CValue::L2CValue(aLStack248,1.0);
          lib::L2CValue::L2CValue(aLStack264,true);
          lib::L2CValue::L2CValue(aLStack280,0.0);
          lib::L2CValue::L2CValue(aLStack296,false);
          lib::L2CValue::L2CValue(aLStack312,false);
          HVar13 = lib::L2CValue::as_hash(aLStack216);
          fVar15 = (float)lib::L2CValue::as_number(aLStack232);
          fVar16 = (float)lib::L2CValue::as_number(aLStack248);
          bVar1 = lib::L2CValue::as_bool(aLStack264);
          fVar17 = (float)lib::L2CValue::as_number(aLStack280);
          bVar3 = lib::L2CValue::as_bool(aLStack296);
          bVar4 = lib::L2CValue::as_bool(aLStack312);
          pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack200);
          app::lua_bind::MotionModule__change_motion_impl
                    (pBVar12,HVar13,fVar15,fVar16,(bool)(bVar1 & 1),fVar17,(bool)(bVar3 & 1),
                     (bool)(bVar4 & 1));
        }
        lib::L2CValue::~L2CValue(aLStack312);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack264);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue(aLStack232);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::L2CValue(aLStack232,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
        iVar5 = lib::L2CValue::as_integer(aLStack232);
        pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar14,iVar5);
        if (pvVar10 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack216,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack216,pvVar10);
        }
        lib::L2CValue::~L2CValue(aLStack232);
        uVar8 = lib::L2CValue::operator==
                          (aLStack216,
                           (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
        if ((uVar8 & 1) == 0) {
          pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack216);
          uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
          lib::L2CValue::L2CValue(aLStack248,uVar7);
          uVar7 = lib::L2CValue::as_integer(aLStack248);
          pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
          if (pvVar10 == (void *)0x0) {
            lib::L2CValue::L2CValue
                      (aLStack232,
                       (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
          }
          else {
            lib::L2CValue::L2CValue(aLStack232,pvVar10);
          }
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::L2CValue
                    (aLStack248,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
          lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
          iVar5 = lib::L2CValue::as_integer(aLStack280);
          pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
          bVar1 = app::lua_bind::ArticleModule__is_exist_impl(pBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack264,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack264);
          lib::L2CValue::~L2CValue(aLStack264);
          lib::L2CValue::~L2CValue(aLStack280);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH2);
            iVar5 = lib::L2CValue::as_integer(aLStack280);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
            bVar1 = app::lua_bind::ArticleModule__is_exist_impl(pBVar12,iVar5);
            lib::L2CValue::L2CValue(aLStack264,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack264);
            lib::L2CValue::~L2CValue(aLStack264);
            lib::L2CValue::~L2CValue(aLStack280);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH2);
              iVar5 = lib::L2CValue::as_integer(aLStack280);
              pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
              pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar12,iVar5);
              if (pvVar10 == (void *)0x0) {
                lib::L2CValue::L2CValue
                          (aLStack264,
                           (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
              }
              else {
                lib::L2CValue::L2CValue(aLStack264,pvVar10);
              }
              lib::L2CValue::operator=(aLStack248,aLStack264);
              goto LAB_710001fac8;
            }
            lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH3);
            iVar5 = lib::L2CValue::as_integer(aLStack280);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
            bVar1 = app::lua_bind::ArticleModule__is_exist_impl(pBVar12,iVar5);
            lib::L2CValue::L2CValue(aLStack264,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack264);
            lib::L2CValue::~L2CValue(aLStack264);
            lib::L2CValue::~L2CValue(aLStack280);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH3);
              iVar5 = lib::L2CValue::as_integer(aLStack280);
              pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
              pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar12,iVar5);
              if (pvVar10 == (void *)0x0) {
                lib::L2CValue::L2CValue
                          (aLStack264,
                           (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
              }
              else {
                lib::L2CValue::L2CValue(aLStack264,pvVar10);
              }
              lib::L2CValue::operator=(aLStack248,aLStack264);
              goto LAB_710001fac8;
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack280,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
            iVar5 = lib::L2CValue::as_integer(aLStack280);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
            pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar12,iVar5);
            if (pvVar10 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        (aLStack264,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
            }
            else {
              lib::L2CValue::L2CValue(aLStack264,pvVar10);
            }
            lib::L2CValue::operator=(aLStack248,aLStack264);
LAB_710001fac8:
            lib::L2CValue::~L2CValue(aLStack264);
            lib::L2CValue::~L2CValue(aLStack280);
          }
          uVar8 = lib::L2CValue::operator==
                            (aLStack248,
                             (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
          if ((uVar8 & 1) == 0) {
            pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack248);
            uVar7 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
            lib::L2CValue::L2CValue(aLStack280,uVar7);
            uVar7 = lib::L2CValue::as_integer(aLStack280);
            pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
            if (pvVar10 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        (aLStack264,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
            }
            else {
              lib::L2CValue::L2CValue(aLStack264,pvVar10);
            }
            lib::L2CValue::~L2CValue(aLStack280);
            lib::L2CValue::L2CValue(aLStack280,0xa02480224);
            lib::L2CValue::L2CValue(aLStack296,0.0);
            lib::L2CValue::L2CValue(aLStack312,1.0);
            lib::L2CValue::L2CValue(aLStack328,false);
            lib::L2CValue::L2CValue(aLStack344,0.0);
            lib::L2CValue::L2CValue(aLStack360,false);
            lib::L2CValue::L2CValue(aLStack376,false);
            HVar13 = lib::L2CValue::as_hash(aLStack280);
            fVar15 = (float)lib::L2CValue::as_number(aLStack296);
            fVar16 = (float)lib::L2CValue::as_number(aLStack312);
            bVar1 = lib::L2CValue::as_bool(aLStack328);
            fVar17 = (float)lib::L2CValue::as_number(aLStack344);
            bVar3 = lib::L2CValue::as_bool(aLStack360);
            bVar4 = lib::L2CValue::as_bool(aLStack376);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack264);
            app::lua_bind::MotionModule__change_motion_impl
                      (pBVar12,HVar13,fVar15,fVar16,(bool)(bVar1 & 1),fVar17,(bool)(bVar3 & 1),
                       (bool)(bVar4 & 1));
            lib::L2CValue::~L2CValue(aLStack376);
            lib::L2CValue::~L2CValue(aLStack360);
            lib::L2CValue::~L2CValue(aLStack344);
            lib::L2CValue::~L2CValue(aLStack328);
            lib::L2CValue::~L2CValue(aLStack312);
            lib::L2CValue::~L2CValue(aLStack296);
            lib::L2CValue::~L2CValue(aLStack280);
            lib::L2CValue::~L2CValue(aLStack264);
          }
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::~L2CValue(aLStack232);
        }
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::~L2CValue(aLStack200);
      }
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack168);
    }
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack408);
    lib::L2CValue::~L2CValue(aLStack392);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID);
    iVar5 = lib::L2CValue::as_integer(aLStack184);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar5);
    lib::L2CValue::L2CValue(aLStack152,iVar5);
    uVar7 = lib::L2CValue::as_integer(aLStack152);
    pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar7);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack168,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack168,pvVar10);
    }
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack424,param_7);
    lib::L2CValue::L2CValue(aLStack440,param_8);
    lib::L2CValue::L2CValue(aLStack456,-1.0);
    lib::L2CValue::L2CValue(aLStack472,1.0);
    FUN_71000204c0(param_2,aLStack424,aLStack440,aLStack456,aLStack472);
    lib::L2CValue::~L2CValue(aLStack472);
    lib::L2CValue::~L2CValue(aLStack456);
    lib::L2CValue::~L2CValue(aLStack440);
    lib::L2CValue::~L2CValue(aLStack424);
    pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
    uVar7 = app::lua_bind::MotionModule__end_frame_impl(pBVar12);
    lib::L2CValue::L2CValue(aLStack152,uVar7);
    lib::L2CValue::operator/(aLStack152,param_12);
    FUN_7100020800(param_2,aLStack488);
    lib::L2CValue::~L2CValue(aLStack488);
    lib::L2CValue::~L2CValue(aLStack152);
    pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
    uVar7 = app::lua_bind::MotionModule__end_frame_impl(pBVar12);
    lib::L2CValue::L2CValue(aLStack216,uVar7);
    lib::L2CValue::operator/(aLStack216,param_12);
    lib::L2CValue::L2CValue(aLStack152,0.0);
    lib::L2CValue::operator+(aLStack200,aLStack152);
    lib::L2CValue::~L2CValue(aLStack152);
    fVar15 = (float)lib::L2CValue::as_number(aLStack184);
    iVar5 = lib::L2CValue::as_integer(param_4);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar5);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack152,true);
    lib::L2CValue::operator=(param_1,aLStack152);
    lVar9 = -0x88;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
LAB_710001fe68:
  lib::L2CValue::~L2CValue(aLStack168);
  return;
}

