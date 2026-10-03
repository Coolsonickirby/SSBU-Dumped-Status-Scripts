
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000258d0(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  Fighter *pFVar9;
  Hash40 HVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar13 = (float)app::lua_bind::PostureModule__pos_x_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,fVar13);
  fVar13 = (float)app::lua_bind::PostureModule__pos_y_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar13);
  pLVar12 = (L2CValue *)(param_1 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar12,2);
  uVar4 = lib::L2CValue::as_integer(pLVar6);
  iVar5 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar5);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar12,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
LAB_7100025ca4:
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar7 = lib::L2CValue::operator<=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_7100025f34;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
    lib::L2CValue::L2CValue(aLStack144,0x82aef2fed);
    lib::L2CValue::L2CValue(aLStack160,0x11d78c9960);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    HVar10 = lib::L2CValue::as_hash(aLStack144);
    HVar11 = lib::L2CValue::as_hash(aLStack160);
    app::lua_bind::ArticleModule__set_visibility_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5,HVar10,HVar11,0);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lVar1 = -0x40;
  }
  else {
    FUN_7100023670(aLStack144,param_1);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar7 & 1) == 0) goto LAB_7100025ca4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_X);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
    lib::L2CValue::L2CValue(aLStack144,fVar13);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_Y);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
    lib::L2CValue::L2CValue(aLStack160,fVar13);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = aLStack144;
    lib::L2CValue::operator-(aLStack96,pLVar6);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar6);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = aLStack160;
    lib::L2CValue::operator-(aLStack112,pLVar6);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar6);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar13 = (float)lib::L2CValue::as_number(aLStack176);
    fVar14 = (float)lib::L2CValue::as_number(aLStack192);
    fVar13 = (float)app::sv_math::vec2_length(fVar13,fVar14);
    lib::L2CValue::L2CValue(aLStack208,fVar13);
    lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack240,0x193b4d9003);
    uVar7 = lib::L2CValue::as_integer(aLStack80);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack224,fVar13);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar12,4);
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
    bVar2 = app::FighterSpecializer_Inkling::is_paintable_rollerink(pFVar9);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar2 & 1));
    uVar7 = lib::L2CValue::operator<=(aLStack224,aLStack208);
    if ((uVar7 & 1) == 0) {
LAB_7100025d54:
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar7 = lib::L2CValue::operator<=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
        lib::L2CValue::L2CValue(aLStack256,0x82aef2fed);
        lib::L2CValue::L2CValue(aLStack272,0x11d78c9960);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        HVar10 = lib::L2CValue::as_hash(aLStack256);
        HVar11 = lib::L2CValue::as_hash(aLStack272);
        app::lua_bind::ArticleModule__set_visibility_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5,HVar10,HVar11,0);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        pLVar12 = aLStack80;
        goto LAB_7100025e00;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar7 = lib::L2CValue::operator<(aLStack80,aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100025d54;
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator==(aLStack240,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100025d54;
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar12,4);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
      app::FighterSpecializer_Inkling::generate_rollerink(pFVar9);
      lib::L2CValue::operator=(aLStack144,aLStack96);
      lib::L2CValue::operator=(aLStack160,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack272,0x1123fc8470);
      uVar7 = lib::L2CValue::as_integer(aLStack80);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack256,fVar13);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack288,aLStack256);
      FUN_71000052b0(param_1,aLStack288);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
      iVar5 = lib::L2CValue::as_integer(aLStack320);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack304);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack272);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack352,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
        iVar5 = lib::L2CValue::as_integer(aLStack352);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
        lib::L2CValue::L2CValue(aLStack336,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack336);
        if ((bVar3 & 1U) == 0) {
          uVar7 = 0;
        }
        else {
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](pLVar12,2);
          uVar4 = lib::L2CValue::as_integer(pLVar12);
          iVar5 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar4);
          lib::L2CValue::L2CValue(aLStack384,iVar5);
          iVar5 = lib::L2CValue::as_integer(aLStack384);
          fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar5);
          lib::L2CValue::L2CValue(aLStack368,fVar13);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar7 = lib::L2CValue::operator<=(aLStack368,aLStack80);
          uVar7 = uVar7 & 0xffffffff;
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack384);
        }
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        if ((uVar7 & 1) != 0) goto LAB_7100026048;
LAB_710002623c:
        pLVar12 = aLStack256;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
LAB_7100026048:
        iVar5 = app::lua_bind::StatusModule__status_kind_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack272,iVar5);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
        uVar7 = lib::L2CValue::operator==(aLStack272,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((uVar7 & 1) == 0) {
          iVar5 = app::lua_bind::StatusModule__status_kind_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
          lib::L2CValue::L2CValue(aLStack272,iVar5);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_DASH);
          uVar7 = lib::L2CValue::operator==(aLStack272,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack272);
          if ((uVar7 & 1) == 0) {
            iVar5 = app::lua_bind::StatusModule__status_kind_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
            lib::L2CValue::L2CValue(aLStack272,iVar5);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
            uVar7 = lib::L2CValue::operator==(aLStack272,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack272);
            if ((uVar7 & 1) == 0) goto LAB_710002623c;
            lib::L2CValue::L2CValue(aLStack496,0xa67140f8a);
            lib::L2CValue::L2CValue(aLStack512,0xa67140f8a);
            lib::L2CValue::L2CValue(aLStack528,false);
            FUN_710001cfc0(param_1,aLStack496,aLStack512);
            lib::L2CValue::~L2CValue(aLStack528);
            lib::L2CValue::~L2CValue(aLStack512);
            pLVar12 = aLStack496;
          }
          else {
            lib::L2CValue::L2CValue(aLStack448,0xb76f8794c);
            lib::L2CValue::L2CValue(aLStack464,0xb76f8794c);
            lib::L2CValue::L2CValue(aLStack480,false);
            FUN_710001cfc0(param_1,aLStack448,aLStack464);
            lib::L2CValue::~L2CValue(aLStack480);
            lib::L2CValue::~L2CValue(aLStack464);
            pLVar12 = aLStack448;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack400,0xbbc1a51c5);
          lib::L2CValue::L2CValue(aLStack416,0xbbc1a51c5);
          lib::L2CValue::L2CValue(aLStack432,false);
          FUN_710001cfc0(param_1,aLStack400,aLStack416);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack416);
          pLVar12 = aLStack400;
        }
        lib::L2CValue::~L2CValue(pLVar12);
        pLVar12 = aLStack256;
      }
LAB_7100025e00:
      lib::L2CValue::~L2CValue(pLVar12);
    }
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator==(aLStack240,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_X);
      fVar13 = (float)lib::L2CValue::as_number(aLStack256);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar13,iVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_Y);
      fVar13 = (float)lib::L2CValue::as_number(aLStack256);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar13,iVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack256);
    }
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lVar1 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100025f34:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

