
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSWalk_main_loop(L2CFighterInkling *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  FUN_710001f950(this);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar11 = &this->moduleAccessor;
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar12);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0x12bd59df70);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  uVar8 = lib::L2CValue::as_integer(aLStack208);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_7100006390(aLStack208,this);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x1941009c18);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::operator_(aLStack192,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar9,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0xf196e83ad);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_(aLStack144,aLStack128);
    lib::L2CValue::operator_(aLStack144,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    FUN_7100026980(aLStack208,this);
    uVar7 = lib::L2CValue::operator_(aLStack144,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar7 & 1) != 0) {
      FUN_7100026980(aLStack208,this);
      lib::L2CValue::operator_(aLStack144,aLStack208);
      goto LAB_7100028b4c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x1214c413f0);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    FUN_71000232a0(aLStack224,this);
    lib::L2CValue::operator_(aLStack128,aLStack224);
    lib::L2CValue::operator_(aLStack128,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::operator_(aLStack144,aLStack128);
    lib::L2CValue::operator_(aLStack144,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    FUN_7100026980(aLStack208,this);
    uVar7 = lib::L2CValue::operator_(aLStack144,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar7 & 1) != 0) {
      FUN_7100026980(aLStack208,this);
      lib::L2CValue::operator_(aLStack144,aLStack208);
LAB_7100028b4c:
      lib::L2CValue::_L2CValue(aLStack208);
    }
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  fVar12 = (float)lib::L2CValue::as_number(aLStack208);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  FUN_71000258d0(this);
  FUN_71000265a0(this);
  FUN_7100006390(aLStack208,this);
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) == 0) {
    HVar10 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack208,HVar10);
    HVar10 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack224,HVar10);
    fVar12 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack288,fVar12);
    lib::L2CValue::L2CValue(aLStack336,0x1419c4c496);
    lib::L2CValue::L2CValue(aLStack352,0x186bb4295d);
    lib::L2CValue::L2CValue(aLStack368,true);
    FUN_710001cbc0(this,aLStack336,aLStack352,aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    HVar10 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack128,HVar10);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,0xde837a165);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x11085a024c);
        lib::L2CValue::operator_(aLStack304,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      fVar12 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack320,fVar12);
      lib::L2CValue::L2CValue(aLStack384,true);
      HVar10 = lib::L2CValue::as_hash(aLStack304);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      fVar13 = (float)lib::L2CValue::as_number(aLStack320);
      bVar1 = lib::L2CValue::as_bool(aLStack384);
      fVar14 = (float)lib::L2CValue::as_number(aLStack288);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),fVar14);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack304);
    }
    lib::L2CValue::L2CValue(aLStack128,0xe2b956c37);
    uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0x1269c799f8);
      uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) goto LAB_7100029004;
    }
    else {
LAB_7100029004:
      lib::L2CValue::L2CValue(aLStack320,0x169d8e2182);
      HVar10 = lib::L2CValue::as_hash(aLStack320);
      bVar1 = app::lua_bind::SoundModule__is_playing_impl(*ppBVar11,HVar10);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack128,true);
      uVar7 = lib::L2CValue::operator__(aLStack304,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x169d8e2182);
        HVar10 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::SoundModule__stop_se_impl(*ppBVar11,HVar10,0);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack320,0x1603eab421);
      HVar10 = lib::L2CValue::as_hash(aLStack320);
      bVar1 = app::lua_bind::SoundModule__is_playing_impl(*ppBVar11,HVar10);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack128,false);
      uVar7 = lib::L2CValue::operator__(aLStack304,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x1603eab421);
        HVar10 = lib::L2CValue::as_hash(aLStack128);
        iVar4 = app::lua_bind::SoundModule__play_se_impl(*ppBVar11,HVar10,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack400,iVar4);
        pLVar9 = aLStack400;
        goto LAB_710002915c;
      }
    }
LAB_7100029168:
    lib::L2CValue::_L2CValue(aLStack288);
  }
  else {
    HVar10 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack208,HVar10);
    fVar12 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CValue::L2CValue(aLStack240,0xe2b956c37);
    lib::L2CValue::L2CValue(aLStack256,0x1269c799f8);
    lib::L2CValue::L2CValue(aLStack272,true);
    FUN_710001cbc0(this,aLStack240,aLStack256,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    HVar10 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack128,HVar10);
    uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack288,0xde837a165);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x11085a024c);
        lib::L2CValue::operator_(aLStack288,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      fVar12 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack304,fVar12);
      lib::L2CValue::L2CValue(aLStack320,true);
      HVar10 = lib::L2CValue::as_hash(aLStack288);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      fVar13 = (float)lib::L2CValue::as_number(aLStack304);
      bVar1 = lib::L2CValue::as_bool(aLStack320);
      fVar14 = (float)lib::L2CValue::as_number(aLStack224);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),fVar14);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar9 = aLStack304;
