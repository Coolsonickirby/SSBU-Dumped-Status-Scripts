
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e710(void *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  long lVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CAgent *this;
  L2CValue *pLVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [32];
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
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_RUSH_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  ppBVar15 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)auStack416,true);
  pLVar9 = (L2CValue *)auStack416;
  uVar7 = lib::L2CValue::operator==(aLStack128,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar7 & 1) == 0) {
    return;
  }
  fVar16 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack128,fVar16);
  fVar16 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack144,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,90.0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack416,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack256,0xa05589c71);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  uVar8 = lib::L2CValue::as_integer(aLStack256);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack320,0x189cd804c5);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  uVar8 = lib::L2CValue::as_integer(aLStack320);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar16);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_FLOAT_CURR_AURAPOWER);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack336,fVar16);
  lib::L2CValue::operator*((L2CValue *)(auStack304 + 0x10),aLStack336);
  lib::L2CValue::operator+((L2CValue *)auStack416,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack256,0xa45c54855);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer(aLStack256);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,(ulong)pLVar9);
  lib::L2CValue::L2CValue(aLStack240,fVar16);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack256,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,-1.0);
  uVar7 = lib::L2CValue::operator==(aLStack256,(L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack416,1.0);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack416);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar15,fVar16);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack256,0xc99afa0ff);
    lib::L2CValue::L2CValue(aLStack272,0x1021e597f5);
    lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND);
    lVar10 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND_AIR);
    lVar10 = lib::L2CValue::as_integer(aLStack272);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)auStack304,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==((L2CValue *)auStack304,(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack304);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::operator=((L2CValue *)(auStack304 + 0x10),aLStack272);
    }
    else {
      lib::L2CValue::operator=((L2CValue *)(auStack304 + 0x10),aLStack256);
    }
    HVar11 = lib::L2CValue::as_hash((L2CValue *)(auStack304 + 0x10));
    pLVar9 = (L2CValue *)0x0;
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar15,HVar11,-1.0,1.0,0.0,false,false);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator==(aLStack256,(L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    pLVar9 = aLStack384;
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,SUB81(pLVar9,0));
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack272);
    uVar20 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl(*ppBVar15,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,(float)uVar20);
    pLVar14 = (L2CValue *)(auStack416 + 0x10);
    lib::L2CValue::L2CValue(pLVar14,(float)((ulong)uVar20 >> 0x20));
    lib::L2CValue::operator=(pLVar12,(L2CValue *)auStack416);
    lib::L2CValue::operator=(pLVar13,pLVar14);
    lib::L2CValue::~L2CValue(pLVar14);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue(aLStack272);
    pLVar14 = (L2CValue *)0x0;
    lib::L2CValue::L2CValue(aLStack272,false);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar14);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar14);
    lib::L2CValue::operator+((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack304);
    uVar7 = lib::L2CValue::operator<((L2CValue *)auStack416,aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack304);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    if ((uVar7 & 1) == 0) {
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      pLVar13 = (L2CValue *)0x1fbdb2615;
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      fVar16 = (float)lib::L2CValue::as_number(pLVar14);
      fVar17 = (float)lib::L2CValue::as_number(pLVar12);
      fVar18 = (float)lib::L2CValue::as_number(aLStack128);
      fVar19 = (float)lib::L2CValue::as_number(aLStack144);
      fVar16 = (float)app::sv_math::vec2_angle(fVar16,fVar17,fVar18,fVar19);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack304,pLVar13);
      uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack416,true);
        lib::L2CValue::operator=(aLStack272,(L2CValue *)auStack416);
        lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      }
      pLVar14 = (L2CValue *)(auStack304 + 0x10);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack416,true);
      lib::L2CValue::operator=(aLStack272,(L2CValue *)auStack416);
      pLVar14 = (L2CValue *)auStack416;
    }
    lib::L2CValue::~L2CValue(pLVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,false);
    uVar7 = lib::L2CValue::operator==(aLStack272,(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack464,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer((L2CValue *)auStack416);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar15,GVar5);
      pLVar14 = (L2CValue *)auStack416;
    }
    else {
      this = (L2CAgent *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      lib::L2CAgent::math_atan(this,pLVar14,pLVar9);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,0.5);
      lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,0.0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)auStack416,aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        lib::L2CValue::L2CValue(aLStack336,1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack352,1.0);
        lib::L2CValue::operator-(aLStack352);
      }
      lib::L2CValue::operator*(aLStack320,aLStack336);
      lib::L2CValue::operator+(aLStack160,(L2CValue *)auStack304);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      lib::L2CValue::~L2CValue(aLStack336);
      if (!bVar1) {
        lib::L2CValue::~L2CValue(aLStack352);
      }
      lib::L2CValue::~L2CValue(aLStack320);
      uVar7 = lib::L2CValue::operator<=((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack160);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        pLVar9 = (L2CValue *)auStack416;
        uVar7 = lib::L2CValue::operator<=(aLStack160,pLVar9);
        lib::L2CValue::~L2CValue((L2CValue *)auStack416);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack416,2.0);
          lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)auStack416);
          lib::L2CValue::~L2CValue((L2CValue *)auStack416);
          lib::L2CValue::operator+(aLStack160,(L2CValue *)auStack304);
          pLVar9 = (L2CValue *)(auStack304 + 0x10);
          lib::L2CValue::operator=(aLStack160,pLVar9);
          goto LAB_710001f06c;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack416,2.0);
        lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)auStack416);
        lib::L2CValue::~L2CValue((L2CValue *)auStack416);
        lib::L2CValue::operator-(aLStack160,(L2CValue *)auStack304);
        pLVar9 = (L2CValue *)(auStack304 + 0x10);
        lib::L2CValue::operator=(aLStack160,pLVar9);
