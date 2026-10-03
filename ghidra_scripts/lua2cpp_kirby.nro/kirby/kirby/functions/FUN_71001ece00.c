
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001ece00(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
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
  
  pLVar5 = aLStack448;
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_HOP_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    ppBVar7 = (BattleObjectModuleAccessor **)(param_2 + 0x40);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar7,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_START_SE);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar7,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack96,HVar4);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_START_SE);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar1);
    lib::L2CValue::L2CValue(aLStack160,iVar1);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar3 = lib::L2CValue::operator<=(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,5);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_START_SE);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar1,iVar2);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_START_SE_COUNTER);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar1);
      lib::L2CValue::L2CValue(aLStack96,iVar1);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,1);
        uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,2);
          uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,3);
            uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,4);
              uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((uVar3 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack96,5);
                uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
                lib::L2CValue::~L2CValue(aLStack96);
                if ((uVar3 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack96,6);
                  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
                  lib::L2CValue::~L2CValue(aLStack96);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack96,7);
                    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
                    lib::L2CValue::~L2CValue(aLStack96);
                    if ((uVar3 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack96,8);
                      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
                      lib::L2CValue::~L2CValue(aLStack96);
                      if ((uVar3 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack96,9);
                        uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
                        lib::L2CValue::~L2CValue(aLStack96);
                        if ((uVar3 & 1) == 0) {
                          lib::L2CValue::L2CValue(aLStack96,0x1599968419);
                          HVar4 = lib::L2CValue::as_hash(aLStack96);
                          iVar1 = app::lua_bind::SoundModule__play_se_impl
                                            (*ppBVar7,HVar4,true,false,false,false,0);
                          lib::L2CValue::L2CValue(aLStack448,iVar1);
                        }
                        else {
                          lib::L2CValue::L2CValue(aLStack96,0x1599968419);
                          HVar4 = lib::L2CValue::as_hash(aLStack96);
                          iVar1 = app::lua_bind::SoundModule__play_se_impl
                                            (*ppBVar7,HVar4,true,false,false,false,0);
                          lib::L2CValue::L2CValue(aLStack432,iVar1);
                          pLVar5 = aLStack432;
                        }
                      }
                      else {
                        lib::L2CValue::L2CValue(aLStack96,0x15009fd5a3);
                        HVar4 = lib::L2CValue::as_hash(aLStack96);
                        iVar1 = app::lua_bind::SoundModule__play_se_impl
                                          (*ppBVar7,HVar4,true,false,false,false,0);
                        lib::L2CValue::L2CValue(aLStack416,iVar1);
                        pLVar5 = aLStack416;
                      }
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack96,0x15009fd5a3);
                      HVar4 = lib::L2CValue::as_hash(aLStack96);
                      iVar1 = app::lua_bind::SoundModule__play_se_impl
                                        (*ppBVar7,HVar4,true,false,false,false,0);
                      lib::L2CValue::L2CValue(aLStack400,iVar1);
                      pLVar5 = aLStack400;
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
                    uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
                    lib::L2CValue::~L2CValue(aLStack96);
                    if ((uVar3 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack96,0x157798e535);
                      HVar4 = lib::L2CValue::as_hash(aLStack96);
                      iVar1 = app::lua_bind::SoundModule__play_se_impl
                                        (*ppBVar7,HVar4,true,false,false,false,0);
                      lib::L2CValue::L2CValue(aLStack384,iVar1);
                      pLVar5 = aLStack384;
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack96,0x1896dcd23e);
                      HVar4 = lib::L2CValue::as_hash(aLStack96);
                      iVar1 = app::lua_bind::SoundModule__play_se_impl
                                        (*ppBVar7,HVar4,true,false,false,false,0);
                      lib::L2CValue::L2CValue(aLStack368,iVar1);
                      pLVar5 = aLStack368;
                    }
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
                  uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
                  lib::L2CValue::~L2CValue(aLStack96);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack96,0x159020c832);
                    HVar4 = lib::L2CValue::as_hash(aLStack96);
                    iVar1 = app::lua_bind::SoundModule__play_se_impl
                                      (*ppBVar7,HVar4,true,false,false,false,0);
                    lib::L2CValue::L2CValue(aLStack352,iVar1);
                    pLVar5 = aLStack352;
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack96,0x187603a50d);
                    HVar4 = lib::L2CValue::as_hash(aLStack96);
                    iVar1 = app::lua_bind::SoundModule__play_se_impl
                                      (*ppBVar7,HVar4,true,false,false,false,0);
                    lib::L2CValue::L2CValue(aLStack336,iVar1);
                    pLVar5 = aLStack336;
                  }
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack96,0x15f0e741d7);
                HVar4 = lib::L2CValue::as_hash(aLStack96);
                iVar1 = app::lua_bind::SoundModule__play_se_impl
                                  (*ppBVar7,HVar4,true,false,false,false,0);
                lib::L2CValue::L2CValue(aLStack320,iVar1);
                pLVar5 = aLStack320;
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
              uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((uVar3 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack96,0x1587e07141);
                HVar4 = lib::L2CValue::as_hash(aLStack96);
                iVar1 = app::lua_bind::SoundModule__play_se_impl
                                  (*ppBVar7,HVar4,true,false,false,false,0);
                lib::L2CValue::L2CValue(aLStack304,iVar1);
                pLVar5 = aLStack304;
              }
              else {
                lib::L2CValue::L2CValue(aLStack96,0x188ed7a452);
                HVar4 = lib::L2CValue::as_hash(aLStack96);
                iVar1 = app::lua_bind::SoundModule__play_se_impl
                                  (*ppBVar7,HVar4,true,false,false,false,0);
                lib::L2CValue::L2CValue(aLStack288,iVar1);
                pLVar5 = aLStack288;
              }
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
            uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0x1587e07141);
              HVar4 = lib::L2CValue::as_hash(aLStack96);
              iVar1 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar7,HVar4,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack272,iVar1);
              pLVar5 = aLStack272;
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0x188ed7a452);
              HVar4 = lib::L2CValue::as_hash(aLStack96);
              iVar1 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar7,HVar4,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack256,iVar1);
              pLVar5 = aLStack256;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
          uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x159020c832);
            HVar4 = lib::L2CValue::as_hash(aLStack96);
            iVar1 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar7,HVar4,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack240,iVar1);
            pLVar5 = aLStack240;
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x187603a50d);
            HVar4 = lib::L2CValue::as_hash(aLStack96);
            iVar1 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar7,HVar4,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack224,iVar1);
            pLVar5 = aLStack224;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x119fdc76fa);
        uVar3 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x157798e535);
          HVar4 = lib::L2CValue::as_hash(aLStack96);
          iVar1 = app::lua_bind::SoundModule__play_se_impl(*ppBVar7,HVar4,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack208,iVar1);
          pLVar5 = aLStack208;
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x1896dcd23e);
          HVar4 = lib::L2CValue::as_hash(aLStack96);
          iVar1 = app::lua_bind::SoundModule__play_se_impl(*ppBVar7,HVar4,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack192,iVar1);
          pLVar5 = aLStack192;
        }
      }
      lib::L2CValue::~L2CValue(pLVar5);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_START_SE_COUNTER);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar7,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack160,
                 _FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_FLOAT_GROUND_EFFECT_COUNTER);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar1);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      fVar8 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar8);
      lib::L2CValue::operator-(aLStack128,aLStack160);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,
                 _FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_FLOAT_GROUND_EFFECT_COUNTER);
      fVar8 = (float)lib::L2CValue::as_number(aLStack160);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar3 = lib::L2CValue::operator<=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
        pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
        app::FighterSpecializer_Metaknight::set_special_n_ground_effect(pFVar6);
      }
    }
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

