
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004c370(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  L2CValue aLStack1024 [16];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
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
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  FUN_710004ecc0(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    ppBVar8 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar4 = lib::L2CValue::operator<(aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar4 = lib::L2CValue::operator<(aLStack112,aLStack160);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack128,iVar3);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_NONE);
          uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SLOW_KIND_HIT);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            iVar3 = app::lua_bind::SlowModule__mag_impl(*ppBVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack128,iVar3);
            lib::L2CValue::L2CValue(aLStack112,1);
            uVar4 = lib::L2CValue::operator<(aLStack112,aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
              iVar3 = lib::L2CValue::as_integer(aLStack144);
              HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar8,iVar3);
              lib::L2CValue::L2CValue(aLStack128,HVar5);
              lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::~L2CValue(aLStack144);
              if ((uVar4 & 1) == 0) goto LAB_710004cc44;
              pLVar7 = (L2CValue *)(param_2 + 200);
              pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x22);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH);
              lib::L2CValue::operator&(pLVar6,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,0);
              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack128);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
                iVar3 = lib::L2CValue::as_integer(aLStack128);
                bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
                lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack128);
                if ((bVar2 & 1U) == 0) goto LAB_710004c894;
                lib::L2CValue::L2CValue(aLStack112,false);
                uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                if ((uVar4 & 1) != 0) {
                  lib::L2CValue::L2CValue
                            (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
                  iVar3 = lib::L2CValue::as_integer(aLStack112);
                  app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::L2CValue(aLStack128,0x14619323e7);
                  lib::L2CValue::L2CValue(aLStack144,0x13f7b644ca);
                  lib::L2CValue::L2CValue(aLStack160,0x1962ef9c88);
                  lib::L2CValue::L2CValue
                            (aLStack192,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                  FUN_710004edb0(aLStack176,param_2,aLStack192);
                  lib::L2CValue::~L2CValue(aLStack192);
                  iVar3 = app::lua_bind::FighterControlModuleImpl__get_special_s_turn_impl(*ppBVar8)
                  ;
                  lib::L2CValue::L2CValue(aLStack208,iVar3);
                  lib::L2CValue::L2CValue(aLStack240,aLStack208);
                  FUN_710004efb0(aLStack224,*ppBVar8,aLStack240);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  uVar4 = lib::L2CValue::operator==(aLStack224,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack224);
                  lib::L2CValue::~L2CValue(aLStack240);
                  if ((uVar4 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack112,true);
                    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    if ((uVar4 & 1) != 0) {
                      lib::L2CValue::L2CValue(aLStack112,0x1416941371);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1915e8ac1e);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                      goto LAB_710004d9f8;
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack112,true);
                    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    if ((uVar4 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack112,0x159e6107a1);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1a436f07d7);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack112,0x15e9663737);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1a34683741);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                    }
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue(aLStack112,0x140af87213);
                    lib::L2CValue::operator=(aLStack144,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue
                              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                    iVar3 = lib::L2CValue::as_integer(aLStack112);
                    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
LAB_710004d9f8:
                    lib::L2CValue::~L2CValue(aLStack112);
                  }
                  lib::L2CValue::L2CValue(aLStack256,aLStack128);
                  lib::L2CValue::L2CValue(aLStack272,aLStack144);
                  lib::L2CValue::L2CValue(aLStack288,aLStack160);
                  lib::L2CValue::L2CValue(aLStack304,param_3);
                  lib::L2CValue::L2CValue(aLStack320,true);
                  FUN_710004f110(param_2,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320);
                  lib::L2CValue::~L2CValue(aLStack320);
                  lib::L2CValue::~L2CValue(aLStack304);
                  lib::L2CValue::~L2CValue(aLStack288);
                  lib::L2CValue::~L2CValue(aLStack272);
                  lib::L2CValue::~L2CValue(aLStack256);
                  lib::L2CValue::L2CValue(aLStack112,0x140af87213);
                  uVar4 = lib::L2CValue::operator==(aLStack144,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  if ((uVar4 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack112,false);
                    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    if ((uVar4 & 1) == 0) goto LAB_710004e36c;
                    lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
                    lib::L2CValue::L2CValue(aLStack224,0x2dd442b79c);
                    iVar3 = lib::L2CValue::as_integer(aLStack112);
                    HVar5 = lib::L2CValue::as_hash(aLStack224);
                    app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar8,iVar3,HVar5,0);
                    lib::L2CValue::~L2CValue(aLStack224);
                    pLVar7 = aLStack112;
                    goto LAB_710004e368;
                  }
                  goto LAB_710004e36c;
                }
              }
              else {
LAB_710004c894:
                pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
                lib::L2CValue::operator&(pLVar6,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack112,0);
                uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack128);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue
                            (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
                  iVar3 = lib::L2CValue::as_integer(aLStack128);
                  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
                  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack128);
                  if ((bVar2 & 1U) == 0) goto LAB_710004caac;
                  lib::L2CValue::L2CValue(aLStack112,false);
                  uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  if ((uVar4 & 1) == 0) goto LAB_710004e394;
                  lib::L2CValue::L2CValue(aLStack128,0x157c0df42d);
                  lib::L2CValue::L2CValue(aLStack144,0x14de71eada);
                  lib::L2CValue::L2CValue(aLStack160,0x1aa103f45b);
                  lib::L2CValue::L2CValue
                            (aLStack336,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                  FUN_710004edb0(aLStack176,param_2,aLStack336);
                  lib::L2CValue::~L2CValue(aLStack336);
                  iVar3 = app::lua_bind::FighterControlModuleImpl__get_special_s_turn_impl(*ppBVar8)
                  ;
                  lib::L2CValue::L2CValue(aLStack208,iVar3);
                  lib::L2CValue::L2CValue(aLStack352,aLStack208);
                  FUN_710004efb0(aLStack224,*ppBVar8,aLStack352);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  uVar4 = lib::L2CValue::operator==(aLStack224,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack224);
                  lib::L2CValue::~L2CValue(aLStack352);
                  if ((uVar4 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack112,true);
                    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    if ((uVar4 & 1) != 0) {
                      lib::L2CValue::L2CValue(aLStack112,0x150b0ac4bb);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1ad604c4cd);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                      goto LAB_710004dbcc;
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack112,true);
                    uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    if ((uVar4 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack112,0x16e5cdb2d8);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1b5c7668d1);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack112,0x1692ca824e);
                      lib::L2CValue::operator=(aLStack128,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      lib::L2CValue::L2CValue(aLStack112,0x1b2b715847);
                      lib::L2CValue::operator=(aLStack160,aLStack112);
                    }
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue(aLStack112,0x151766a5d9);
                    lib::L2CValue::operator=(aLStack144,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue
                              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                    iVar3 = lib::L2CValue::as_integer(aLStack112);
                    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
LAB_710004dbcc:
                    lib::L2CValue::~L2CValue(aLStack112);
                  }
                  lib::L2CValue::L2CValue(aLStack368,aLStack128);
                  lib::L2CValue::L2CValue(aLStack384,aLStack144);
                  lib::L2CValue::L2CValue(aLStack400,aLStack160);
                  lib::L2CValue::L2CValue(aLStack416,param_3);
                  lib::L2CValue::L2CValue(aLStack432,false);
                  FUN_710004f110(param_2,aLStack368,aLStack384,aLStack400,aLStack416,aLStack432);
                  lib::L2CValue::~L2CValue(aLStack432);
                  lib::L2CValue::~L2CValue(aLStack416);
                  lib::L2CValue::~L2CValue(aLStack400);
                  lib::L2CValue::~L2CValue(aLStack384);
                  pLVar7 = aLStack368;
