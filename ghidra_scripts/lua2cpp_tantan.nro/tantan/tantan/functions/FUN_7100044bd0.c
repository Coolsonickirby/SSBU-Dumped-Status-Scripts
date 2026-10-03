
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044bd0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack1568 [16];
  L2CValue aLStack1552 [16];
  L2CValue aLStack1536 [16];
  L2CValue aLStack1520 [16];
  L2CValue aLStack1504 [16];
  L2CValue aLStack1488 [16];
  L2CValue aLStack1472 [16];
  L2CValue aLStack1456 [16];
  L2CValue aLStack1440 [16];
  L2CValue aLStack1424 [16];
  L2CValue aLStack1408 [16];
  L2CValue aLStack1392 [16];
  L2CValue aLStack1376 [16];
  L2CValue aLStack1360 [16];
  L2CValue aLStack1344 [16];
  L2CValue aLStack1328 [16];
  L2CValue aLStack1312 [16];
  L2CValue aLStack1296 [16];
  L2CValue aLStack1280 [16];
  L2CValue aLStack1264 [16];
  L2CValue aLStack1248 [16];
  L2CValue aLStack1232 [16];
  L2CValue aLStack1216 [16];
  L2CValue aLStack1200 [16];
  L2CValue aLStack1184 [16];
  L2CValue aLStack1168 [16];
  L2CValue aLStack1152 [16];
  L2CValue aLStack1136 [16];
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  L2CValue aLStack1088 [16];
  L2CValue aLStack1072 [16];
  L2CValue aLStack1056 [16];
  L2CValue aLStack1040 [16];
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
  
  FUN_710004ecc0(aLStack864);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar12 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack864,0xd0ebd033b);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue(aLStack864,0x12c5493128);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x14da3c4a5e);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x13f3fbe44e);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x14ad3b7ac8);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x1384fcd4d8);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack864,0xec0bbbbde);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue(aLStack864,0x1344ce0e32);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x152c67a3e0);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x1431f9742a);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x155b609376);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x1446fe44bc);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack864,0xe5771ed94);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x13d3045878);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack864,0xdc76c0a9c);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x120c98388f);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack864,0xf868bc949);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x142fb312af);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack864,0xe88c05c9c);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x130cb5e970);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack160,lVar7);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack176,lVar7);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack192,lVar7);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack224,lVar7);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  lib::L2CValue::L2CValue(aLStack272,param_4);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue
            (aLStack352,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack336,lVar7);
  lib::L2CValue::L2CValue
            (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
  iVar3 = lib::L2CValue::as_integer(aLStack384);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack368,lVar7);
  lib::L2CValue::L2CValue(aLStack400,FUN_7100050a30);
  lib::L2CValue::L2CValue(aLStack416,FUN_7100051690);
  lib::L2CValue::L2CValue(aLStack432,FUN_7100051960);
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_L);
  lib::L2CValue::L2CValue(aLStack464,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_L);
  FUN_7100051bf0(aLStack864,param_2,aLStack144,aLStack160,aLStack176,aLStack192,aLStack224,
                 aLStack256,aLStack272,aLStack288,aLStack320,aLStack336,aLStack368,aLStack400,
                 aLStack416,aLStack432,aLStack448,aLStack464);
  lib::L2CValue::L2CValue(aLStack480,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_END_L);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack480);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack864,0xdf4b23e58);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue(aLStack864,0x123f460c4b);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x140e7d7581);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x1327badb91);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x14797a4517);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x1350bdeb07);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack864,0xe14fa8401);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue(aLStack864,0x13908f31ed);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
    lVar7 = lib::L2CValue::as_integer(aLStack864);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x153adf2d9a);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x142741fa50);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack864,0x154dd81d0c);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack864,0x145046cac6);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
        lVar7 = lib::L2CValue::as_integer(aLStack864);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack864,0xead7ed0f7);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x13290b651b);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack864,0xd3d6337ff);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x12f69705ec);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack864,0xf52caf696);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x14fbf22d70);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack864,0xe5c816343);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x13d8f4d6af);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
    }
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack496,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack512,lVar7);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack528,lVar7);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD_LEG);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack544,lVar7);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack560,lVar7);
  iVar3 = _FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1;
  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
  iVar4 = lib::L2CValue::as_integer(aLStack384);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack352,iVar4);
  lib::L2CValue::L2CValue(aLStack864,iVar3);
  lib::L2CValue::operator+(aLStack864,aLStack352);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack592,param_4);
  lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
  iVar3 = lib::L2CValue::as_integer(aLStack864);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack624,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue
            (aLStack480,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE);
  iVar3 = lib::L2CValue::as_integer(aLStack480);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack640,lVar7);
  lib::L2CValue::L2CValue
            (aLStack672,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_LEG);
  iVar3 = lib::L2CValue::as_integer(aLStack672);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack656,lVar7);
  lib::L2CValue::L2CValue(aLStack688,FUN_7100053f20);
  lib::L2CValue::L2CValue(aLStack704,FUN_7100054bf0);
  lib::L2CValue::L2CValue(aLStack720,FUN_7100054ec0);
  lib::L2CValue::L2CValue(aLStack736,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_R);
  lib::L2CValue::L2CValue(aLStack752,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_R);
  FUN_7100051bf0(aLStack112,param_2,aLStack496,aLStack512,aLStack528,aLStack544,aLStack560,
                 aLStack576,aLStack592,aLStack608,aLStack624,aLStack640,aLStack656,aLStack688,
                 aLStack704,aLStack720,aLStack736,aLStack752);
  lib::L2CValue::L2CValue(aLStack768,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_END_R);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack768);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack768);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack752);
  lib::L2CValue::~L2CValue(aLStack736);
  lib::L2CValue::~L2CValue(aLStack720);
  lib::L2CValue::~L2CValue(aLStack704);
  lib::L2CValue::~L2CValue(aLStack688);
  lib::L2CValue::~L2CValue(aLStack656);
  lib::L2CValue::~L2CValue(aLStack672);
  lib::L2CValue::~L2CValue(aLStack640);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_END_L);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_END_R);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack864,_FS_SUCCEEDS_KEEP_TRANSITION);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      app::lua_bind::StatusModule__set_succeeds_bit_impl(*ppBVar12,iVar3);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack784,param_3);
      lib::L2CValue::L2CValue(aLStack800,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::~L2CValue(aLStack800);
      lib::L2CValue::~L2CValue(aLStack784);
      lib::L2CValue::L2CValue(param_1,true);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_L);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_L)
  ;
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_R);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_R)
  ;
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack864,false);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
  bVar1 = lib::L2CValue::as_bool(aLStack864);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_L)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_R);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) goto LAB_710004a818;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack864);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::L2CValue(aLStack864,_FIGHTER_STATUS_KIND_NONE);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,false);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack208);
