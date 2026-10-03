
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100055660(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11,L2CValue *param_12,
                   L2CValue *param_13,L2CValue *param_14,L2CValue *param_15,L2CValue *param_16,
                   L2CValue *param_17,L2CValue *param_18,L2CValue *param_19,L2CValue *param_20,
                   L2CValue *param_21)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Hash40 HVar6;
  long lVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
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
  
  iVar3 = lib::L2CValue::as_integer(param_10);
  ppBVar8 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar8,iVar3,0);
  lVar4 = lib::L2CValue::as_integer(param_7);
  app::lua_bind::VisibilityModule__set_default_int64_impl(*ppBVar8,lVar4);
  lib::L2CValue::L2CValue(aLStack152,false);
  lib::L2CValue::L2CValue(aLStack136,0x7e096c9f5);
  uVar5 = lib::L2CValue::operator==(param_8,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184,param_8);
    lib::L2CValue::L2CValue(aLStack200,0xb4a296b01);
    FUN_710002a0c0(aLStack168,param_1,aLStack184,aLStack200);
    lib::L2CValue::L2CValue(aLStack136,0);
    bVar1 = lib::L2CValue::operator==(aLStack168,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack152,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack184);
    lVar4 = lib::L2CValue::as_integer(param_8);
    app::lua_bind::VisibilityModule__set_default_int64_impl(*ppBVar8,lVar4);
  }
  lib::L2CValue::L2CValue(aLStack136,false);
  uVar5 = lib::L2CValue::operator==(aLStack152,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack136,true);
    uVar5 = lib::L2CValue::operator==(param_20,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar5 & 1) == 0) {
      lVar4 = lib::L2CValue::as_integer(param_8);
      app::lua_bind::VisibilityModule__set_default_int64_impl(*ppBVar8,lVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_PUNCH_L);
      bVar1 = lib::L2CValue::as_bool(param_21);
      iVar3 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__set_flag_impl(*ppBVar8,(bool)(bVar1 & 1),iVar3);
      lib::L2CValue::~L2CValue(aLStack136);
      iVar3 = lib::L2CValue::as_integer(param_11);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar8,iVar3,false,-1);
      lib::L2CValue::L2CValue(aLStack136,0xf5a127a27);
      iVar3 = lib::L2CValue::as_integer(param_11);
      HVar6 = lib::L2CValue::as_hash(aLStack136);
      app::lua_bind::ArticleModule__change_motion_impl(*ppBVar8,iVar3,HVar6,false,-1.0);
      lib::L2CValue::~L2CValue(aLStack136);
      lVar4 = lib::L2CValue::as_integer(param_8);
      lVar7 = lib::L2CValue::as_integer(param_9);
      app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar4,lVar7);
    }
  }
  lib::L2CValue::L2CValue(aLStack136,true);
  uVar5 = lib::L2CValue::operator==(param_19,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar5 & 1) != 0) goto LAB_71000564a0;
  iVar3 = lib::L2CValue::as_integer(param_15);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack168,HVar6);
  lib::L2CValue::L2CValue(aLStack136,false);
  uVar5 = lib::L2CValue::operator==(param_13,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = lib::L2CValue::operator==(aLStack168,param_16), (uVar5 & 1) != 0)) {
    iVar3 = lib::L2CValue::as_integer(param_15);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack216,HVar6);
    lib::L2CValue::L2CValue(aLStack232,0x7fb997a80);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    uVar5 = lib::L2CValue::operator==(param_15,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
      uVar5 = lib::L2CValue::operator==(param_15,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack136,0x157c0df42d);
        uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack136,0x14619323e7);
          uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack136,0x150b0ac4bb);
            uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
            lib::L2CValue::~L2CValue(aLStack136);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack136,0x1416941371);
              uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
              lib::L2CValue::~L2CValue(aLStack136);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack136,0x16e5cdb2d8);
                uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                lib::L2CValue::~L2CValue(aLStack136);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack136,0x159e6107a1);
                  uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                  lib::L2CValue::~L2CValue(aLStack136);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack136,0x1692ca824e);
                    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                    lib::L2CValue::~L2CValue(aLStack136);
                    if ((uVar5 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack136,0x15e9663737);
                      uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                      lib::L2CValue::~L2CValue(aLStack136);
                      if ((uVar5 & 1) == 0) goto LAB_71000562b8;
                      lib::L2CValue::L2CValue(aLStack136,0x140af87213);
                      lib::L2CValue::operator=(aLStack232,aLStack136);
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack136,0x151766a5d9);
                      lib::L2CValue::operator=(aLStack232,aLStack136);
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack136,0x140af87213);
                    lib::L2CValue::operator=(aLStack232,aLStack136);
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack136,0x151766a5d9);
                  lib::L2CValue::operator=(aLStack232,aLStack136);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack136,0x13f7b644ca);
                lib::L2CValue::operator=(aLStack232,aLStack136);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack136,0x14de71eada);
              lib::L2CValue::operator=(aLStack232,aLStack136);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack136,0x13f7b644ca);
            lib::L2CValue::operator=(aLStack232,aLStack136);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack136,0x14de71eada);
          lib::L2CValue::operator=(aLStack232,aLStack136);
        }
        goto LAB_71000562b0;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,0x15a84ccbf2);
      uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,0x14b5d21c38);
        uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack136,0x15df4bfb64);
          uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack136,0x14c2d52cae);
            uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
            lib::L2CValue::~L2CValue(aLStack136);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack136,0x16f3753ca2);
              uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
              lib::L2CValue::~L2CValue(aLStack136);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack136,0x1588d989db);
                uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                lib::L2CValue::~L2CValue(aLStack136);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack136,0x1684720c34);
                  uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                  lib::L2CValue::~L2CValue(aLStack136);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack136,0x15ffdeb94d);
                    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
                    lib::L2CValue::~L2CValue(aLStack136);
                    if ((uVar5 & 1) == 0) goto LAB_71000562b8;
                    lib::L2CValue::L2CValue(aLStack136,0x14deb94dcc);
                    lib::L2CValue::operator=(aLStack232,aLStack136);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack136,0x15c3279a06);
                    lib::L2CValue::operator=(aLStack232,aLStack136);
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack136,0x14deb94dcc);
                  lib::L2CValue::operator=(aLStack232,aLStack136);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack136,0x15c3279a06);
                lib::L2CValue::operator=(aLStack232,aLStack136);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack136,0x130db979a9);
              lib::L2CValue::operator=(aLStack232,aLStack136);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack136,0x14247ed7b9);
            lib::L2CValue::operator=(aLStack232,aLStack136);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack136,0x130db979a9);
          lib::L2CValue::operator=(aLStack232,aLStack136);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack136,0x14247ed7b9);
        lib::L2CValue::operator=(aLStack232,aLStack136);
      }