LAB_710004e368:
                  lib::L2CValue::~L2CValue(pLVar7);
LAB_710004e36c:
                  pLVar7 = aLStack208;
                }
                else {
LAB_710004caac:
                  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                  lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N);
                  lib::L2CValue::operator&(pLVar7,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::L2CValue(aLStack112,0);
                  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack128);
                  if ((uVar4 & 1) != 0) {
LAB_710004cc44:
                    lib::L2CValue::L2CValue
                              (aLStack144,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
                    iVar3 = lib::L2CValue::as_integer(aLStack144);
                    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar8,iVar3);
                    lib::L2CValue::L2CValue(aLStack128,HVar5);
                    lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
                    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::~L2CValue(aLStack128);
                    lib::L2CValue::~L2CValue(aLStack144);
                    if ((uVar4 & 1) != 0) {
                      pLVar7 = (L2CValue *)(param_2 + 200);
                      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
                      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
                      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack112);
                      lib::L2CValue::~L2CValue(aLStack112);
                      if ((uVar4 & 1) == 0) {
                        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x21);
                        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_N2);
                        lib::L2CValue::operator&(pLVar6,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::L2CValue(aLStack112,0);
                        uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        if ((uVar4 & 1) == 0) {
                          lib::L2CValue::~L2CValue(aLStack128);
                        }
                        else {
                          pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                          lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
                          lib::L2CValue::operator&(pLVar6,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::L2CValue(aLStack112,0);
                          uVar4 = lib::L2CValue::operator==(aLStack144,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack144);
                          lib::L2CValue::~L2CValue(aLStack128);
                          if ((uVar4 & 1) != 0) goto LAB_710004d6c8;
                        }
                        lib::L2CValue::L2CValue
                                  (aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_AIR);
                        iVar3 = lib::L2CValue::as_integer(aLStack128);
                        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                          (*ppBVar8,iVar3);
                        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack128);
                        if ((bVar2 & 1U) != 0) {
                          lib::L2CValue::L2CValue(aLStack112,false);
                          uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          if ((uVar4 & 1) == 0) goto LAB_710004e394;
                          lib::L2CValue::L2CValue
                                    (aLStack864,
                                     _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                          FUN_710004edb0(aLStack128,param_2,aLStack864);
                          lib::L2CValue::~L2CValue(aLStack864);
                          lib::L2CValue::L2CValue(aLStack144,false);
                          iVar3 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar8);
                          lib::L2CValue::L2CValue(aLStack160,iVar3);
                          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE);
                          uVar4 = lib::L2CValue::operator==(aLStack160,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          if ((uVar4 & 1) != 0) {
                            lib::L2CValue::L2CValue(aLStack112,true);
                            bVar1 = lib::L2CValue::as_bool(aLStack112);
                            app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                                      (*ppBVar8,(bool)(bVar1 & 1));
                            lib::L2CValue::~L2CValue(aLStack112);
                            iVar3 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar8)
                            ;
                            lib::L2CValue::L2CValue(aLStack112,iVar3);
                            lib::L2CValue::operator=(aLStack160,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                          }
                          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_COMMAND_ATTACK_AIR_KIND_B);
                          uVar4 = lib::L2CValue::operator==(aLStack160,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          if ((uVar4 & 1) != 0) {
                            lib::L2CValue::L2CValue(aLStack112,true);
                            lib::L2CValue::operator=(aLStack144,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue
                                      (aLStack112,
                                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                            iVar3 = lib::L2CValue::as_integer(aLStack112);
                            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
                            lib::L2CValue::~L2CValue(aLStack112);
                          }
                          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                          lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
                          lib::L2CValue::operator&(pLVar7,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::L2CValue(aLStack112,0);
                          uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack176);
                          if ((uVar4 & 1) == 0) {
                            lib::L2CValue::L2CValue
                                      (aLStack112,
                                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
                            iVar3 = lib::L2CValue::as_integer(aLStack112);
                            app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue(aLStack176);
                            lib::L2CValue::L2CValue(aLStack208);
                            lib::L2CValue::L2CValue(aLStack112,true);
                            uVar4 = lib::L2CValue::operator==(aLStack144,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            if ((uVar4 & 1) == 0) {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x14b5d21c38);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,0x14c2d52cae);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack112,0x130db979a9);
                              lib::L2CValue::operator=(aLStack208,aLStack112);
                            }
                            else {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x1588d989db);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,0x15ffdeb94d);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack112,0x14deb94dcc);
                              lib::L2CValue::operator=(aLStack208,aLStack112);
                            }
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue(aLStack880,aLStack176);
                            lib::L2CValue::L2CValue(aLStack896,aLStack208);
                            lib::L2CValue::L2CValue(aLStack912,0x7fb997a80);
                            lib::L2CValue::L2CValue(aLStack928,false);
                            lib::L2CValue::L2CValue(aLStack944,true);
                            FUN_710004f390(param_2,aLStack880,aLStack896,aLStack912,aLStack928,
                                           aLStack944);
                            lib::L2CValue::~L2CValue(aLStack944);
                            lib::L2CValue::~L2CValue(aLStack928);
                            lib::L2CValue::~L2CValue(aLStack912);
                            lib::L2CValue::~L2CValue(aLStack896);
                            pLVar7 = aLStack880;
                          }
                          else {
                            lib::L2CValue::L2CValue(aLStack176);
                            lib::L2CValue::L2CValue(aLStack208);
                            lib::L2CValue::L2CValue(aLStack112,true);
                            uVar4 = lib::L2CValue::operator==(aLStack144,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            if ((uVar4 & 1) == 0) {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x15a84ccbf2);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,0x15df4bfb64);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack112,0x14247ed7b9);
                              lib::L2CValue::operator=(aLStack208,aLStack112);
                            }
                            else {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x16f3753ca2);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,0x1684720c34);
                                lib::L2CValue::operator=(aLStack176,aLStack112);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack112,0x15c3279a06);
                              lib::L2CValue::operator=(aLStack208,aLStack112);
                            }
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue(aLStack960,aLStack176);
                            lib::L2CValue::L2CValue(aLStack976,aLStack208);
                            lib::L2CValue::L2CValue(aLStack992,0x7fb997a80);
                            lib::L2CValue::L2CValue(aLStack1008,false);
                            lib::L2CValue::L2CValue(aLStack1024,false);
                            FUN_710004f390(param_2,aLStack960,aLStack976,aLStack992,aLStack1008,
                                           aLStack1024);
                            lib::L2CValue::~L2CValue(aLStack1024);
                            lib::L2CValue::~L2CValue(aLStack1008);
                            lib::L2CValue::~L2CValue(aLStack992);
                            lib::L2CValue::~L2CValue(aLStack976);
                            pLVar7 = aLStack960;
                          }
                          goto LAB_710004e368;
                        }
                      }
                      else {
                        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                        lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
                        lib::L2CValue::operator&(pLVar6,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::L2CValue(aLStack112,0);
                        uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack128);
                        if ((uVar4 & 1) == 0) {
                          lib::L2CValue::L2CValue
                                    (aLStack128,
                                     FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4_START);
                          iVar3 = lib::L2CValue::as_integer(aLStack128);
                          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                            (*ppBVar8,iVar3);
                          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack128);
                          if ((bVar2 & 1U) != 0) {
                            lib::L2CValue::L2CValue(aLStack112,false);
                            uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            if ((uVar4 & 1) != 0) {
                              lib::L2CValue::L2CValue
                                        (aLStack112,
                                         _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
                              iVar3 = lib::L2CValue::as_integer(aLStack112);
                              app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack128,0x14b5d21c38);
                              lib::L2CValue::L2CValue(aLStack144,0x130db979a9);
                              lib::L2CValue::L2CValue(aLStack160,0x19b6aea357);
                              lib::L2CValue::L2CValue
                                        (aLStack544,
                                         _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                              FUN_710004edb0(aLStack176,param_2,aLStack544);
                              lib::L2CValue::~L2CValue(aLStack544);
                              iVar3 = app::lua_bind::
                                      FighterControlModuleImpl__get_attack_s4_turn_impl(*ppBVar8);
                              lib::L2CValue::L2CValue(aLStack208,iVar3);
                              lib::L2CValue::L2CValue(aLStack560,aLStack208);
                              FUN_710004efb0(aLStack224,*ppBVar8,aLStack560);
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack224,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::~L2CValue(aLStack224);
                              lib::L2CValue::~L2CValue(aLStack560);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,true);
                                uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                if ((uVar4 & 1) == 0) goto LAB_710004df48;
                                lib::L2CValue::L2CValue(aLStack112,0x14c2d52cae);
                                lib::L2CValue::operator=(aLStack128,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue(aLStack112,0x19c1a993c1);
                                lib::L2CValue::operator=(aLStack160,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,true);
                                uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                if ((uVar4 & 1) == 0) {
                                  lib::L2CValue::L2CValue(aLStack112,0x1588d989db);
                                  lib::L2CValue::operator=(aLStack128,aLStack112);
                                  lib::L2CValue::~L2CValue(aLStack112);
                                  lib::L2CValue::L2CValue(aLStack112,0x1a55d789ad);
                                  lib::L2CValue::operator=(aLStack160,aLStack112);
                                }
                                else {
                                  lib::L2CValue::L2CValue(aLStack112,0x15ffdeb94d);
                                  lib::L2CValue::operator=(aLStack128,aLStack112);
                                  lib::L2CValue::~L2CValue(aLStack112);
                                  lib::L2CValue::L2CValue(aLStack112,0x1a22d0b93b);
                                  lib::L2CValue::operator=(aLStack160,aLStack112);
                                }
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue(aLStack112,0x14deb94dcc);
                                lib::L2CValue::operator=(aLStack144,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue
                                          (aLStack112,
                                           _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                                iVar3 = lib::L2CValue::as_integer(aLStack112);
                                app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
LAB_710004df48:
                              lib::L2CValue::L2CValue(aLStack576,aLStack128);
                              lib::L2CValue::L2CValue(aLStack592,aLStack144);
                              lib::L2CValue::L2CValue(aLStack608,aLStack160);
                              lib::L2CValue::L2CValue(aLStack624,param_3);
                              lib::L2CValue::L2CValue(aLStack640,true);
                              FUN_710004f390(param_2,aLStack576,aLStack592,aLStack608,aLStack624,
                                             aLStack640);
                              lib::L2CValue::~L2CValue(aLStack640);
                              lib::L2CValue::~L2CValue(aLStack624);
                              lib::L2CValue::~L2CValue(aLStack608);
                              lib::L2CValue::~L2CValue(aLStack592);
                              lib::L2CValue::~L2CValue(aLStack576);
                              lib::L2CValue::L2CValue(param_1,true);
                              lib::L2CValue::~L2CValue(aLStack208);
                              lib::L2CValue::~L2CValue(aLStack176);
                              lib::L2CValue::~L2CValue(aLStack160);
                              lib::L2CValue::~L2CValue(aLStack144);
                              lib::L2CValue::~L2CValue(aLStack128);
                              return;
                            }
                          }
                        }
                        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                        lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
                        lib::L2CValue::operator&(pLVar6,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::L2CValue(aLStack112,0);
                        uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack128);
                        if ((uVar4 & 1) == 0) {
                          lib::L2CValue::L2CValue
                                    (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S3);
                          iVar3 = lib::L2CValue::as_integer(aLStack128);
                          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                            (*ppBVar8,iVar3);
                          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack128);
                          if ((bVar2 & 1U) != 0) {
                            lib::L2CValue::L2CValue(aLStack112,false);
                            uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            if ((uVar4 & 1) == 0) goto LAB_710004e394;
                            lib::L2CValue::L2CValue(aLStack128,0x15a84ccbf2);
                            lib::L2CValue::L2CValue(aLStack144,0x14247ed7b9);
                            lib::L2CValue::L2CValue(aLStack160,0x1a7542cb84);
                            lib::L2CValue::L2CValue
                                      (aLStack656,
                                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                            FUN_710004edb0(aLStack176,param_2,aLStack656);
                            lib::L2CValue::~L2CValue(aLStack656);
                            iVar3 = app::lua_bind::FighterControlModuleImpl__get_attack_s3_turn_impl
                                              (*ppBVar8);
                            lib::L2CValue::L2CValue(aLStack208,iVar3);
                            lib::L2CValue::L2CValue(aLStack672,aLStack208);
                            FUN_710004efb0(aLStack224,*ppBVar8,aLStack672);
                            lib::L2CValue::L2CValue(aLStack112,true);
                            uVar4 = lib::L2CValue::operator==(aLStack224,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::~L2CValue(aLStack224);
                            lib::L2CValue::~L2CValue(aLStack672);
                            if ((uVar4 & 1) == 0) {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) != 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x15df4bfb64);
                                lib::L2CValue::operator=(aLStack128,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue(aLStack112,0x1a0245fb12);
                                lib::L2CValue::operator=(aLStack160,aLStack112);
                                goto LAB_710004e09c;
                              }
                            }
                            else {
                              lib::L2CValue::L2CValue(aLStack112,true);
                              uVar4 = lib::L2CValue::operator==(aLStack176,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              if ((uVar4 & 1) == 0) {
                                lib::L2CValue::L2CValue(aLStack112,0x16f3753ca2);
                                lib::L2CValue::operator=(aLStack128,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue(aLStack112,0x1b4acee6ab);
                                lib::L2CValue::operator=(aLStack160,aLStack112);
                              }
                              else {
                                lib::L2CValue::L2CValue(aLStack112,0x1684720c34);
                                lib::L2CValue::operator=(aLStack128,aLStack112);
                                lib::L2CValue::~L2CValue(aLStack112);
                                lib::L2CValue::L2CValue(aLStack112,0x1b3dc9d63d);
                                lib::L2CValue::operator=(aLStack160,aLStack112);
                              }
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue(aLStack112,0x15c3279a06);
                              lib::L2CValue::operator=(aLStack144,aLStack112);
                              lib::L2CValue::~L2CValue(aLStack112);
                              lib::L2CValue::L2CValue
                                        (aLStack112,
                                         _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                              iVar3 = lib::L2CValue::as_integer(aLStack112);
                              app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
LAB_710004e09c:
                              lib::L2CValue::~L2CValue(aLStack112);
                            }
                            lib::L2CValue::L2CValue(aLStack688,aLStack128);
                            lib::L2CValue::L2CValue(aLStack704,aLStack144);
                            lib::L2CValue::L2CValue(aLStack720,aLStack160);
                            lib::L2CValue::L2CValue(aLStack736,param_3);
                            lib::L2CValue::L2CValue(aLStack752,false);
                            FUN_710004f390(param_2,aLStack688,aLStack704,aLStack720,aLStack736,
                                           aLStack752);
                            lib::L2CValue::~L2CValue(aLStack752);
                            lib::L2CValue::~L2CValue(aLStack736);
                            lib::L2CValue::~L2CValue(aLStack720);
                            lib::L2CValue::~L2CValue(aLStack704);
                            pLVar7 = aLStack688;
                            goto LAB_710004e368;
                          }
                        }
                        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x21);
                        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_ATTACK_N2);
                        lib::L2CValue::operator&(pLVar6,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::L2CValue(aLStack112,0);
                        uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        if ((uVar4 & 1) == 0) {
                          lib::L2CValue::~L2CValue(aLStack128);
                        }
                        else {
                          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
                          lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3);
                          lib::L2CValue::operator&(pLVar7,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::L2CValue(aLStack112,0);
                          uVar4 = lib::L2CValue::operator==(aLStack144,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::~L2CValue(aLStack144);
                          lib::L2CValue::~L2CValue(aLStack128);
                          if ((uVar4 & 1) != 0) goto LAB_710004d6c8;
                        }
                        lib::L2CValue::L2CValue
                                  (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK);
                        iVar3 = lib::L2CValue::as_integer(aLStack128);
                        bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                          (*ppBVar8,iVar3);
                        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack112);
                        lib::L2CValue::~L2CValue(aLStack128);
                        if ((bVar2 & 1U) != 0) {
                          lib::L2CValue::L2CValue(aLStack112,false);
                          uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          if ((uVar4 & 1) == 0) goto LAB_710004e394;
                          lib::L2CValue::L2CValue
                                    (aLStack768,
                                     _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
                          FUN_710004edb0(aLStack128,param_2,aLStack768);
                          lib::L2CValue::~L2CValue(aLStack768);
                          lib::L2CValue::L2CValue(aLStack144);
                          lib::L2CValue::L2CValue(aLStack160);
                          lib::L2CValue::L2CValue(aLStack176,0x14247ed7b9);
                          lib::L2CValue::L2CValue(aLStack112,true);
                          uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                          lib::L2CValue::~L2CValue(aLStack112);
                          if ((uVar4 & 1) == 0) {
                            lib::L2CValue::L2CValue(aLStack112,0x15a84ccbf2);
                            lib::L2CValue::operator=(aLStack144,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue(aLStack112,0x1a7542cb84);
                            lib::L2CValue::operator=(aLStack160,aLStack112);
                          }
                          else {
                            lib::L2CValue::L2CValue(aLStack112,0x15df4bfb64);
                            lib::L2CValue::operator=(aLStack144,aLStack112);
                            lib::L2CValue::~L2CValue(aLStack112);
                            lib::L2CValue::L2CValue(aLStack112,0x1a0245fb12);
                            lib::L2CValue::operator=(aLStack160,aLStack112);
                          }
                          lib::L2CValue::~L2CValue(aLStack112);
                          lib::L2CValue::L2CValue(aLStack784,aLStack144);
                          lib::L2CValue::L2CValue(aLStack800,aLStack176);
                          lib::L2CValue::L2CValue(aLStack816,aLStack160);
                          lib::L2CValue::L2CValue(aLStack832,param_3);
                          lib::L2CValue::L2CValue(aLStack848,false);
                          FUN_710004f390(param_2,aLStack784,aLStack800,aLStack816,aLStack832,
                                         aLStack848);
                          lib::L2CValue::~L2CValue(aLStack848);
                          lib::L2CValue::~L2CValue(aLStack832);
                          lib::L2CValue::~L2CValue(aLStack816);
                          lib::L2CValue::~L2CValue(aLStack800);
                          pLVar7 = aLStack784;
                          goto LAB_710004e370;
                        }
                      }
                    }
                    goto LAB_710004d6c8;
                  }
                  lib::L2CValue::L2CValue
                            (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N);
                  iVar3 = lib::L2CValue::as_integer(aLStack128);
                  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
                  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
                  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack128);
                  if ((bVar2 & 1U) == 0) goto LAB_710004cc44;
                  lib::L2CValue::L2CValue(aLStack112,false);
                  uVar4 = lib::L2CValue::operator==(param_4,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  if ((uVar4 & 1) == 0) goto LAB_710004e394;
                  lib::L2CValue::L2CValue
                            (aLStack448,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
                  FUN_710004edb0(aLStack128,param_2,aLStack448);
                  lib::L2CValue::~L2CValue(aLStack448);
                  lib::L2CValue::L2CValue(aLStack144);
                  lib::L2CValue::L2CValue(aLStack160);
                  lib::L2CValue::L2CValue(aLStack176,0x14de71eada);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
                  lib::L2CValue::~L2CValue(aLStack112);
                  if ((uVar4 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack112,0x157c0df42d);
                    lib::L2CValue::operator=(aLStack144,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue(aLStack112,0x1aa103f45b);
                    lib::L2CValue::operator=(aLStack160,aLStack112);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack112,0x150b0ac4bb);
                    lib::L2CValue::operator=(aLStack144,aLStack112);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::L2CValue(aLStack112,0x1ad604c4cd);
                    lib::L2CValue::operator=(aLStack160,aLStack112);
                  }
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::L2CValue(aLStack464,aLStack144);
                  lib::L2CValue::L2CValue(aLStack480,aLStack176);
                  lib::L2CValue::L2CValue(aLStack496,aLStack160);
                  lib::L2CValue::L2CValue(aLStack512,param_3);
                  lib::L2CValue::L2CValue(aLStack528,false);
                  FUN_710004f110(param_2,aLStack464,aLStack480,aLStack496,aLStack512,aLStack528);
                  lib::L2CValue::~L2CValue(aLStack528);
                  lib::L2CValue::~L2CValue(aLStack512);
                  lib::L2CValue::~L2CValue(aLStack496);
                  lib::L2CValue::~L2CValue(aLStack480);
                  pLVar7 = aLStack464;
                }
LAB_710004e370:
                lib::L2CValue::~L2CValue(pLVar7);
                lib::L2CValue::~L2CValue(aLStack176);
                lib::L2CValue::~L2CValue(aLStack160);
                lib::L2CValue::~L2CValue(aLStack144);
                lib::L2CValue::~L2CValue(aLStack128);
              }
LAB_710004e394:
              bVar2 = true;
              goto LAB_710004d6d0;
            }
          }
        }
      }
      else {
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
      }
    }
  }
LAB_710004d6c8:
  bVar2 = false;
LAB_710004d6d0:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

