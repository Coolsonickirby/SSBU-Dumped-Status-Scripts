
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000df20(L2CAgent *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
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
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0xfb6a8b677);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x19bd26ccf5);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack304,fVar10);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)param_1,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack320,fVar10);
  FUN_71000107a0(aLStack336,param_2);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar6 = lib::L2CValue::operator==(aLStack336,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),9);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_SPECIAL_HI);
    uVar6 = lib::L2CValue::operator==(pLVar8,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator*(aLStack336,param_3);
      lib::L2CValue::operator*(aLStack144,aLStack320);
      lib::L2CValue::operator+((L2CValue *)param_1,aLStack128);
      pLVar8 = aLStack112;
      lib::L2CValue::operator=((L2CValue *)param_1,pLVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CAgent::math_abs(param_1,pLVar8);
      uVar6 = lib::L2CValue::operator<(aLStack288,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)param_1);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator-(aLStack288);
          lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
        }
        else {
          lib::L2CValue::operator=((L2CValue *)param_1,aLStack288);
        }
      }
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack336);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LR);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LR);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_NONE);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator+((L2CValue *)param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar8 = aLStack128;
      goto LAB_710000f884;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_NONE);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar8 = aLStack144;
LAB_710000e370:
    lib::L2CValue::~L2CValue(pLVar8);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    pLVar8 = aLStack112;
    uVar6 = lib::L2CValue::operator==((L2CValue *)param_1,pLVar8);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) {
      lib::L2CAgent::math_abs(param_1,pLVar8);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack304);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER)
        ;
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack128);
        pLVar8 = aLStack112;
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_REACH_FORCE);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LR);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_FLAG_FORCE_REATCH_TO_LEFT);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_FLAG_FORCE_REATCH_TO_LEFT);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LR);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack128,fVar10);
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          uVar6 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_FLAG_FORCE_REATCH_TO_LEFT);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_FLAG_FORCE_REATCH_TO_LEFT);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
          }
        }
        pLVar8 = aLStack112;
      }
      goto LAB_710000e370;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack352,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER);
  uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_REACH);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)param_1);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::operator-(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,0.0001);
        lib::L2CValue::operator+(aLStack176,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)param_1,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator-(aLStack128);
          lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack144,aLStack112);
          goto LAB_710000ef60;
        }
      }
      else {
        lib::L2CValue::operator+((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0001);
        lib::L2CValue::operator-(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        uVar6 = lib::L2CValue::operator<=(aLStack160,(L2CValue *)param_1);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator=((L2CValue *)param_1,aLStack128);
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack144,aLStack112);
LAB_710000ef60:
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar4);
        lVar1 = -0x60;
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack160,fVar10);
        lib::L2CValue::~L2CValue(aLStack112);
        uVar6 = lib::L2CValue::operator<=(aLStack160,aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER);
          lib::L2CValue::L2CValue
                    (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue
                    (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_LAST);
          lib::L2CValue::L2CValue
                    (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue
                    (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        }
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator+(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
        fVar10 = (float)lib::L2CValue::as_number(aLStack176);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
LAB_710000f654:
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
LAB_710000f664:
        lVar1 = -0x90;
      }
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      lVar1 = -0x80;
LAB_710000f824:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      pLVar8 = aLStack128;
      goto LAB_710000f82c;
    }
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_LAST);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)param_1);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator+((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,-0.0001);
        uVar6 = lib::L2CValue::operator<=(aLStack112,(L2CValue *)param_1);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack128,aLStack112);
          goto LAB_710000f45c;
        }
      }
      else {
        lib::L2CValue::operator-((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0001);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack128,aLStack112);
LAB_710000f45c:
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_NONE);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
      }
LAB_710000f820:
      lVar1 = -0x60;
      goto LAB_710000f824;
    }
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_DIVE);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)param_1);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator+((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,-0.0001);
        uVar6 = lib::L2CValue::operator<=(aLStack112,(L2CValue *)param_1);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack128,aLStack112);
          goto LAB_710000f728;
        }
      }
      else {
        lib::L2CValue::operator-((L2CValue *)param_1,param_4);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0001);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack128,aLStack112);