LAB_71000562b0:
      lib::L2CValue::~L2CValue(aLStack136);
    }
LAB_71000562b8:
    lib::L2CValue::L2CValue(aLStack136,0x7fb997a80);
    uVar5 = lib::L2CValue::operator==(aLStack232,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar5 & 1) == 0) {
      iVar3 = lib::L2CValue::as_integer(param_15);
      fVar9 = (float)app::lua_bind::MotionModule__frame_partial_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack248,fVar9);
      iVar3 = lib::L2CValue::as_integer(param_15);
      fVar9 = (float)app::lua_bind::MotionModule__rate_partial_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack264,fVar9);
      iVar3 = lib::L2CValue::as_integer(param_15);
      app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar8,iVar3,false);
      lib::L2CValue::L2CValue(aLStack136,false);
      lib::L2CValue::L2CValue(aLStack280,true);
      iVar3 = lib::L2CValue::as_integer(param_15);
      HVar6 = lib::L2CValue::as_hash(aLStack232);
      fVar9 = (float)lib::L2CValue::as_number(aLStack248);
      fVar10 = (float)lib::L2CValue::as_number(aLStack264);
      bVar1 = lib::L2CValue::as_bool(aLStack136);
      bVar2 = lib::L2CValue::as_bool(aLStack280);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar8,iVar3,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1),0.0,true,true
                 ,false);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
      uVar5 = lib::L2CValue::operator==(param_15,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
        lVar4 = lib::L2CValue::as_integer(aLStack232);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar8,lVar4,iVar3);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
        lVar4 = lib::L2CValue::as_integer(aLStack232);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar8,lVar4,iVar3);
      }
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack264);
      lib::L2CValue::~L2CValue(aLStack248);
    }
    lib::L2CValue::~L2CValue(aLStack232);
    lib::L2CValue::~L2CValue(aLStack216);
  }
  else {
    iVar3 = lib::L2CValue::as_integer(param_2);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack216,HVar6);
    lib::L2CValue::L2CValue(aLStack136,0x7fb997a80);
    uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack216);
