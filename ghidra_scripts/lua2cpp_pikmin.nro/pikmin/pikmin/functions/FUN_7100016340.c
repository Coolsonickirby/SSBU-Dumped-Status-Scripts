
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016340(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  undefined auStack256 [32];
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
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100017f90;
  lib::L2CValue::L2CValue(aLStack352,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  ppBVar9 = &param_2->moduleAccessor;
  fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::operator=(aLStack336,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator=(aLStack224,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack368,0xfc71d7908);
  uVar5 = lib::L2CValue::as_integer(aLStack352);
  uVar6 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::operator=((L2CValue *)auStack288,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator=(aLStack320,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack384,0x14e71e9208);
  uVar5 = lib::L2CValue::as_integer(aLStack368);
  uVar6 = lib::L2CValue::as_integer(aLStack384);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack352,fVar10);
  lib::L2CValue::operator-(aLStack352);
  lib::L2CValue::operator=((L2CValue *)auStack256,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLOAT_PIKMIN_WEIGHT);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack352);
  fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::operator=((L2CValue *)(auStack288 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator=(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.1);
  uVar5 = lib::L2CValue::operator<(aLStack96,(L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,-0.1);
    uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack288 + 0x10),aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack368,0xbf76cf32a);
      uVar5 = lib::L2CValue::as_integer(aLStack352);
      uVar6 = lib::L2CValue::as_integer(aLStack368);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator=(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack336);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator+(aLStack336,aLStack144);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack96,aLStack352);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack352);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator+(aLStack224,aLStack144);
          lib::L2CValue::operator=(aLStack224,aLStack96);
        }
        else {
          lib::L2CValue::operator-(aLStack336);
          lib::L2CValue::operator=(aLStack224,aLStack96);
        }
      }
      else {
        lib::L2CValue::operator-(aLStack336,aLStack144);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator<(aLStack352,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack352);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator-(aLStack224,aLStack144);
          lib::L2CValue::operator=(aLStack224,aLStack96);
        }
        else {
          lib::L2CValue::operator-(aLStack336);
          lib::L2CValue::operator=(aLStack224,aLStack96);
        }
      }
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack400,0x116d2a1509);
      uVar5 = lib::L2CValue::as_integer(aLStack384);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack368,fVar10);
      lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::operator+(aLStack224,aLStack352);
      lib::L2CValue::operator=(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack384,0xfc71d7908);
      uVar5 = lib::L2CValue::as_integer(aLStack368);
      uVar6 = lib::L2CValue::as_integer(aLStack384);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack352,fVar10);
      lib::L2CValue::operator-(aLStack352);
      lib::L2CValue::operator=((L2CValue *)auStack288,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::L2CValue(aLStack400,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack416,0x116d2a1509);
      uVar5 = lib::L2CValue::as_integer(aLStack400);
      uVar6 = lib::L2CValue::as_integer(aLStack416);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack384,fVar10);
      lib::L2CValue::operator-(aLStack384);
      lib::L2CValue::L2CValue(aLStack96,0.1);
      lib::L2CValue::operator*(aLStack368,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator=(aLStack160,aLStack352);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack400,0x13337cb1ff);
      uVar5 = lib::L2CValue::as_integer(aLStack384);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack368,fVar10);
      lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::operator+(aLStack224,aLStack352);
      lib::L2CValue::operator=(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      uVar5 = lib::L2CValue::operator<(aLStack160,aLStack224);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator=(aLStack224,aLStack160);
      }
      lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack400,0x170ed70199);
      uVar5 = lib::L2CValue::as_integer(aLStack384);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack368,fVar10);
      lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::operator+((L2CValue *)auStack288,aLStack352);
      lib::L2CValue::operator=((L2CValue *)auStack288,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      uVar5 = lib::L2CValue::operator<(aLStack160,(L2CValue *)auStack288);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator=((L2CValue *)auStack288,aLStack160);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack400,0x116d2a1509);
    uVar5 = lib::L2CValue::as_integer(aLStack384);
    uVar6 = lib::L2CValue::as_integer(aLStack400);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack368,fVar10);
    lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::operator+(aLStack224,aLStack352);
    lib::L2CValue::operator=(aLStack224,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0xfc71d7908);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    uVar6 = lib::L2CValue::as_integer(aLStack368);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator=((L2CValue *)auStack288,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack400,0x116d2a1509);
    uVar5 = lib::L2CValue::as_integer(aLStack384);
    uVar6 = lib::L2CValue::as_integer(aLStack400);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack368,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.1);
    lib::L2CValue::operator*(aLStack368,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack192,aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack416,0x13337cb1ff);
    uVar5 = lib::L2CValue::as_integer(aLStack400);
    uVar6 = lib::L2CValue::as_integer(aLStack416);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack384,fVar10);
    lib::L2CValue::operator-(aLStack384);
    lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::operator+(aLStack224,aLStack352);
    lib::L2CValue::operator=(aLStack224,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    uVar5 = lib::L2CValue::operator<(aLStack224,aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack224,aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack400,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack416,0x170ed70199);
    uVar5 = lib::L2CValue::as_integer(aLStack400);
    uVar6 = lib::L2CValue::as_integer(aLStack416);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack384,fVar10);
    lib::L2CValue::operator-(aLStack384);
    lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::operator+((L2CValue *)auStack288,aLStack352);
    lib::L2CValue::operator=((L2CValue *)auStack288,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    uVar5 = lib::L2CValue::operator<((L2CValue *)auStack288,aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=((L2CValue *)auStack288,aLStack192);
    }
  }
  fVar10 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::operator=(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.1);
  uVar5 = lib::L2CValue::operator<=(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,-0.1);
    uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,1.0);
        lib::L2CValue::operator=(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0.1);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,-0.1);
    uVar5 = lib::L2CValue::operator<(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack384,0xb806bc3bc);
      uVar5 = lib::L2CValue::as_integer(aLStack368);
      uVar6 = lib::L2CValue::as_integer(aLStack384);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack352,fVar10);
      lib::L2CValue::operator-(aLStack320,aLStack352);
      lib::L2CValue::operator=(aLStack320,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack400,0x11cb5d1ebd);
      uVar5 = lib::L2CValue::as_integer(aLStack384);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack368,fVar10);
      lib::L2CValue::operator*(aLStack368,aLStack128);
      lib::L2CValue::operator+(aLStack320,aLStack352);
      lib::L2CValue::operator=(aLStack320,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::L2CValue(aLStack368,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack384,0xffa7d50b8);
      uVar5 = lib::L2CValue::as_integer(aLStack368);
      uVar6 = lib::L2CValue::as_integer(aLStack384);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack352,fVar10);
      lib::L2CValue::operator-(aLStack352);
      lib::L2CValue::operator=((L2CValue *)auStack256,aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack400,0x11cb5d1ebd);
    uVar5 = lib::L2CValue::as_integer(aLStack384);
    uVar6 = lib::L2CValue::as_integer(aLStack400);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack368,fVar10);
    lib::L2CValue::operator*(aLStack368,aLStack128);
    lib::L2CValue::operator+(aLStack320,aLStack352);
    lib::L2CValue::operator=(aLStack320,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0xffa7d50b8);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    uVar6 = lib::L2CValue::as_integer(aLStack368);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator=((L2CValue *)auStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack400,0x11cb5d1ebd);
    uVar5 = lib::L2CValue::as_integer(aLStack384);
    uVar6 = lib::L2CValue::as_integer(aLStack400);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack368,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.1);
    lib::L2CValue::operator*(aLStack368,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack112,aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack416,0x132407a5bc);
    uVar5 = lib::L2CValue::as_integer(aLStack400);
    uVar6 = lib::L2CValue::as_integer(aLStack416);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack384,fVar10);
    lib::L2CValue::operator-(aLStack384);
    lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::operator+(aLStack320,aLStack352);
    lib::L2CValue::operator=(aLStack320,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    uVar5 = lib::L2CValue::operator<(aLStack320,aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack320,aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack400,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack416,0x1c53b2d25b);
    uVar5 = lib::L2CValue::as_integer(aLStack400);
    uVar6 = lib::L2CValue::as_integer(aLStack416);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack384,fVar10);
    lib::L2CValue::operator-(aLStack384);
    lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::operator+((L2CValue *)auStack256,aLStack352);
    lib::L2CValue::operator=((L2CValue *)auStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    uVar5 = lib::L2CValue::operator<((L2CValue *)auStack256,aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=((L2CValue *)auStack256,aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_FLAG_IS_INPUT_KEY);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::operator=(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_WING_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack304,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack304);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::SoundModule__stop_se_handle_impl(*ppBVar9,iVar3,0);
      }
      lib::L2CValue::L2CValue(aLStack352,0x159603c70e);
      HVar7 = lib::L2CValue::as_hash(aLStack352);
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar7,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack304,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_WING_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_WING_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack304,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack304);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::SoundModule__stop_se_handle_impl(*ppBVar9,iVar3,0);
      }
      lib::L2CValue::L2CValue(aLStack352,0x150f0a96b4);
      HVar7 = lib::L2CValue::as_hash(aLStack352);
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar7,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack304,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_WING_SE_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack368,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack352,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack352);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack368,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack352,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0x3c);
      uVar5 = lib::L2CValue::operator<(aLStack96,aLStack352);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0);
        lib::L2CValue::L2CValue
                  (aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack352);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        goto LAB_7100017c44;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack368,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack352,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator==(aLStack352,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x15e6693381);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar7,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack432,iVar3);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack368,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack352,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0x3c);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack352);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue
                (aLStack352,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_INT_INPUT_KEY_FRAME_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack352);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
LAB_7100017c44:
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_FLAG_IS_INPUT_KEY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_FLAG_IS_INPUT_KEY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack384,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack400,0x132534c5b6);
  uVar5 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar10);
  lib::L2CValue::operator*(aLStack368,(L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::operator-(aLStack320,aLStack352);
  lib::L2CValue::operator=(aLStack320,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack224);
  lib::L2CAgent::push_lua_stack(param_2,aLStack352);
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack288);
  lib::L2CAgent::push_lua_stack(param_2,aLStack352);
  app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar8 = (L2CValue *)(ulong)_FIGHTER_KINETIC_ENERGY_ID_STOP;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar8);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack352);
  lib::L2CAgent::push_lua_stack(param_2,aLStack368);
  app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack320);
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack256);
  app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar8 = (L2CValue *)(ulong)FIGHTER_KINETIC_ENERGY_ID_GRAVITY;
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar8);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack352);
  app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_INT_DISABLE_LANDING_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100017f90:
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

