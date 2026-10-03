
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020d50(L2CValue *param_1,long param_2,void ***param_3)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  Fighter *pFVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float *pfVar9;
  undefined8 *puVar10;
  void ***pppvVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 auStack624 [2];
  L2CValue aLStack608 [16];
  undefined8 auStack592 [2];
  undefined auStack576 [16];
  undefined auStack560 [16];
  undefined auStack544 [32];
  undefined auStack512 [16];
  undefined local_1f0 [32];
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
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined8 auStack208 [2];
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined8 uStack168;
  void **local_a0;
  lua_State *plStack152;
  Hash40MapEntry **local_90;
  lua_State *plStack136;
  
  lib::L2CValue::L2CValue(param_1,false);
  pLVar8 = (L2CValue *)(param_2 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x16);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x17);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar8,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    if ((uVar4 & 1) != 0) {
      iVar2 = app::lua_bind::StatusModule__status_kind_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar2);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
      uVar4 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
        lib::L2CValue::operator=(param_1,(L2CValue *)(auStack512 + 0x10));
        puVar10 = (undefined8 *)(auStack512 + 0x10);
        goto LAB_7100022320;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack624,false);
    FUN_7100009e90(param_2,auStack624);
    puVar10 = auStack624;
    goto LAB_7100022320;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack208,true);
  ppBVar12 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar4 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) == 0) {
    iVar2 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar2);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK_TURN);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    if ((uVar4 & 1) != 0) {
LAB_7100020e98:
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      goto LAB_7100020ea0;
    }
    iVar2 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar2);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_DASH);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_b0,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      goto LAB_7100020e98;
    }
    iVar2 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,iVar2);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN_TURN);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_c0,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) goto LAB_7100020ea8;
  }
  else {
LAB_7100020ea0:
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
LAB_7100020ea8:
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),false);
    lib::L2CValue::operator=((L2CValue *)auStack208,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack512 + 0x10),
             _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE_SPEED);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue(aLStack240,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),3.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  fVar13 = 0.0;
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,false);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
  uVar4 = lib::L2CValue::operator==((L2CValue *)auStack208,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack384);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x42eb532ce);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
    uVar15 = app::lua_bind::ArticleModule__get_joint_pos_impl(*ppBVar12,iVar2,HVar5,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(float)uVar15);
    pLVar3 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack464,fVar13);
    lib::L2CValue::operator=(aLStack352,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack368,pLVar3);
    lib::L2CValue::operator=(aLStack384,aLStack464);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    fVar13 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),3.0);
    lib::L2CValue::operator*((L2CValue *)(auStack512 + 0x10),(L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator+(aLStack368,(L2CValue *)&local_a0);
    lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack416);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar8,4);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
    uVar15 = app::FighterSpecializer_Inkling::get_roller_check_velo_y(pFVar6);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(float)uVar15);
    pLVar3 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::operator=(aLStack400,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack416,pLVar3);
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar8,4);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,true);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
    uVar4 = lib::L2CValue::as_number(aLStack352);
    uVar14 = lib::L2CValue::as_number(aLStack368);
    local_90 = (Hash40MapEntry **)(uVar4 & 0xffffffff | (ulong)uVar14 << 0x20);
    plStack136 = (lua_State *)0x0;
    uVar4 = lib::L2CValue::as_number(aLStack400);
    uVar14 = lib::L2CValue::as_number(aLStack416);
    local_a0 = (void **)(uVar4 & 0xffffffff | (ulong)uVar14 << 0x20);
    plStack152 = (lua_State *)0x0;
    uVar4 = lib::L2CValue::as_number(aLStack304);
    uVar14 = lib::L2CValue::as_number(aLStack320);
    local_b0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
    uStack168 = 0;
    uVar4 = lib::L2CValue::as_number((L2CValue *)auStack272);
    uVar14 = lib::L2CValue::as_number(aLStack288);
    local_c0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
    uStack184 = 0;
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack512);
    param_3 = &local_a0;
    bVar1 = app::FighterSpecializer_Inkling::check_roller_ground
                      (pFVar6,(Vector2f *)&local_90,(Vector2f *)param_3,(Vector2f *)&local_b0,
                       (Vector2f *)&local_c0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(bool)(bVar1 & 1));
    pLVar3 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar3,(float)local_b0);
    lib::L2CValue::L2CValue(aLStack464,local_b0._4_4_);
    lib::L2CValue::L2CValue(aLStack448,(float)local_c0);
    lib::L2CValue::L2CValue(aLStack432,local_c0._4_4_);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack304,pLVar3);
    lib::L2CValue::operator=(aLStack320,aLStack464);
    lib::L2CValue::operator=((L2CValue *)auStack272,aLStack448);
    lib::L2CValue::operator=(aLStack288,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),false);
  uVar4 = lib::L2CValue::operator==(aLStack336,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,GROUND_TOUCH_FLAG_DOWN);
    uVar14 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar15 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl(*ppBVar12,uVar14);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(float)uVar15);
    pLVar3 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar3,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)auStack272,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack288,pLVar3);
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  pLVar3 = aLStack288;
  lib::L2CAgent::math_atan((L2CAgent *)auStack272,pLVar3,(L2CValue *)param_3);
  lib::L2CAgent::math_deg((L2CAgent *)&local_90,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x103106302c);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar4,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack352,0x15cc5c37a9);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer(aLStack352);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar4,(ulong)pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack352,iVar2);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
  uVar4 = lib::L2CValue::operator==(aLStack352,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack352);
