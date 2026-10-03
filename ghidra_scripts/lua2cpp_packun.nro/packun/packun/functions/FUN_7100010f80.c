
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010f80(L2CAgent *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  int iVar6;
  BattleObjectModuleAccessor **ppBVar7;
  int iVar8;
  float fVar9;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0xfb6a8b677);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  ppBVar7 = &param_1->moduleAccessor;
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0xbb4dd870b);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0xb88d0b852);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar9);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack192,0xbce2bf707);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar9);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0x171215c8c8);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack112);
  FUN_71000107a0(aLStack224,param_1);
  FUN_7100010900(aLStack208,param_1,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  FUN_710000d5c0(auStack256 + 0x10,param_1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  FUN_71000107a0(aLStack288,param_1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar1);
  lib::L2CValue::L2CValue(aLStack304,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  pLVar5 = aLStack112;
  uVar3 = lib::L2CValue::operator==(aLStack304,pLVar5);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar5);
    uVar3 = lib::L2CValue::operator<=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar3 = lib::L2CValue::operator==(aLStack304,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
LAB_71000114a4:
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        uVar3 = lib::L2CValue::operator==(aLStack304,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar3 = lib::L2CValue::operator<(aLStack288,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar3 & 1) != 0) goto LAB_71000114f4;
        }
        lib::L2CValue::L2CValue(aLStack112,1.0);
        uVar3 = lib::L2CValue::operator==(aLStack304,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
LAB_7100011564:
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          uVar3 = lib::L2CValue::operator==(aLStack304,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar3 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            uVar3 = lib::L2CValue::operator<(aLStack112,aLStack288);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar3 & 1) != 0) goto LAB_71000115b4;
          }
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue
                    (aLStack320,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          iVar1 = lib::L2CValue::as_integer(aLStack320);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar3 = lib::L2CValue::operator<(aLStack288,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) goto LAB_7100011564;
LAB_71000115b4:
          lib::L2CValue::operator*(aLStack208,aLStack192);
          lib::L2CValue::operator=(aLStack208,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar3 = lib::L2CValue::operator<(aLStack112,aLStack288);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,-1.0);
            lib::L2CValue::L2CValue
                      (aLStack320,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            iVar1 = lib::L2CValue::as_integer(aLStack320);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue
                      (aLStack320,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            iVar1 = lib::L2CValue::as_integer(aLStack320);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
          }
        }
        goto LAB_7100011720;
      }
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack112,aLStack288);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) goto LAB_71000114a4;
LAB_71000114f4:
      lib::L2CValue::operator*(aLStack208,aLStack192);
      lib::L2CValue::operator=(aLStack208,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue
                (aLStack320,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      iVar1 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
LAB_7100011720:
      lib::L2CValue::~L2CValue(aLStack320);
    }
    pLVar5 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack320,fVar9);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack112,aLStack288);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
LAB_7100011308:
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack288,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar3 = lib::L2CValue::operator<(aLStack112,aLStack320);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar3 & 1) != 0) goto LAB_7100011358;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack320,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) goto LAB_7100011308;
LAB_7100011358:
      lib::L2CValue::operator*(aLStack208,aLStack192);
      lib::L2CValue::operator=(aLStack208,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack112,aLStack288);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        lib::L2CValue::L2CValue
                  (aLStack336,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        iVar1 = lib::L2CValue::as_integer(aLStack336);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue
                  (aLStack336,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_REVERSE_LR);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        iVar1 = lib::L2CValue::as_integer(aLStack336);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
      }
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    pLVar5 = aLStack320;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack352,aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),(L2CValue *)(auStack256 + 0x10));
  FUN_710000df20(aLStack112,param_1,aLStack352,auStack384 + 0x10);
  lib::L2CValue::operator=((L2CValue *)auStack256,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack400,0x1356277fcb);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
  uVar4 = lib::L2CValue::as_integer(aLStack400);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack336,iVar1);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator-(aLStack336,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar3 = lib::L2CValue::operator<(aLStack320,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_START)
    ;
    lib::L2CValue::operator+(aLStack112,aLStack320);
    lib::L2CValue::~L2CValue(aLStack112);
    iVar1 = lib::L2CValue::as_integer(aLStack400);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar9);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)auStack384);
    lib::L2CValue::~L2CValue((L2CValue *)auStack384);
    pLVar5 = aLStack400;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator=(aLStack336,aLStack112);
    pLVar5 = aLStack112;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  pLVar5 = aLStack112;
  lib::L2CAgent::push_lua_stack(param_1,pLVar5);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar5);
  lib::L2CValue::operator/(aLStack432,(L2CValue *)auStack176);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator-(aLStack112,aLStack416);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::operator-((L2CValue *)(auStack176 + 0x10),aLStack144);
  lib::L2CValue::operator*(aLStack416,aLStack400);
  lib::L2CValue::operator+(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator*(aLStack432,aLStack336);
  lib::L2CValue::operator=(aLStack432,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack432);
  lib::L2CAgent::push_lua_stack(param_1,aLStack448);
  app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack464,0xd459bfd48);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack464);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack448,fVar9);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack464,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack464);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack384,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar3 = lib::L2CValue::operator==((L2CValue *)auStack384,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) goto LAB_7100011ccc;
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack112,(L2CValue *)auStack384);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::operator+((L2CValue *)auStack384,aLStack448);
    lib::L2CValue::operator=((L2CValue *)auStack384,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    pLVar5 = (L2CValue *)auStack384;
    uVar3 = lib::L2CValue::operator<(aLStack112,pLVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      pLVar5 = aLStack112;
      lib::L2CValue::operator=((L2CValue *)auStack384,pLVar5);
      goto LAB_7100011bd4;
    }
  }
  else {
    lib::L2CValue::operator-((L2CValue *)auStack384,aLStack448);
    lib::L2CValue::operator=((L2CValue *)auStack384,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    pLVar5 = aLStack112;
    uVar3 = lib::L2CValue::operator<((L2CValue *)auStack384,pLVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      pLVar5 = aLStack112;
      lib::L2CValue::operator=((L2CValue *)auStack384,pLVar5);
LAB_7100011bd4:
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar5);
  uVar3 = lib::L2CValue::operator<(aLStack464,aLStack112);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack112,(L2CValue *)auStack384);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator-((L2CValue *)auStack176);
      lib::L2CValue::operator=((L2CValue *)auStack384,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::operator=((L2CValue *)auStack384,(L2CValue *)auStack176);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack384);
  lib::L2CAgent::push_lua_stack(param_1,aLStack464);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100011ccc:
  FUN_7100010290(param_1);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack256,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack464);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack464);
  iVar1 = _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_NUM;
  if (1 < _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_NUM) {
    iVar6 = 0;
    iVar8 = 1;
    do {
      lib::L2CValue::L2CValue
                (aLStack464,iVar6 + _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_END + -1)
      ;
      iVar2 = lib::L2CValue::as_integer(aLStack464);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
      lib::L2CValue::L2CValue(aLStack480,fVar9);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator+(aLStack480,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,iVar6 + _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_END);
      fVar9 = (float)lib::L2CValue::as_number(aLStack496);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar2);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar8 < iVar1);
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator+(aLStack288,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LOG_START);
  fVar9 = (float)lib::L2CValue::as_number(aLStack464);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar9,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

