
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100056a80(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Fighter *pFVar9;
  Hash40 HVar10;
  long lVar11;
  void ***pppvVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  long lVar18;
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
  void **appvStack224 [2];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  void **local_b0;
  lua_State *plStack168;
  void **local_a0;
  lua_State *plStack152;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  ppBVar13 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x192bdc7824);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  uVar6 = lib::L2CValue::operator==(param_6,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar6 & 1) != 0) {
    iVar3 = lib::L2CValue::as_integer(param_10);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_b0,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1351539e6d);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)appvStack224,fVar14);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack256,0x14d34d14d0);
      lib::L2CValue::L2CValue(aLStack272,0);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar3);
      pppvVar12 = appvStack224;
      lib::L2CValue::operator/((L2CValue *)&local_b0,(L2CValue *)pppvVar12);
      lib::L2CAgent::math_ceil((L2CAgent *)&local_a0,(L2CValue *)pppvVar12);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::operator+(aLStack240,aLStack208);
      lib::L2CValue::operator-((L2CValue *)&local_a0,aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
      iVar3 = app::FighterSpecializer_Tantan::reinforce_punch_frame(pFVar9);
      lib::L2CValue::L2CValue(aLStack272,iVar3);
      uVar6 = lib::L2CValue::operator<=(aLStack272,aLStack256);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack304,0x12600df9d4);
        HVar10 = lib::L2CValue::as_hash(aLStack304);
        plStack168 = FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_SPEED_X;
        local_b0 = FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_Z;
        local_a0 = local_b0;
        plStack152 = plStack168;
        uVar4 = app::lua_bind::EffectModule__req_impl
                          (*ppBVar13,HVar10,(Vector3f *)&local_a0,(Vector3f *)&local_b0,1.0,0,-1,
                           false,0);
        lib::L2CValue::L2CValue(aLStack288,uVar4);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,1.0);
        lib::L2CValue::L2CValue(aLStack304,1.0);
        lib::L2CValue::L2CValue(aLStack320,1.0);
        uVar4 = lib::L2CValue::as_integer(aLStack288);
        uVar6 = lib::L2CValue::as_number((L2CValue *)&local_b0);
        lVar18 = lib::L2CValue::as_number(aLStack304);
        uVar15 = lib::L2CValue::as_number(aLStack320);
        local_a0 = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
        plStack152 = (lua_State *)(ulong)uVar15;
        app::lua_bind::EffectModule__set_scale_impl(*ppBVar13,uVar4,(Vector3f *)&local_a0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        iVar5 = lib::L2CValue::as_integer(param_10);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar5);
        lib::L2CValue::~L2CValue(aLStack288);
      }
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)appvStack224);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  uVar6 = lib::L2CValue::operator<=(aLStack192,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar6 & 1) == 0) {
    iVar3 = lib::L2CValue::as_integer(param_7);
    bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_b0,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      goto LAB_7100056f3c;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar8,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    if ((uVar6 & 1) != 0) goto LAB_7100056f3c;
    lib::L2CValue::L2CValue
              ((L2CValue *)appvStack224,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHARGE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)appvStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_b0,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      pppvVar12 = appvStack224;
    }
    else {
      uVar6 = lib::L2CValue::operator<=(aLStack192,aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)appvStack224);
      if ((uVar6 & 1) == 0) goto LAB_7100057564;
      app::lua_bind::PhysicsModule__stop_charge_impl(*ppBVar13);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHARGE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
      pppvVar12 = &local_a0;
    }
  }
  else {
LAB_7100056f3c:
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_RESTART_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar14);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1351539e6d);
    lib::L2CValue::L2CValue(aLStack240,0);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)appvStack224,fVar14);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue(aLStack272,0x14d34d14d0);
    lib::L2CValue::L2CValue(aLStack288,0);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    pppvVar12 = appvStack224;
    lib::L2CValue::operator/(aLStack256,(L2CValue *)pppvVar12);
    lib::L2CAgent::math_ceil((L2CAgent *)&local_a0,(L2CValue *)pppvVar12);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::operator+(aLStack240,aLStack208);
    lib::L2CValue::operator-((L2CValue *)&local_a0,aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::operator/(aLStack256,aLStack240);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
    iVar3 = app::FighterSpecializer_Tantan::reinforce_punch_frame(pFVar9);
    lib::L2CValue::L2CValue(aLStack288,iVar3);
    uVar6 = lib::L2CValue::operator<=(aLStack288,aLStack256);
    if ((uVar6 & 1) == 0) {
      iVar3 = lib::L2CValue::as_integer(param_6);
      app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar13,iVar3,0);
      lVar18 = lib::L2CValue::as_integer(param_4);
      lVar11 = lib::L2CValue::as_integer(param_5);
      app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar13,lVar18,lVar11);
      lib::L2CValue::L2CValue(aLStack352,param_4);
      lib::L2CValue::L2CValue(aLStack368,0xb4a296b01);
      FUN_710002a0c0(aLStack336,param_1,aLStack352,aLStack368);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
    }
    else {
      iVar3 = lib::L2CValue::as_integer(param_9);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)&local_a0,aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
      lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    lVar18 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack304,lVar18);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    lib::L2CValue::L2CValue(aLStack320,false);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,true);
    HVar10 = lib::L2CValue::as_hash(aLStack304);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    bVar1 = lib::L2CValue::as_bool(aLStack320);
    fVar17 = (float)lib::L2CValue::as_number(aLStack384);
    bVar2 = lib::L2CValue::as_bool(aLStack400);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar13,HVar10,fVar14,fVar16,(bool)(bVar1 & 1),fVar17,(bool)(bVar2 & 1),false);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator+(aLStack272,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    fVar14 = (float)lib::L2CValue::as_number(aLStack320);
    iVar3 = lib::L2CValue::as_integer(param_8);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    lib::L2CValue::L2CValue(aLStack320,false);
    lib::L2CValue::L2CValue(aLStack384,true);
    iVar3 = lib::L2CValue::as_integer(param_2);
    HVar10 = lib::L2CValue::as_hash(param_3);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    bVar1 = lib::L2CValue::as_bool(aLStack320);
    bVar2 = lib::L2CValue::as_bool(aLStack384);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (*ppBVar13,iVar3,HVar10,fVar14,fVar16,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true,
               true,false);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    iVar5 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue(aLStack320,0xc1f106e8d);
    lib::L2CValue::L2CValue(aLStack384,0x10d9ccb1aa);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    uVar7 = lib::L2CValue::as_integer(aLStack384);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
    lib::L2CValue::L2CValue
              (aLStack400,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    iVar5 = lib::L2CValue::as_integer(aLStack400);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    uVar6 = lib::L2CValue::operator==(param_11,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) != 0) {
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
      app::lua_bind::MotionModule__set_frame_impl(*ppBVar13,fVar14,true);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    app::lua_bind::DamageModule__set_reaction_mul_2nd_impl(*ppBVar13,fVar14);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xaf2735dbb);
    HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
    app::lua_bind::EffectModule__remove_common_impl(*ppBVar13,HVar10);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)appvStack224);
    pppvVar12 = &local_b0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)pppvVar12);
LAB_7100057564:
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