LAB_710002162c:
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),360.0);
    lib::L2CValue::operator=((L2CValue *)&local_b0,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),360.0);
    lib::L2CValue::operator=((L2CValue *)&local_c0,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x17);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar8,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue(aLStack352);
    if ((uVar4 & 1) != 0) goto LAB_710002162c;
  }
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
  uVar4 = lib::L2CValue::operator==(aLStack336,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400);
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),*pfVar9);
    pLVar8 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack464,pfVar9[2]);
    lib::L2CValue::operator=(aLStack368,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack384,pLVar8);
    lib::L2CValue::operator=(aLStack400,aLStack464);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack368);
    lVar16 = lib::L2CValue::as_number(aLStack384);
    uVar14 = lib::L2CValue::as_number(aLStack400);
    local_1f0._0_8_ = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar16 << 0x20);
    local_1f0._8_8_ = (BattleObject *)(ulong)uVar14;
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack512);
    fVar13 = (float)app::GroundUtility::get_degree_gravity((Vector3f *)(auStack512 + 0x10),fVar13);
    lib::L2CValue::L2CValue(aLStack416,fVar13);
    lib::L2CValue::operator=(aLStack352,aLStack416);
  }
  else {
    lib::L2CValue::L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400);
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),*pfVar9);
    pLVar8 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack464,pfVar9[2]);
    lib::L2CValue::operator=(aLStack368,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=(aLStack384,pLVar8);
    lib::L2CValue::operator=(aLStack400,aLStack464);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar13);
    uVar4 = lib::L2CValue::as_number(aLStack304);
    lVar16 = lib::L2CValue::as_number(aLStack320);
    uVar14 = lib::L2CValue::as_number(aLStack400);
    local_1f0._0_8_ = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar16 << 0x20);
    local_1f0._8_8_ = (BattleObject *)(ulong)uVar14;
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack512);
    fVar13 = (float)app::GroundUtility::get_degree_gravity((Vector3f *)(auStack512 + 0x10),fVar13);
    lib::L2CValue::L2CValue(aLStack416,fVar13);
    lib::L2CValue::operator=(aLStack352,aLStack416);
  }
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack512);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack512 + 0x10),
             _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue(aLStack368,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),fVar13);
  lib::L2CValue::operator*((L2CValue *)&local_a0,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::L2CValue(aLStack400,5.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
  uVar4 = lib::L2CValue::operator==((L2CValue *)auStack208,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) == 0) {
LAB_7100021be8:
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack512,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_ACCEL_X);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack512);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue(aLStack416,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0.0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)(auStack512 + 0x10),aLStack416);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),-1.0);
      lib::L2CValue::operator*(aLStack384,(L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::operator=(aLStack384,aLStack416);
      lib::L2CValue::~L2CValue(aLStack416);
    }
    pLVar8 = aLStack384;
    lib::L2CValue::operator-(aLStack368,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)(auStack512 + 0x10),pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    uVar4 = lib::L2CValue::operator<(aLStack384,aLStack224);
    if ((((uVar4 & 1) != 0) &&
        (uVar4 = lib::L2CValue::operator<((L2CValue *)&local_b0,aLStack416), (uVar4 & 1) != 0)) ||
       ((uVar4 = lib::L2CValue::operator<(aLStack224,aLStack384), (uVar4 & 1) != 0 &&
        (uVar4 = lib::L2CValue::operator<((L2CValue *)&local_c0,aLStack416), (uVar4 & 1) != 0)))) {
      pLVar8 = aLStack224;
      uVar4 = lib::L2CValue::operator<((L2CValue *)(auStack272 + 0x10),pLVar8);
      if ((uVar4 & 1) != 0) {
        lib::L2CAgent::math_abs((L2CAgent *)&local_a0,pLVar8);
        uVar4 = lib::L2CValue::operator<
                          ((L2CValue *)(auStack512 + 0x10),(L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        if ((uVar4 & 1) != 0) goto LAB_7100021fb4;
      }
      uVar4 = lib::L2CValue::operator<(aLStack384,aLStack368);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
        lib::L2CValue::operator=(param_1,(L2CValue *)(auStack512 + 0x10));
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_STOP_WALL)
        ;
        lib::L2CValue::operator=(param_1,(L2CValue *)(auStack512 + 0x10));
      }
      pLVar8 = (L2CValue *)(auStack512 + 0x10);
      goto LAB_7100021fb0;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),true);
    uVar4 = lib::L2CValue::operator==(aLStack336,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    if ((uVar4 & 1) == 0) goto LAB_7100021be8;
    lib::L2CValue::L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)auStack512);
    lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10));
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),*pfVar9);
    pLVar8 = (L2CValue *)(local_1f0 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack464,pfVar9[2]);
    lib::L2CValue::operator=(aLStack416,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator=((L2CValue *)auStack512,pLVar8);
    lib::L2CValue::operator=((L2CValue *)(auStack544 + 0x10),aLStack464);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::operator-(aLStack320,(L2CValue *)auStack512);
    pLVar8 = aLStack416;
    lib::L2CValue::operator-(aLStack304,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)auStack576,pLVar8);
    pLVar8 = (L2CValue *)auStack560;
    lib::L2CAgent::math_atan((L2CAgent *)(auStack512 + 0x10),pLVar8,pLVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack560);
    lib::L2CValue::~L2CValue((L2CValue *)auStack576);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CAgent::math_deg((L2CAgent *)auStack544,pLVar8);
    lib::L2CValue::operator+((L2CValue *)auStack560,aLStack352);
    pLVar8 = (L2CValue *)(auStack512 + 0x10);
    lib::L2CValue::operator=((L2CValue *)auStack560,pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CAgent::math_abs((L2CAgent *)auStack560,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0.1);
    uVar4 = lib::L2CValue::operator<=((L2CValue *)(auStack512 + 0x10),(L2CValue *)auStack576);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack576);
    if ((uVar4 & 1) != 0) {
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack608,fVar13);
      lib::L2CValue::operator*(aLStack224,aLStack608);
      pppvVar11 = &local_a0;
      lib::L2CValue::operator-((L2CValue *)auStack592,(L2CValue *)pppvVar11);
      lib::L2CAgent::math_abs((L2CAgent *)(auStack512 + 0x10),(L2CValue *)pppvVar11);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack592);
      lib::L2CValue::~L2CValue(aLStack608);
      uVar4 = lib::L2CValue::operator<(aLStack384,aLStack224);
      if ((((uVar4 & 1) == 0) ||
          (uVar4 = lib::L2CValue::operator<=((L2CValue *)auStack576,(L2CValue *)&local_b0),
          (uVar4 & 1) == 0)) &&
         ((uVar4 = lib::L2CValue::operator<(aLStack224,aLStack384), (uVar4 & 1) == 0 ||
          (uVar4 = lib::L2CValue::operator<=((L2CValue *)auStack576,(L2CValue *)&local_c0),
          (uVar4 & 1) == 0)))) {
        pLVar8 = aLStack224;
        uVar4 = lib::L2CValue::operator<((L2CValue *)(auStack272 + 0x10),pLVar8);
        if ((uVar4 & 1) != 0) {
          lib::L2CAgent::math_abs((L2CAgent *)&local_a0,pLVar8);
          uVar4 = lib::L2CValue::operator<
                            ((L2CValue *)(auStack512 + 0x10),(L2CValue *)(auStack272 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),-1.0);
            lib::L2CValue::operator*((L2CValue *)auStack560,(L2CValue *)(auStack512 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
            lib::L2CValue::operator=(aLStack384,(L2CValue *)auStack592);
            lib::L2CValue::~L2CValue((L2CValue *)auStack592);
            lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),1.0);
            lib::L2CValue::operator=(aLStack400,(L2CValue *)(auStack512 + 0x10));
            goto LAB_7100021e8c;
          }
        }
        uVar4 = lib::L2CValue::operator<(aLStack384,aLStack224);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack512 + 0x10),
                     _FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_STOP_WALL);
          lib::L2CValue::operator=(param_1,(L2CValue *)(auStack512 + 0x10));
          goto LAB_7100021e8c;
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack592,GROUND_TOUCH_FLAG_DOWN);
        uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
        uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar12,uVar14);
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(float)uVar15);
        pLVar8 = (L2CValue *)(local_1f0 + 0x10);
        lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar15 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack272,(L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::operator=(aLStack288,pLVar8);
        lib::L2CValue::~L2CValue(pLVar8);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack592);
        lib::L2CAgent::math_atan((L2CAgent *)auStack272,aLStack288,pLVar3);
        pLVar8 = (L2CValue *)(auStack512 + 0x10);
        lib::L2CValue::operator=((L2CValue *)&local_90,pLVar8);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CAgent::math_deg((L2CAgent *)&local_90,pLVar8);
        lib::L2CValue::operator=((L2CValue *)&local_a0,(L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
        lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar13);
        lib::L2CValue::operator*((L2CValue *)&local_a0,(L2CValue *)auStack592);
        lib::L2CValue::operator=(aLStack384,(L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        puVar10 = auStack592;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),-1.0);
        lib::L2CValue::operator*((L2CValue *)auStack560,(L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::operator=(aLStack384,(L2CValue *)auStack592);
        lib::L2CValue::~L2CValue((L2CValue *)auStack592);
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),1.0);
        lib::L2CValue::operator=(aLStack400,(L2CValue *)(auStack512 + 0x10));
LAB_7100021e8c:
        puVar10 = (undefined8 *)(auStack512 + 0x10);
      }
      lib::L2CValue::~L2CValue((L2CValue *)puVar10);
      lib::L2CValue::~L2CValue((L2CValue *)auStack576);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack560);
    lib::L2CValue::~L2CValue((L2CValue *)auStack544);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
    pLVar8 = (L2CValue *)auStack512;