LAB_710002915c:
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_7100029168;
    }
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  FUN_7100006390(aLStack208,this);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar7 = lib::L2CValue::operator__(aLStack208,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack464,0x48d917a55);
    lib::L2CValue::L2CValue(aLStack480,0x8373127e3);
    lib::L2CValue::L2CValue(aLStack496,false);
    FUN_710001cfc0(this,aLStack464,aLStack480);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    pLVar9 = aLStack464;
  }
  else {
    lib::L2CValue::L2CValue(aLStack416,0xbbc1a51c5);
    lib::L2CValue::L2CValue(aLStack432,0xbbc1a51c5);
    lib::L2CValue::L2CValue(aLStack448,false);
    FUN_710001cfc0(this,aLStack416,aLStack432);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    pLVar9 = aLStack416;
  }
  lib::L2CValue::_L2CValue(pLVar9);
  fVar12 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  uVar7 = lib::L2CValue::operator_(aLStack192,aLStack208);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    lib::L2CValue::L2CValue(aLStack640,false);
    FUN_7100028200(this,aLStack608,aLStack624,aLStack640);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack288,fVar12);
    lib::L2CValue::operator_(aLStack144,aLStack288);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar9 = aLStack128;
  }
  else {
    iVar4 = app::lua_bind::KineticModule__get_kinetic_type_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack224,iVar4);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_TYPE_MOTION);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      iVar4 = app::lua_bind::KineticModule__get_kinetic_type_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack288,iVar4);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
      uVar7 = lib::L2CValue::operator__(aLStack288,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack512,FIGHTER_KINETIC_TYPE_MOTION);
        lib::L2CValue::L2CValue(aLStack528,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
        lib::L2CValue::L2CValue(aLStack544,true);
        FUN_7100028200(this,aLStack512,aLStack528,aLStack544);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
        pLVar9 = aLStack512;
        goto LAB_710002944c;
      }
    }
    else {
      pLVar9 = aLStack224;
LAB_710002944c:
      lib::L2CValue::_L2CValue(pLVar9);
    }
    lib::L2CValue::L2CValue(aLStack560,FIGHTER_KINETIC_TYPE_MOTION);
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    lib::L2CValue::L2CValue(aLStack592,false);
    FUN_7100028200(this,aLStack560,aLStack576,aLStack592);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    pLVar9 = aLStack560;
  }
  lib::L2CValue::_L2CValue(pLVar9);
  FUN_7100020d50(aLStack656,this);
  lib::L2CValue::_L2CValue(aLStack656);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar9,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      bVar2 = false;
LAB_710002957c:
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack304,fVar12);
      lib::L2CValue::L2CValue(aLStack128,-1.0);
      uVar7 = lib::L2CValue::operator__(aLStack304,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack320,fVar12);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar7 = lib::L2CValue::operator_(aLStack128,aLStack320);
        uVar7 = uVar7 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack320);
      }
      lib::L2CValue::_L2CValue(aLStack304);
      if (bVar2) {
        lib::L2CValue::_L2CValue(aLStack288);
      }
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar7 & 1) == 0) goto LAB_710002976c;
    }
    else {
      fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack288,fVar12);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack288,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        bVar2 = true;
        goto LAB_710002957c;
      }
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CValue::operator_(aLStack176,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack320,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack384,0x13ea40dd0b);
    uVar7 = lib::L2CValue::as_integer(aLStack320);
    uVar8 = lib::L2CValue::as_integer(aLStack384);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack304,fVar12);
    lib::L2CValue::operator_(aLStack224,aLStack304);
    lib::L2CValue::operator_(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::operator_(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    fVar12 = (float)lib::L2CValue::as_number(aLStack304);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar4);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack224);
  }
