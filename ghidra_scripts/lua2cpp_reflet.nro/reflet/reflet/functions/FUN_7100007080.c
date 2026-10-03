
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007080(L2CAgent *param_1,L2CValue *param_2)

{
  BattleObject **this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  ulong uVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator==(param_2,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  this = &param_1[2].battleObject;
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100007128;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100007e40;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100007e40;
  }
LAB_7100007128:
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack528,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    ppBVar10 = &param_1->moduleAccessor;
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    iVar3 = FIGHTER_STATUS_KIND_SPECIAL_N;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_HOLD;
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_71000079f0;
    }
    else {
LAB_71000079f0:
      lib::L2CValue::L2CValue(aLStack112,-0.089);
      lib::L2CValue::operator=(aLStack208,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack320,0x236d1fab0a);
      uVar5 = lib::L2CValue::as_integer(aLStack304);
      uVar8 = lib::L2CValue::as_integer(aLStack320);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::operator*(aLStack208,aLStack288);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack256,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator=(aLStack224,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack288,0x228dd20684);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator=(aLStack144,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack256);
      uVar5 = lib::L2CValue::operator<=(aLStack144,aLStack224);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack112);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack112);
      }
    }
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    lib::L2CValue::operator=(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    lib::L2CValue::operator=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lVar7 = -0xf0;
LAB_7100007c70:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar7));
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)((char)&stack0xfffffffffffffff0 + ' '))
    ;
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    ppBVar10 = &param_1->moduleAccessor;
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    lib::L2CValue::operator=(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    lib::L2CValue::operator=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::operator!(param_2);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    iVar3 = FIGHTER_STATUS_KIND_SPECIAL_N;
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
      lib::L2CValue::~L2CValue(aLStack112);
      iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_HOLD;
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_SHOOT;
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
          lib::L2CValue::~L2CValue(aLStack112);
          iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_TRON_HOLD;
          if ((uVar5 & 1) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
            lib::L2CValue::~L2CValue(aLStack112);
            iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_TRON_START;
            if ((uVar5 & 1) == 0) {
              pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
              lib::L2CValue::L2CValue(aLStack112,iVar3);
              uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
              lib::L2CValue::~L2CValue(aLStack112);
              iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_TRON_END;
              if ((uVar5 & 1) == 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                lib::L2CValue::L2CValue(aLStack112,iVar3);
                uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
                lib::L2CValue::~L2CValue(aLStack112);
                iVar3 = FIGHTER_STATUS_KIND_SPECIAL_S;
                if ((uVar5 & 1) == 0) {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                  lib::L2CValue::L2CValue(aLStack112,iVar3);
                  uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
                  lib::L2CValue::~L2CValue(aLStack112);
                  iVar3 = _FIGHTER_STATUS_KIND_SPECIAL_LW;
                  if ((uVar5 & 1) == 0) {
                    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                    lib::L2CValue::L2CValue(aLStack112,iVar3);
                    uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
                    lib::L2CValue::~L2CValue(aLStack112);
                    iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_LW_CAPTURE;
                    if ((uVar5 & 1) == 0) {
                      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                      lib::L2CValue::L2CValue(aLStack112,iVar3);
                      uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
                      lib::L2CValue::~L2CValue(aLStack112);
                      iVar3 = _FIGHTER_REFLET_STATUS_KIND_SPECIAL_LW_END;
                      if ((uVar5 & 1) == 0) {
                        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                        lib::L2CValue::L2CValue(aLStack112,iVar3);
                        uVar5 = lib::L2CValue::operator==(aLStack112,pLVar6);
                        lib::L2CValue::~L2CValue(aLStack112);
                        if ((uVar5 & 1) == 0) goto LAB_7100007c74;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_EFFECT_EFFECT);
      lib::L2CValue::L2CValue(aLStack256,0x116e7e1f9d);
      lib::L2CValue::L2CValue(aLStack288,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.5);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      lib::L2CValue::L2CValue(aLStack464,0.0);
      lib::L2CValue::L2CValue(aLStack480,0.0);
      lib::L2CValue::L2CValue(aLStack496,0.0);
      lib::L2CValue::L2CValue(aLStack512,false);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      lib::L2CAgent::push_lua_stack(param_1,aLStack368);
      lib::L2CAgent::push_lua_stack(param_1,aLStack384);
      lib::L2CAgent::push_lua_stack(param_1,aLStack400);
      lib::L2CAgent::push_lua_stack(param_1,aLStack416);
      lib::L2CAgent::push_lua_stack(param_1,aLStack432);
      lib::L2CAgent::push_lua_stack(param_1,aLStack448);
      lib::L2CAgent::push_lua_stack(param_1,aLStack464);
      lib::L2CAgent::push_lua_stack(param_1,aLStack480);
      lib::L2CAgent::push_lua_stack(param_1,aLStack496);
      lib::L2CAgent::push_lua_stack(param_1,aLStack512);
      app::sv_module_access::effect(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack256);
      lVar7 = -0x60;
      goto LAB_7100007c70;
    }
  }
LAB_7100007c74:
  ppBVar10 = &param_1->moduleAccessor;
  HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,HVar9);
  lib::L2CValue::operator=(aLStack160,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar5 = lib::L2CValue::operator==(aLStack160,aLStack192);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x976c3b29b);
    uVar5 = lib::L2CValue::operator==(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
      uVar5 = lib::L2CValue::operator==(aLStack192,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100007e40;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator=(aLStack176,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator==(param_2,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    fVar11 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::operator=(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  uVar5 = lib::L2CValue::operator==(aLStack160,aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack256,false);
    HVar9 = lib::L2CValue::as_hash(aLStack192);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack256);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    HVar9 = lib::L2CValue::as_hash(aLStack192);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
  }
LAB_7100007e40:
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

