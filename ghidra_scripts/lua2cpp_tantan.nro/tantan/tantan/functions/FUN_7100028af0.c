
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028af0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3)

{
  BattleObject **this;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  Fighter *pFVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  iVar2 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    this = &param_1[2].battleObject;
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP);
      uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_AERIAL);
        uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
          uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL_AERIAL);
            uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BACK);
              uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((uVar5 & 1) == 0) goto LAB_7100029b58;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_ENABLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
    lVar9 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    ppBVar10 = &param_1->moduleAccessor;
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack112,HVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack128,HVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::MotionModule__set_remove_change_motion_partial_impl(*ppBVar10,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::MotionModule__set_remove_change_motion_partial_impl(*ppBVar10,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::MotionModule__set_remove_partial_after_intp_impl(*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    iVar2 = lib::L2CValue::as_integer(param_3);
    bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack_remain_arm(iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar10,iVar2,0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar10,iVar2,0);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar10,iVar2,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH2);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar10,iVar2,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar10,iVar2,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack176,0x7e096c9f5);
    lib::L2CValue::L2CValue(aLStack192,0xb4a296b01);
    FUN_710002a0c0(aLStack160,param_1,aLStack176,aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_L);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xa7e4bb9f8);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::ModelModule__clear_joint_srt_impl(*ppBVar10,HVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_L);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_R);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xaaa0a8627);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::ModelModule__clear_joint_srt_impl(*ppBVar10,HVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_R);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DRAGONIZE_L);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar2);
      lib::L2CValue::L2CValue(aLStack144,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::EffectModule__kill_impl(*ppBVar10,uVar3,(bool)(bVar1 & 1),true);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        lib::L2CValue::L2CValue
                  (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar4);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::EffectModule__kill_impl(*ppBVar10,uVar3,(bool)(bVar1 & 1),true);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar4);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ItemModule__set_change_status_event_impl(*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    uVar5 = lib::L2CValue::operator==(param_3,param_2);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FS_SUCCEEDS_KEEP_TRANSITION);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::StatusModule__set_succeeds_bit_impl(*ppBVar10,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_SPEED_X_MAX_MUL);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack208,fVar11);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,1.0);
        uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack224);
          fVar11 = (float)app::sv_kinetic_energy::get_stable_speed_x(param_1->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack96,fVar11);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::operator/(aLStack96,aLStack208);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack224);
          lib::L2CAgent::push_lua_stack(param_1,aLStack240);
          lib::L2CAgent::push_lua_stack(param_1,aLStack256);
          app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::~L2CValue(aLStack208);
      }
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHARGE);
    iVar2 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar5 & 1) != 0) {
      app::lua_bind::PhysicsModule__stop_charge_impl(*ppBVar10);
    }
    lib::L2CValue::L2CValue(aLStack96,0xd0ebd033b);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xec0bbbbde);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71000294f0;
      lib::L2CValue::L2CValue(aLStack96,0xdf4b23e58);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71000294f0;
      lib::L2CValue::L2CValue(aLStack96,0xe14fa8401);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_71000294f0;
    }
    else {
LAB_71000294f0:
      lib::L2CValue::L2CValue(aLStack96,1.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::DamageModule__set_reaction_mul_2nd_impl(*ppBVar10,fVar11);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xaf2735dbb);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::EffectModule__remove_common_impl(*ppBVar10,HVar6);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue
              (aLStack272,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_L);
    lib::L2CValue::L2CValue(aLStack288,0x57bdfbd15);
    FUN_710002ac50(param_1,aLStack272,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_R);
    lib::L2CValue::L2CValue(aLStack320,0x5af9e82ca);
    FUN_710002ac50(param_1,aLStack304,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar5 = lib::L2CValue::operator==(param_3,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar5 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LADDER);
      uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar10);
        app::lua_bind::MotionModule__set_next_no_comp_impl(*ppBVar10);
        app::lua_bind::GroundModule__update_lr_impl(*ppBVar10);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::FighterControlModuleImpl__set_overwrite_pad_lr_impl(*ppBVar10,fVar11);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,4);
    lib::L2CValue::L2CValue(aLStack96,true);
    pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::FighterSpecializer_Tantan::set_interpolate_partial(pFVar8,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x6721356a4);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::ModelModule__clear_joint_srt_impl(*ppBVar10,HVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack336,true);
    FUN_7100018fa0(param_1,aLStack336);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
    lVar9 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar9,iVar2);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
    lVar9 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar9,iVar2);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REWIND_L);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REWIND_R);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ControlModule__set_overwrite_special_button_raw_impl(*ppBVar10,(bool)(bVar1 & 1))
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::FighterControlModuleImpl__set_ref_stick_x_org_impl(*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::FighterControlModuleImpl__set_button_smash_special_s_smash_impl
              (*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::MotionAnimcmdModule__set_change_partial_immediate_impl
              (*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lVar9 = -0x60;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
LAB_7100029b58:
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,4);
    pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    app::FighterSpecializer_Tantan::clear_control_command_move(pFVar8);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::MotionModule__set_no_comp_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

