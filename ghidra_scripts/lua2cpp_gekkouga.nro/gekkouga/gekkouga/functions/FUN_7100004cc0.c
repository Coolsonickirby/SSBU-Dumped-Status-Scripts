
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004cc0(L2CValue *param_1,void *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  ppBVar10 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack176,0xa81fc8ff9);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator=(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar9 = (L2CValue *)((long)param_2 + 200);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_REBIRTH);
  uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_REBIRTH_FLAG_MOVE_END);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,aLStack144);
      goto LAB_7100005474;
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_DAMAGE_AIR);
  uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_CLIFF_ROBBED);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100004f18;
  }
  else {
LAB_7100004f18:
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,aLStack144);
      goto LAB_7100005474;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(param_1,aLStack144);
    goto LAB_7100005474;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_710000503c;
  }
  else {
LAB_710000503c:
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar3 & 1U) == 0) {
      bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_LANDING_FLAG_STIFF_CANCEL);
        iVar4 = lib::L2CValue::as_integer(aLStack192);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(param_1,0);
          goto LAB_7100005474;
        }
        goto LAB_710000522c;
      }
      lVar1 = -0x90;
    }
    else {
      bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_LANDING_FLAG_STIFF_CANCEL);
        iVar4 = lib::L2CValue::as_integer(aLStack192);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) goto LAB_710000522c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack160);
      }
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lVar1 = -0x50;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_710000522c:
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_CATCHED_AIR_END_GANON);
  uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_7100005474;
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_START_HOLD);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::operator!(aLStack160);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar9 = aLStack176;
LAB_710000542c:
    lib::L2CValue::~L2CValue(pLVar9);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack208);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar3 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI);
        lib::L2CValue::operator&(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(param_1,aLStack144);
            goto LAB_7100005474;
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
        lib::L2CValue::operator&(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(param_1,aLStack144);
            goto LAB_7100005474;
          }
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x20);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
      lib::L2CValue::operator&(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_START_HOLD);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_FRONT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOLD_FRONT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack208,0x419cd3efe);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack176,fVar11);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator+(aLStack176,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_HOLD_COUNT);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_GIMMICK);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
        lib::L2CValue::L2CValue(aLStack96,true);
        pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        bVar2 = lib::L2CValue::as_bool(aLStack96);
        app::FighterSpecializer_Gekkouga::set_special_s_transition_term_forbid_group
                  (pFVar8,(bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1a);
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack176,fVar11);
        lib::L2CValue::operator-(aLStack176);
        lib::L2CValue::operator*(pLVar7,aLStack160);
        uVar5 = lib::L2CValue::operator<(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack176,fVar11);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator+(aLStack176,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_OFFSET_LR);
          fVar11 = (float)lib::L2CValue::as_number(aLStack160);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack160);
          pLVar7 = aLStack176;
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator=(aLStack128,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack192,fVar11);
          lib::L2CValue::L2CValue(aLStack96,-1.0);
          lib::L2CValue::operator*(aLStack192,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator+(aLStack176,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_OFFSET_LR);
          fVar11 = (float)lib::L2CValue::as_number(aLStack160);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          pLVar7 = aLStack192;
        }
        lib::L2CValue::~L2CValue(pLVar7);
        lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack208,0x827c2a761);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack176,fVar11);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator+(aLStack176,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_OFFSET_X);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_RUN);
        uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_DASH);
          uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) goto LAB_7100005ad0;
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_TURN_RUN);
          uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) goto LAB_7100005ad0;
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_TURN_DASH);
          uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) goto LAB_7100005ad0;
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_GUARD_ON);
          uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_GUARD);
            uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,9);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_GUARD_DAMAGE);
              uVar5 = lib::L2CValue::operator==(pLVar9,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((uVar5 & 1) == 0) goto LAB_7100005430;
            }
          }
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_GUARD_OFF);
          lib::L2CValue::L2CValue(aLStack288,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::operator=(aLStack144,aLStack96);
        }
        else {
LAB_7100005ad0:
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_RUN_BRAKE);
          lib::L2CValue::L2CValue(aLStack256,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::operator=(aLStack144,aLStack96);
        }
        pLVar9 = aLStack96;
        goto LAB_710000542c;
      }
    }
  }
LAB_7100005430:
  lib::L2CValue::L2CValue(aLStack304,aLStack128);
  lib::L2CValue::L2CValue(aLStack320,aLStack112);
  FUN_7100004280(param_2,aLStack304,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(param_1,aLStack144);
LAB_7100005474:
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