LAB_710001f06c:
        lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      }
      lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,0.05);
      pLVar9 = (L2CValue *)auStack416;
      uVar7 = lib::L2CValue::operator<=((L2CValue *)(auStack304 + 0x10),pLVar9);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      if ((uVar7 & 1) == 0) {
        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar9);
        pLVar9 = aLStack320;
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,pLVar9);
        lib::L2CAgent::math_abs((L2CAgent *)auStack304,pLVar9);
        lib::L2CValue::L2CValue((L2CValue *)auStack416,0.05);
        uVar7 = lib::L2CValue::operator<=((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack416);
        lib::L2CValue::~L2CValue((L2CValue *)auStack416);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::operator=(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack416,0.0);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack416);
        lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      }
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack432,aLStack160);
      lib::L2CValue::L2CValue(aLStack448,aLStack224);
      pLVar9 = aLStack432;
      FUN_7100008500(auStack416,param_1,pLVar9,aLStack448);
      lib::L2CValue::operator=(pLVar14,(L2CValue *)auStack416);
      lib::L2CValue::operator=(pLVar12,(L2CValue *)(auStack416 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack416 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::~L2CValue(aLStack448);
      pLVar14 = aLStack432;
    }
    lib::L2CValue::~L2CValue(pLVar14);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,SITUATION_KIND_AIR);
  pLVar14 = (L2CValue *)auStack416;
  uVar7 = lib::L2CValue::operator==(aLStack256,pLVar14);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue(aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar14);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar14);
    lib::L2CValue::operator+(aLStack256,aLStack272);
    uVar7 = lib::L2CValue::operator<=(aLStack240,(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((uVar7 & 1) != 0) {
      lib::L2CAgent::math_atan((L2CAgent *)aLStack144,aLStack128,pLVar9);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack416);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack480,aLStack160);
    lib::L2CValue::L2CValue(aLStack496,aLStack224);
    FUN_7100008500(auStack416,param_1,aLStack480,aLStack496);
    lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack416);
    lib::L2CValue::operator=(pLVar14,(L2CValue *)(auStack416 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack416 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_VX)
  ;
  fVar16 = (float)lib::L2CValue::as_number(pLVar9);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_VY)
  ;
  fVar16 = (float)lib::L2CValue::as_number(pLVar9);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR);
  fVar16 = (float)lib::L2CValue::as_number(aLStack160);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,(int)pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,90.0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack416,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT);
  fVar16 = (float)lib::L2CValue::as_number(aLStack256);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0xecc10d912);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_RUSH_DIR_INTP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar6);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::operator-(aLStack160,aLStack256);
  uVar7 = lib::L2CValue::operator<
                    ((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)(auStack304 + 0x10));
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    if ((uVar7 & 1) == 0) goto LAB_710001f634;
    lib::L2CValue::L2CValue((L2CValue *)auStack416,2.0);
    lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::operator+((L2CValue *)(auStack304 + 0x10),aLStack320);
    lib::L2CValue::operator=((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack304);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack416,2.0);
    lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)auStack416);
    lib::L2CValue::~L2CValue((L2CValue *)auStack416);
    lib::L2CValue::operator-((L2CValue *)(auStack304 + 0x10),aLStack320);
    lib::L2CValue::operator=((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack304);
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue(aLStack320);
LAB_710001f634:
  lib::L2CValue::L2CValue((L2CValue *)auStack416,1);
  lib::L2CValue::operator+(aLStack272,(L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::operator*(aLStack272,aLStack512);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0.5);
  lib::L2CValue::operator*(aLStack336,(L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::operator/((L2CValue *)(auStack304 + 0x10),aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT_ACCEL);
  fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack304);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_RUSH_DIR)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack416,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_RUSH_DIR_ROT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack416);
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