LAB_710002976c:
  lib::L2CValue::L2CValue(aLStack304,_GROUND_TOUCH_FLAG_LEFT);
  uVar5 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar2 & 1U) == 0) {
    bVar2 = false;
LAB_71000297ec:
    lib::L2CValue::L2CValue(aLStack672,GROUND_TOUCH_FLAG_RIGHT);
    uVar5 = lib::L2CValue::as_integer(aLStack672);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
    lib::L2CValue::L2CValue(aLStack384,(bool)(bVar1 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack384);
    if ((bVar3 & 1U) == 0) {
      uVar8 = 0;
    }
    else {
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack688,fVar12);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      uVar8 = lib::L2CValue::operator__(aLStack688,aLStack128);
      uVar8 = uVar8 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack688);
    }
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack672);
    if (bVar2) goto LAB_710002987c;
  }
  else {
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    lib::L2CValue::L2CValue(aLStack128,-1.0);
    uVar7 = lib::L2CValue::operator__(aLStack320,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    bVar2 = true;
    uVar8 = 1;
    if ((uVar7 & 1) == 0) goto LAB_71000297ec;
LAB_710002987c:
    lib::L2CValue::_L2CValue(aLStack320);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_WALL_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar6 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar4,iVar6);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CValue::operator_(aLStack160,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_WALL_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar4);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_WALL_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack384,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack672,0x17a5bdc12f);
  uVar7 = lib::L2CValue::as_integer(aLStack384);
  uVar8 = lib::L2CValue::as_integer(aLStack672);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack304,iVar4);
  uVar7 = lib::L2CValue::operator__(aLStack304,aLStack128);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack704,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack720,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue(aLStack704);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002a110;
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar9,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    FUN_7100023670(aLStack128,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack928,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack944,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack944);
        pLVar9 = aLStack928;
      }
      else {
        lib::L2CValue::L2CValue(aLStack896,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_JUMP_END);
        lib::L2CValue::L2CValue(aLStack912,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack912);
        pLVar9 = aLStack896;
      }
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002a110;
    }
    FUN_7100006390(aLStack224,this);
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,false);
        uVar7 = lib::L2CValue::operator__(aLStack176,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) {
          FUN_7100023460(aLStack224,this);
          lib::L2CValue::L2CValue(aLStack128,true);
          uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack960,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_DASH);
            lib::L2CValue::L2CValue(aLStack976,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::_L2CValue(aLStack976);
            lib::L2CValue::_L2CValue(aLStack960);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_710002a110;
          }
        }
      }
    }
  }
  else {
    FUN_7100023670(aLStack128,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack768,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack784,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack784);
        pLVar9 = aLStack768;
      }
      else {
        lib::L2CValue::L2CValue(aLStack736,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_JUMP_END);
        lib::L2CValue::L2CValue(aLStack752,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack752);
        pLVar9 = aLStack736;
      }
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002a110;
    }
    FUN_7100006390(aLStack224,this);
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar7 & 1) == 0) goto LAB_710002a104;
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_AFTER_TURN_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack384,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack672,0x11e7d65f61);
    uVar7 = lib::L2CValue::as_integer(aLStack384);
    uVar8 = lib::L2CValue::as_integer(aLStack672);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack304,iVar4);
    uVar7 = lib::L2CValue::operator__(aLStack304,aLStack128);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar7 & 1) != 0) {
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack224,fVar12);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        bVar2 = false;
LAB_7100029f14:
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack384,fVar12);
        lib::L2CValue::L2CValue(aLStack128,-1.0);
        uVar7 = lib::L2CValue::operator__(aLStack384,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack672,fVar12);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          uVar7 = lib::L2CValue::operator_(aLStack128,aLStack672);
          uVar7 = uVar7 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack672);
        }
        lib::L2CValue::_L2CValue(aLStack384);
        if (bVar2) {
          lib::L2CValue::_L2CValue(aLStack304);
        }
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar7 & 1) == 0) goto LAB_710002a02c;
      }
      else {
        fVar12 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack304,fVar12);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar7 = lib::L2CValue::operator_(aLStack304,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) == 0) {
          bVar2 = true;
          goto LAB_7100029f14;
        }
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack224);
      }
      fVar12 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack224,fVar12);
      lib::L2CValue::L2CValue(aLStack128,0.5);
      uVar7 = lib::L2CValue::operator_(aLStack128,aLStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack832,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN_TURN);
        lib::L2CValue::L2CValue(aLStack848,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack848);
        pLVar9 = aLStack832;
      }
      else {
        lib::L2CValue::L2CValue(aLStack800,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK_TURN);
        lib::L2CValue::L2CValue(aLStack816,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack816);
        pLVar9 = aLStack800;
      }
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002a110;
    }
LAB_710002a02c:
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar7 = lib::L2CValue::operator__(aLStack160,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      uVar7 = lib::L2CValue::operator__(aLStack176,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        FUN_7100023460(aLStack224,this);
        lib::L2CValue::L2CValue(aLStack128,true);
        uVar7 = lib::L2CValue::operator__(aLStack224,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack864,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_DASH);
          lib::L2CValue::L2CValue(aLStack880,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack880);
          lib::L2CValue::_L2CValue(aLStack864);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710002a110;
        }
      }
    }
  }
LAB_710002a104:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002a110:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

