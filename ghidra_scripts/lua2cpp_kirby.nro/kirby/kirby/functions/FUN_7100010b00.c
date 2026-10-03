
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010b00(long param_1)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  undefined auStack400 [32];
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
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack368,fVar11);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x167ff56699);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::operator*(aLStack96,aLStack368);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar11);
  lib::L2CValue::L2CValue(aLStack256,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack272,0);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack416,fVar11);
  lib::L2CValue::L2CValue(aLStack288,0xef53a098c);
  lib::L2CValue::L2CValue(aLStack304,0);
  uVar6 = lib::L2CValue::as_integer(aLStack288);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack432,fVar11);
  lib::L2CValue::L2CValue(aLStack320,0xea1225bca);
  lib::L2CValue::L2CValue(aLStack336,0);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  uVar7 = lib::L2CValue::as_integer(aLStack336);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack448,fVar11);
  lib::L2CValue::L2CValue(aLStack480,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack496,0xef53a098c);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  uVar7 = lib::L2CValue::as_integer(aLStack496);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack464,fVar11);
  lib::L2CValue::L2CValue(aLStack512,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED);
  lib::L2CValue::L2CValue(aLStack528,(L2CValue *)(auStack400 + 0x10));
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::operator/(aLStack432,aLStack416);
  lib::L2CValue::operator=(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator/(aLStack448,aLStack416);
  lib::L2CValue::operator=((L2CValue *)(auStack192 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator*(aLStack112,aLStack160);
  lib::L2CValue::operator*((L2CValue *)auStack192,aLStack528);
  lib::L2CValue::operator=(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar6 = lib::L2CValue::operator<(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = (uVar6 & 1) == 0;
  if (bVar1) {
    lib::L2CValue::operator-((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::operator*(aLStack352,aLStack528);
  }
  else {
    lib::L2CValue::operator*((L2CValue *)(auStack192 + 0x10),aLStack528);
  }
  lib::L2CValue::operator+(aLStack128,aLStack208);
  lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  if (bVar1) {
    lib::L2CValue::~L2CValue(aLStack352);
  }
  lib::L2CValue::operator*(aLStack112,aLStack528);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  bVar3 = app::sv_math::is_zero(fVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==((L2CValue *)auStack192,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lVar2 = -0x50;
  }
  else {
    lib::L2CValue::operator/((L2CValue *)auStack400,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack96,(L2CValue *)auStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack192,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,1.0);
        lib::L2CValue::operator-(aLStack96,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::operator=((L2CValue *)auStack192,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::operator*(aLStack128,(L2CValue *)auStack192);
        lib::L2CValue::operator*(aLStack208,aLStack464);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack208);
      }
    }
    lVar2 = -0xb0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  lib::L2CValue::L2CValue(aLStack208,0xc8cc9db76);
  lib::L2CValue::L2CValue(aLStack224,0);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::operator/(aLStack96,aLStack416);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  pLVar8 = aLStack96;
  uVar6 = lib::L2CValue::operator==(aLStack144,pLVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator+((L2CValue *)auStack400,aLStack128);
      uVar6 = lib::L2CValue::operator<(aLStack96,aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100011280;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack192);
      lib::L2CValue::operator+((L2CValue *)auStack400,aLStack128);
      uVar6 = lib::L2CValue::operator<(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100011280;
      lib::L2CValue::operator-(aLStack144,(L2CValue *)auStack400);
      lib::L2CValue::operator=(aLStack128,aLStack96);
    }
    else {
      lib::L2CValue::operator+((L2CValue *)auStack400,aLStack128);
      uVar6 = lib::L2CValue::operator<(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100011280;
      lib::L2CValue::operator-((L2CValue *)auStack192);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator+((L2CValue *)auStack400,aLStack128);
      uVar6 = lib::L2CValue::operator<(aLStack96,aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100011280;
      lib::L2CValue::operator-(aLStack144,(L2CValue *)auStack400);
      lib::L2CValue::operator=(aLStack128,aLStack96);
    }
LAB_71000110dc:
    lVar2 = -0x50;
  }
  else {
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)auStack400,pLVar8);
    uVar6 = lib::L2CValue::operator<(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator-((L2CValue *)auStack400);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      goto LAB_71000110dc;
    }
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack96,(L2CValue *)auStack400);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,(L2CValue *)auStack192);
    }
    else {
      lib::L2CValue::operator-((L2CValue *)auStack192);
    }
    lib::L2CValue::operator=(aLStack128,aLStack208);
    lVar2 = -0xc0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100011280:
  lib::L2CValue::operator+((L2CValue *)auStack400,aLStack128);
  fVar11 = (float)lib::L2CValue::as_number(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack512);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack400);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack544,(L2CValue *)(param_1 + 0x228));
  lib::L2CValue::L2CValue(aLStack560,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED);
  lib::L2CValue::L2CValue(aLStack576,(L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::L2CValue
            (aLStack592,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WALK_SPEED_MAX_RATIO);
  pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack560);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,(int)pLVar8);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar3 = app::lua_bind::MotionModule__is_blend_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,aLStack544);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    lib::L2CValue::L2CValue(aLStack160,aLStack576);
    FUN_7100012030(aLStack96,aLStack128,aLStack144,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,aLStack544);
    lib::L2CValue::L2CValue(aLStack208,aLStack96);
    lib::L2CValue::L2CValue(aLStack224,aLStack112);
    lib::L2CValue::L2CValue(aLStack240,aLStack576);
    lib::L2CValue::L2CValue(aLStack256,aLStack592);
    FUN_7100011ca0(auStack192 + 0x10,param_1,auStack192,aLStack208,aLStack224,aLStack240,aLStack256)
    ;
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack272,HVar9);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar6 & 1) == 0) {
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      uVar5 = app::lua_bind::MotionModule__end_frame_from_hash_impl(*ppBVar10,HVar9);
      lib::L2CValue::L2CValue(aLStack272,uVar5);
      fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack320,fVar11);
      uVar5 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack336,uVar5);
      lib::L2CValue::operator/(aLStack320,aLStack336);
      lib::L2CValue::operator*(aLStack272,aLStack304);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack304,true);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack288);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
      bVar3 = lib::L2CValue::as_bool(aLStack304);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar3 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack304);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
      app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar10,fVar11);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    else {
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack192 + 0x10));
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,aLStack544);
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack144,HVar9);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),aLStack576);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,aLStack592);
    FUN_7100011ca0(aLStack96,param_1,aLStack128,aLStack144,aLStack160,auStack192 + 0x10,auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
    fVar11 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar10,fVar11);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::~L2CValue(aLStack368);
  return;
}