LAB_7100055bf0:
      iVar3 = lib::L2CValue::as_integer(param_18);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack136,false);
      uVar5 = lib::L2CValue::operator==(aLStack216,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack216);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,true);
        uVar5 = lib::L2CValue::operator==(param_13,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator=(param_3,param_4);
          lib::L2CValue::operator=(param_6,param_5);
        }
      }
      else {
        iVar3 = lib::L2CValue::as_integer(param_15);
        app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar8,iVar3,false);
      }
      lib::L2CValue::L2CValue(aLStack136,true);
      uVar5 = lib::L2CValue::operator==(param_12,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::L2CValue(aLStack216,1.0);
        lib::L2CValue::L2CValue(aLStack232,false);
        HVar6 = lib::L2CValue::as_hash(param_6);
        fVar9 = (float)lib::L2CValue::as_number(aLStack136);
        fVar10 = (float)lib::L2CValue::as_number(aLStack216);
        bVar1 = lib::L2CValue::as_bool(aLStack232);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar8,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack232);
        lib::L2CValue::~L2CValue(aLStack216);
        lib::L2CValue::~L2CValue(aLStack136);
      }
      iVar3 = lib::L2CValue::as_integer(param_2);
      HVar6 = lib::L2CValue::as_hash(param_3);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar8,iVar3,HVar6,0.0,1.0,false,false,0.0,true,true,false);
    }
    else {
      uVar5 = lib::L2CValue::operator==(aLStack168,param_17);
      lib::L2CValue::~L2CValue(aLStack216);
      if ((uVar5 & 1) != 0) goto LAB_7100055bf0;
      lib::L2CValue::L2CValue(aLStack136,0x7fb997a80);
      uVar5 = lib::L2CValue::operator==(aLStack168,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,true);
        uVar5 = lib::L2CValue::operator==(param_12,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack136,0.0);
          lib::L2CValue::L2CValue(aLStack216,1.0);
          lib::L2CValue::L2CValue(aLStack232,false);
          HVar6 = lib::L2CValue::as_hash(param_5);
          fVar9 = (float)lib::L2CValue::as_number(aLStack136);
          fVar10 = (float)lib::L2CValue::as_number(aLStack216);
          bVar1 = lib::L2CValue::as_bool(aLStack232);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar8,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack216);
          lib::L2CValue::~L2CValue(aLStack136);
        }
        iVar3 = lib::L2CValue::as_integer(param_15);
        app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar8,iVar3,false);
        iVar3 = lib::L2CValue::as_integer(param_2);
        HVar6 = lib::L2CValue::as_hash(param_4);
        app::lua_bind::MotionModule__add_motion_partial_impl
                  (*ppBVar8,iVar3,HVar6,0.0,1.0,false,false,0.0,true,true,false);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack168);
LAB_71000564a0:
  lib::L2CValue::L2CValue(aLStack136,0.0);
  fVar9 = (float)lib::L2CValue::as_number(aLStack136);
  iVar3 = lib::L2CValue::as_integer(param_14);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}