LAB_71000470bc:
      lib::L2CValue::L2CValue(aLStack864,FIGHTER_STATUS_KIND_GUARD_ON);
      uVar6 = lib::L2CValue::operator==(aLStack112,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      if ((uVar6 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
        lib::L2CValue::L2CValue(aLStack864,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator==(pLVar9,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack864,FIGHTER_STATUS_KIND_ESCAPE_AIR);
          lib::L2CValue::operator=(aLStack112,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
        }
      }
      lib::L2CValue::L2CValue(aLStack816,aLStack112);
      lib::L2CValue::L2CValue(aLStack832,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack832);
      lib::L2CValue::~L2CValue(aLStack816);
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue(aLStack112);
      return;
    }
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,false);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) goto LAB_71000470bc;
  }
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_L)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar9 = aLStack304;
LAB_710004751c:
    lib::L2CValue::~L2CValue(pLVar9);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_R);
    iVar3 = lib::L2CValue::as_integer(aLStack384);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) != 0) {
          FUN_7100055260(aLStack864,param_2);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::operator=(aLStack208,aLStack848);
          goto LAB_710004724c;
        }
        lib::L2CValue::L2CValue(aLStack864,0xfe1a70b18);
        lib::L2CValue::operator=(aLStack128,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::L2CValue(aLStack864,0x14489fd0fe);
        lib::L2CValue::operator=(aLStack208,aLStack864);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          FUN_7100055260(aLStack864,param_2);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::operator=(aLStack208,aLStack848);
LAB_710004724c:
          lib::L2CValue::~L2CValue(aLStack848);
        }
        else {
          lib::L2CValue::L2CValue(aLStack864,0x11ca8ff366);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::L2CValue(aLStack864,0x16d3aa0568);
          lib::L2CValue::operator=(aLStack208,aLStack864);
        }
      }
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar12,iVar3,false);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(param_4,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack864,0.0);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack304,false);
        HVar8 = lib::L2CValue::as_hash(aLStack208);
        fVar13 = (float)lib::L2CValue::as_number(aLStack864);
        fVar14 = (float)lib::L2CValue::as_number(aLStack240);
        bVar1 = lib::L2CValue::as_bool(aLStack304);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar8,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack864);
      }
      lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      HVar8 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar12,iVar3,HVar8,0.0,1.0,false,false,0.0,true,true,false);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue
                (aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x7fb997a80);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x7fb997a80);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG);
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,0x7fb997a80);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL)
      ;
      lVar7 = lib::L2CValue::as_integer(aLStack864);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar9 = aLStack864;
      goto LAB_710004751c;
    }
  }
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_L)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack304);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,false);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack864,0x124eb7a24a);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::L2CValue(aLStack864,0x17a916aabb);
          lib::L2CValue::operator=(aLStack208,aLStack864);
        }
        else {
          lib::L2CValue::L2CValue(aLStack864,0x1128cdb3d8);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::L2CValue(aLStack864,0x1631e845d6);
          lib::L2CValue::operator=(aLStack208,aLStack864);
        }
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14da3c4a5e);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x19d940f531);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x13f3fbe44e);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1839a687cc);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14ad3b7ac8);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x19ae47c5a7);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1384fcd4d8);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x184ea1b75a);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,false);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
          iVar3 = lib::L2CValue::as_integer(aLStack384);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack352,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) != 0) goto LAB_71000477f0;
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x149b8c5130);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1998f0ee5f);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x13b24bff20);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1878169ca2);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
        }
        else {
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
LAB_71000477f0:
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x13e7f9f0d5);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x182da49357);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x12f99e78ac);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x171e3f705d);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
        }
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x152c67a3e0);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1af169a396);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1431f9742a);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x193285cb45);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x155b609376);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1a866e9300);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1446fe44bc);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x194582fbd3);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x140e7d7581);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1327badb91);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14797a4517);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1350bdeb07);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x153adf2d9a);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x142741fa50);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x154dd81d0c);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x145046cac6);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
    }
    lib::L2CValue::L2CValue(aLStack880,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    lib::L2CValue::L2CValue(aLStack896,aLStack128);
    lib::L2CValue::L2CValue
              (aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
    iVar3 = lib::L2CValue::as_integer(aLStack864);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack912,lVar7);
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack928,lVar7);
    lib::L2CValue::L2CValue(aLStack944,aLStack208);
    lib::L2CValue::L2CValue(aLStack960,0x59a6ef56c);
    lib::L2CValue::L2CValue(aLStack976,0x71a99f496);
    lib::L2CValue::L2CValue(aLStack992,0xcec1191d4);
    lib::L2CValue::L2CValue(aLStack1008,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    lib::L2CValue::L2CValue(aLStack1024,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
    lib::L2CValue::L2CValue(aLStack1040,param_4);
    lib::L2CValue::L2CValue
              (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1056,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack1072,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_L)
    ;
    lib::L2CValue::L2CValue(aLStack1088,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1104,lVar7);
    lib::L2CValue::L2CValue
              (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
    iVar3 = lib::L2CValue::as_integer(aLStack384);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1120,lVar7);
    lib::L2CValue::L2CValue(aLStack1136,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack480);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1152,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack672,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_L);
    iVar3 = lib::L2CValue::as_integer(aLStack672);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1168,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack1184,true);
    FUN_7100055660(param_2,aLStack880,aLStack896,aLStack912,aLStack928,aLStack944,aLStack960,
                   aLStack976,aLStack992,aLStack1008,aLStack1024,aLStack1040,aLStack1056,aLStack1072
                   ,aLStack1088,aLStack1104,aLStack1120,aLStack1136,aLStack1152,aLStack1168,
                   aLStack1184);
    lib::L2CValue::~L2CValue(aLStack1184);
    lib::L2CValue::~L2CValue(aLStack1168);
    lib::L2CValue::~L2CValue(aLStack672);
    lib::L2CValue::~L2CValue(aLStack1152);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack1136);
    lib::L2CValue::~L2CValue(aLStack1120);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack1104);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack1088);
    lib::L2CValue::~L2CValue(aLStack1072);
    lib::L2CValue::~L2CValue(aLStack1056);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack1040);
    lib::L2CValue::~L2CValue(aLStack1024);
    lib::L2CValue::~L2CValue(aLStack1008);
    lib::L2CValue::~L2CValue(aLStack992);
    lib::L2CValue::~L2CValue(aLStack976);
    lib::L2CValue::~L2CValue(aLStack960);
    lib::L2CValue::~L2CValue(aLStack944);
    lib::L2CValue::~L2CValue(aLStack928);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack912);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack896);
    lib::L2CValue::~L2CValue(aLStack880);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_L)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack1200,(bool)(bVar1 & 1));
      FUN_7100056760(aLStack240,param_2,aLStack1200);
      lib::L2CValue::~L2CValue(aLStack1200);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
      lib::L2CValue::operator|(aLStack864,aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
      lib::L2CValue::operator|(aLStack352,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(*ppBVar12,uVar6);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack352);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack864,SITUATION_KIND_AIR);
      bVar1 = lib::L2CValue::operator==(pLVar10,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue
                (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
      iVar3 = lib::L2CValue::as_integer(aLStack384);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
      bVar1 = lib::L2CValue::as_bool(aLStack352);
      bVar2 = lib::L2CValue::as_bool(aLStack864);
      fVar13 = (float)app::FighterSpecializer_Tantan::get_spiral_power_up_attack
                                (pBVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack304,fVar13);
      fVar13 = (float)lib::L2CValue::as_number(aLStack304);
      app::lua_bind::AttackModule__set_power_up_impl(*ppBVar12,fVar13);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DRAGONIZE_L);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,false);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      lib::L2CValue::L2CValue(aLStack864,0);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack864,iVar3);
        lib::L2CValue::L2CValue(aLStack304,false);
        uVar5 = lib::L2CValue::as_integer(aLStack864);
        bVar1 = lib::L2CValue::as_bool(aLStack304);
        app::lua_bind::EffectModule__kill_impl(*ppBVar12,uVar5,(bool)(bVar1 & 1),true);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack864,0);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L);
        iVar3 = lib::L2CValue::as_integer(aLStack864);
        iVar4 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack864);
      }
    }
    lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_L);
    iVar3 = lib::L2CValue::as_integer(aLStack864);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::~L2CValue(aLStack864);
  }
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_PUNCH_R)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack864,true);
  uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
  lib::L2CValue::~L2CValue(aLStack864);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack304);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,false);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack864,0x12b4b89f29);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::L2CValue(aLStack864,0x17531997d8);
          lib::L2CValue::operator=(aLStack208,aLStack864);
        }
        else {
          lib::L2CValue::L2CValue(aLStack864,0x11d2c28ebb);
          lib::L2CValue::operator=(aLStack128,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::L2CValue(aLStack864,0x16cbe778b5);
          lib::L2CValue::operator=(aLStack208,aLStack864);
        }
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x140e7d7581);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x190d01caee);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1327badb91);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x18ede7b813);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14797a4517);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x197a06fa78);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1350bdeb07);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x189ae08885);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,false);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
          iVar3 = lib::L2CValue::as_integer(aLStack384);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack352,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) != 0) goto LAB_710004912c;
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x148d34df4a);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x198e486025);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x13a4f3715a);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x186eae12d8);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
        }
        else {
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
LAB_710004912c:
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x1333b8cf0a);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x18f9e5ac88);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x122ddf4773);
            lib::L2CValue::operator=(aLStack128,aLStack864);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x17ca7e4f82);
            lib::L2CValue::operator=(aLStack208,aLStack864);
          }
        }
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x153adf2d9a);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1ae7d12dec);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x142741fa50);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x19243d453f);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x154dd81d0c);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x1a90d61d7a);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x145046cac6);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::L2CValue(aLStack864,0x19533a75a9);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG
                      );
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_L);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack864,true);
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14da3c4a5e);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x13f3fbe44e);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x14ad3b7ac8);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1384fcd4d8);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BEHIND_R);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack864,true);
        uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x152c67a3e0);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1431f9742a);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_L);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack864,true);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
          lib::L2CValue::~L2CValue(aLStack864);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack864,0x155b609376);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack864,0x1446fe44bc);
            lib::L2CValue::L2CValue
                      (aLStack240,
                       _FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
            lVar7 = lib::L2CValue::as_integer(aLStack864);
            iVar3 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar7,iVar3);
          }
        }
      }
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
    }
    lib::L2CValue::L2CValue(aLStack1216,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    lib::L2CValue::L2CValue(aLStack1232,aLStack128);
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1248,lVar7);
    lib::L2CValue::L2CValue
              (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_PULL_LEG);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1264,lVar7);
    lib::L2CValue::L2CValue(aLStack1280,aLStack208);
    lib::L2CValue::L2CValue(aLStack1296,0x56061c80f);
    lib::L2CValue::L2CValue(aLStack1312,0x7e096c9f5);
    lib::L2CValue::L2CValue(aLStack1328,0xcd5cdf23f);
    lib::L2CValue::L2CValue(aLStack1344,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar3 = _FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1;
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
    iVar4 = lib::L2CValue::as_integer(aLStack384);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
    lib::L2CValue::L2CValue(aLStack352,iVar4);
    lib::L2CValue::L2CValue(aLStack864,iVar3);
    lib::L2CValue::operator+(aLStack864,aLStack352);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::L2CValue(aLStack1376,param_4);
    lib::L2CValue::L2CValue
              (aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack864);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1392,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack1408,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_R)
    ;
    lib::L2CValue::L2CValue(aLStack1424,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
    iVar3 = lib::L2CValue::as_integer(aLStack480);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1440,lVar7);
    lib::L2CValue::L2CValue
              (aLStack672,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_OPPOSITE_PULL);
    iVar3 = lib::L2CValue::as_integer(aLStack672);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1456,lVar7);
    lib::L2CValue::L2CValue(aLStack1472,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    lib::L2CValue::L2CValue(aLStack768,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_BACK_BOTH);
    iVar3 = lib::L2CValue::as_integer(aLStack768);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1488,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack1520,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_R);
    iVar3 = lib::L2CValue::as_integer(aLStack1520);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack1504,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack1536,false);
    FUN_7100055660(param_2,aLStack1216,aLStack1232,aLStack1248,aLStack1264,aLStack1280,aLStack1296,
                   aLStack1312,aLStack1328,aLStack1344,aLStack1360,aLStack1376,aLStack1392,
                   aLStack1408,aLStack1424,aLStack1440,aLStack1456,aLStack1472,aLStack1488,
                   aLStack1504,aLStack1536);
    lib::L2CValue::~L2CValue(aLStack1536);
    lib::L2CValue::~L2CValue(aLStack1504);
    lib::L2CValue::~L2CValue(aLStack1520);
    lib::L2CValue::~L2CValue(aLStack1488);
    lib::L2CValue::~L2CValue(aLStack768);
    lib::L2CValue::~L2CValue(aLStack1472);
    lib::L2CValue::~L2CValue(aLStack1456);
    lib::L2CValue::~L2CValue(aLStack672);
    lib::L2CValue::~L2CValue(aLStack1440);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack1424);
    lib::L2CValue::~L2CValue(aLStack1408);
    lib::L2CValue::~L2CValue(aLStack1392);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack1376);
    lib::L2CValue::~L2CValue(aLStack1360);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack1344);
    lib::L2CValue::~L2CValue(aLStack1328);
    lib::L2CValue::~L2CValue(aLStack1312);
    lib::L2CValue::~L2CValue(aLStack1296);
    lib::L2CValue::~L2CValue(aLStack1280);
    lib::L2CValue::~L2CValue(aLStack1264);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack1248);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack1232);
    lib::L2CValue::~L2CValue(aLStack1216);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_R)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack864,true);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack1552,(bool)(bVar1 & 1));
      iVar3 = _FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1;
      lib::L2CValue::L2CValue(aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
      iVar4 = lib::L2CValue::as_integer(aLStack384);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack352,iVar4);
      lib::L2CValue::L2CValue(aLStack864,iVar3);
      lib::L2CValue::operator+(aLStack864,aLStack352);
      lib::L2CValue::~L2CValue(aLStack864);
      FUN_7100056920(aLStack240,aLStack1552,aLStack1568);
      lib::L2CValue::~L2CValue(aLStack1568);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack1552);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack864,FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
      lib::L2CValue::operator|(aLStack864,aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack864,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
      lib::L2CValue::operator|(aLStack352,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(*ppBVar12,uVar6);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack352);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack864,SITUATION_KIND_AIR);
      bVar1 = lib::L2CValue::operator==(pLVar10,aLStack864);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue
                (aLStack384,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_LUA_TEMP_IS_ATTACK_LONG_R);
      iVar3 = lib::L2CValue::as_integer(aLStack384);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack864,(bool)(bVar1 & 1));
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
      bVar1 = lib::L2CValue::as_bool(aLStack352);
      bVar2 = lib::L2CValue::as_bool(aLStack864);
      fVar13 = (float)app::FighterSpecializer_Tantan::get_spiral_power_up_attack
                                (pBVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack304,fVar13);
      fVar13 = (float)lib::L2CValue::as_number(aLStack304);
      app::lua_bind::AttackModule__set_power_up_impl(*ppBVar12,fVar13);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue
              (aLStack304,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    lib::L2CValue::L2CValue(aLStack864,0);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack864);
    lib::L2CValue::~L2CValue(aLStack864);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack304);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack864,iVar3);
      lib::L2CValue::L2CValue(aLStack304,false);
      uVar5 = lib::L2CValue::as_integer(aLStack864);
      bVar1 = lib::L2CValue::as_bool(aLStack304);
      app::lua_bind::EffectModule__kill_impl(*ppBVar12,uVar5,(bool)(bVar1 & 1),true);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack864);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack864,0);
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
      iVar3 = lib::L2CValue::as_integer(aLStack864);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack864);
    }
    lib::L2CValue::L2CValue(aLStack864,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BACK_PUNCH_R);
    iVar3 = lib::L2CValue::as_integer(aLStack864);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::~L2CValue(aLStack864);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_710004a818:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