LAB_7100021fb0:
    lib::L2CValue::~L2CValue(pLVar8);
  }
LAB_7100021fb4:
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),false);
  uVar4 = lib::L2CValue::operator==(param_1,(L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
  if ((uVar4 & 1) != 0) {
    uVar4 = lib::L2CValue::operator==(aLStack368,aLStack384);
    if ((uVar4 & 1) == 0) {
      pLVar8 = aLStack384;
      lib::L2CValue::operator-(aLStack224,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack512,pLVar8);
      lib::L2CValue::operator/(aLStack416,aLStack400);
      lib::L2CValue::operator=(aLStack240,(L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0.0);
      lib::L2CValue::operator+(aLStack384,(L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack512 + 0x10),
                 _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE);
      fVar13 = (float)lib::L2CValue::as_number(aLStack416);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue(aLStack416);
    }
    lib::L2CValue::operator+(aLStack384,aLStack240);
    uVar4 = lib::L2CValue::operator<((L2CValue *)(auStack512 + 0x10),aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::operator-(aLStack384,aLStack240);
      uVar4 = lib::L2CValue::operator<(aLStack224,(L2CValue *)(auStack512 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator+(aLStack224,aLStack240);
        lib::L2CValue::operator=(aLStack224,(L2CValue *)(auStack512 + 0x10));
        goto LAB_7100022140;
      }
      lib::L2CValue::operator=(aLStack224,aLStack384);
    }
    else {
      lib::L2CValue::operator-(aLStack224,aLStack240);
      lib::L2CValue::operator=(aLStack224,(L2CValue *)(auStack512 + 0x10));
LAB_7100022140:
      lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    }
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack224);
    lVar16 = lib::L2CValue::as_number(aLStack416);
    uVar14 = lib::L2CValue::as_number((L2CValue *)auStack512);
    local_1f0._0_8_ = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar16 << 0x20);
    local_1f0._8_8_ = (BattleObject *)(ulong)uVar14;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar12,(Vector3f *)(auStack512 + 0x10),0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0.0);
    lib::L2CValue::operator+(aLStack224,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack512 + 0x10),_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE);
    fVar13 = (float)lib::L2CValue::as_number(aLStack416);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0.0);
    lib::L2CValue::operator+(aLStack240,(L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack512 + 0x10),
               _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE_SPEED);
    fVar13 = (float)lib::L2CValue::as_number(aLStack416);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
    app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
    lib::L2CValue::~L2CValue(aLStack416);
  }
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack272);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  puVar10 = auStack208;
LAB_7100022320:
  lib::L2CValue::~L2CValue((L2CValue *)puVar10);
  return;
}