LAB_710000f728:
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_NONE);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
      }
      goto LAB_710000f820;
    }
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_REACH_FORCE);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack144,0x1b3928767d);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_FLAG_FORCE_REATCH_TO_LEFT);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::operator=(aLStack144,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        lib::L2CValue::operator=(aLStack144,aLStack112);
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack448,aLStack144);
      FUN_7100010900(aLStack160,param_2,aLStack448);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::operator*(aLStack144,aLStack160);
      lib::L2CValue::operator*(aLStack192,aLStack320);
      lib::L2CValue::operator+((L2CValue *)param_1,aLStack176);
      pLVar8 = aLStack112;
      lib::L2CValue::operator=((L2CValue *)param_1,pLVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CAgent::math_abs(param_1,pLVar8);
      uVar6 = lib::L2CValue::operator<(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER)
        ;
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator+((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
        fVar10 = (float)lib::L2CValue::as_number(aLStack176);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
        goto LAB_710000f654;
      }
      goto LAB_710000f664;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack368,false);
    lib::L2CValue::L2CValue(aLStack384,false);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)param_1);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator+((L2CValue *)param_1,param_4);
      lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,-0.0001);
      uVar6 = lib::L2CValue::operator<=(aLStack112,(L2CValue *)param_1);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator=(aLStack368,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator=(aLStack384,aLStack112);
        goto LAB_710000e71c;
      }
    }
    else {
      lib::L2CValue::operator-((L2CValue *)param_1,param_4);
      lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0001);
      uVar6 = lib::L2CValue::operator<=((L2CValue *)param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator=(aLStack368,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,false);
        lib::L2CValue::operator=(aLStack384,aLStack112);
LAB_710000e71c:
        lib::L2CValue::~L2CValue(aLStack112);
      }
    }
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack368);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar4);
      pLVar8 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_REACH);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1e-05);
      lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator==(aLStack384,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-((L2CValue *)param_1);
        lib::L2CValue::operator=((L2CValue *)param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue
                (aLStack432,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
      iVar4 = lib::L2CValue::as_integer(aLStack432);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar10);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack144,0x1914d8dee5);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x22f75db6db);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack176,0xbce2bf707);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::operator*(aLStack144,aLStack176);
      pLVar8 = aLStack160;
      lib::L2CValue::operator/(aLStack240,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar8);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),fVar10);
      lib::L2CValue::~L2CValue(aLStack112);
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar10);
      lib::L2CValue::L2CValue(aLStack240,false);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar6 = lib::L2CValue::operator==((L2CValue *)auStack224,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
LAB_710000ea80:
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        uVar6 = lib::L2CValue::operator==((L2CValue *)auStack224,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack224 + 0x10),aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) goto LAB_710000ead0;
        }
        lib::L2CValue::L2CValue(aLStack112,1.0);
        uVar6 = lib::L2CValue::operator==((L2CValue *)auStack224,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
LAB_710000eb90:
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          pLVar8 = aLStack112;
          uVar6 = lib::L2CValue::operator==((L2CValue *)auStack224,pLVar8);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0.0);
            pLVar8 = (L2CValue *)(auStack224 + 0x10);
            uVar6 = lib::L2CValue::operator<(aLStack112,pLVar8);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar6 & 1) != 0) goto LAB_710000ebe0;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack224 + 0x10),aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) goto LAB_710000eb90;
LAB_710000ebe0:
          lib::L2CValue::L2CValue(aLStack112,0.0);
          pLVar8 = aLStack112;
          uVar6 = lib::L2CValue::operator<(aLStack176,pLVar8);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,true);
            pLVar8 = aLStack112;
            lib::L2CValue::operator=(aLStack240,pLVar8);
            goto LAB_710000ec20;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_710000ea80;
LAB_710000ead0:
        lib::L2CValue::L2CValue(aLStack112,0.0);
        pLVar8 = aLStack176;
        uVar6 = lib::L2CValue::operator<(aLStack112,pLVar8);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) goto LAB_710000ec28;
        lib::L2CValue::L2CValue(aLStack112,true);
        pLVar8 = aLStack112;
        lib::L2CValue::operator=(aLStack240,pLVar8);
LAB_710000ec20:
        lib::L2CValue::~L2CValue(aLStack112);
      }
LAB_710000ec28:
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,2.0);
        lib::L2CValue::operator-(aLStack112,aLStack192);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar8 = aLStack256;
        lib::L2CValue::operator=(aLStack192,pLVar8);
        lib::L2CValue::~L2CValue(aLStack256);
      }
      lib::L2CAgent::math_abs((L2CAgent *)auStack416,pLVar8);
      lib::L2CValue::operator*(aLStack272,aLStack128);
      pLVar8 = aLStack192;
      lib::L2CValue::operator*(aLStack256,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack416);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator+((L2CValue *)(auStack416 + 0x10),aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar8 = (L2CValue *)(auStack416 + 0x10);
    }
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::~L2CValue(aLStack384);
    pLVar8 = aLStack368;
LAB_710000f82c:
    lib::L2CValue::~L2CValue(pLVar8);
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_LR);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar8 = aLStack352;
LAB_710000f884:
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}

