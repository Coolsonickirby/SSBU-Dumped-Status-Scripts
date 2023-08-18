
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::LandingDamageLight_init
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *this_01;
  long lVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
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
  
  pLVar4 = aLStack400;
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue
            (aLStack224,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  ppBVar8 = &this->moduleAccessor;
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    FUN_710000d730(this);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
    uVar3 = lib::L2CValue::operator__(this_01,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
      goto LAB_710000d2fc;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack224,lVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
    uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
      uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
        uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
          uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1b64c11828);
            lib::L2CValue::operator_(aLStack192,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0xec50d73a9);
            lib::L2CValue::operator_(aLStack208,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x1bfaa2e04f);
            lib::L2CValue::operator_(aLStack192,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0xe5b6e8bce);
            lib::L2CValue::operator_(aLStack208,aLStack112);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1a4262b54f);
          lib::L2CValue::operator_(aLStack192,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0xd5f9a4aee);
          lib::L2CValue::operator_(aLStack208,aLStack112);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1a450f7156);
        lib::L2CValue::operator_(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xd58f78ef7);
        lib::L2CValue::operator_(aLStack208,aLStack112);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x1a4bd4f964);
      lib::L2CValue::operator_(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xd562c06c5);
      lib::L2CValue::operator_(aLStack208,aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xd58f78ef7);
    uVar3 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack240,HVar7);
      lib::L2CValue::L2CValue(aLStack112,0xdbc5d7cc7);
      uVar3 = lib::L2CValue::operator__(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xdcb5a4c51);
        uVar3 = lib::L2CValue::operator__(aLStack240,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0xe4e531eaa);
          lib::L2CValue::operator_(aLStack208,aLStack112);
          goto LAB_710000c7fc;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xe39542e3c);
        lib::L2CValue::operator_(aLStack208,aLStack112);
LAB_710000c7fc:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack240,0);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLAG_SHOOTING);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar3 = lib::L2CValue::operator__(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
      uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
        uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
          uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
            uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar3 & 1) == 0) goto LAB_710000cb70;
            lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack288,0x21065587da);
            uVar3 = lib::L2CValue::as_integer(aLStack272);
            uVar5 = lib::L2CValue::as_integer(aLStack288);
            iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack112,iVar2);
            lib::L2CValue::operator_(aLStack240,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack288,0x2097af9e49);
            uVar3 = lib::L2CValue::as_integer(aLStack272);
            uVar5 = lib::L2CValue::as_integer(aLStack288);
            iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack112,iVar2);
            lib::L2CValue::operator_(aLStack240,aLStack112);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack288,0x2085569af2);
          uVar3 = lib::L2CValue::as_integer(aLStack272);
          uVar5 = lib::L2CValue::as_integer(aLStack288);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
          lib::L2CValue::L2CValue(aLStack112,iVar2);
          lib::L2CValue::operator_(aLStack240,aLStack112);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack288,0x20a0a49384);
        uVar3 = lib::L2CValue::as_integer(aLStack272);
        uVar5 = lib::L2CValue::as_integer(aLStack288);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        lib::L2CValue::operator_(aLStack240,aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
    }
LAB_710000cb70:
    lib::L2CValue::L2CValue(aLStack352,aLStack208);
    lib::L2CValue::L2CValue(aLStack368,aLStack192);
    lib::L2CValue::L2CValue(aLStack384,aLStack240);
    lua2cpp::L2CFighterCommon::sub_landing_attack_air_init
              (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar3 = lib::L2CValue::operator__(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_RUN_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar2);
LAB_710000d2e8:
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
    FUN_710000d730(this);
    this_00 = &this->globalTable;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    uVar3 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_AIR);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack112,fVar9);
        uVar3 = lib::L2CValue::operator_(aLStack112,aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
          fVar9 = (float)lib::L2CValue::as_number(aLStack224);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
          goto LAB_710000c420;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack240,0x18c65c9c58);
        uVar3 = lib::L2CValue::as_integer(aLStack224);
        uVar5 = lib::L2CValue::as_integer(aLStack240);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        uVar3 = lib::L2CValue::operator__(aLStack112,aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
          fVar9 = (float)lib::L2CValue::as_number(aLStack224);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
LAB_710000c420:
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
        }
      }
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
      pLVar4 = aLStack256;
      goto LAB_710000d2fc;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
    uVar3 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
      pLVar4 = aLStack336;
      goto LAB_710000d2fc;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack224,lVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
    uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
      uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
        uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
          uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1b64c11828);
            lib::L2CValue::operator_(aLStack192,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0xec50d73a9);
            lib::L2CValue::operator_(aLStack208,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x1bfaa2e04f);
            lib::L2CValue::operator_(aLStack192,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0xe5b6e8bce);
            lib::L2CValue::operator_(aLStack208,aLStack112);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1a4262b54f);
          lib::L2CValue::operator_(aLStack192,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0xd5f9a4aee);
          lib::L2CValue::operator_(aLStack208,aLStack112);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1a450f7156);
        lib::L2CValue::operator_(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xd58f78ef7);
        lib::L2CValue::operator_(aLStack208,aLStack112);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x1a4bd4f964);
      lib::L2CValue::operator_(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xd562c06c5);
      lib::L2CValue::operator_(aLStack208,aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xd58f78ef7);
    uVar3 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack240,HVar7);
      lib::L2CValue::L2CValue(aLStack112,0xdbc5d7cc7);
      uVar3 = lib::L2CValue::operator__(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xdcb5a4c51);
        uVar3 = lib::L2CValue::operator__(aLStack240,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0xe4e531eaa);
          lib::L2CValue::operator_(aLStack208,aLStack112);
          goto LAB_710000cdc8;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xe39542e3c);
        lib::L2CValue::operator_(aLStack208,aLStack112);
LAB_710000cdc8:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack240,0);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_FLAG_SHOOTING);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar3 = lib::L2CValue::operator__(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
      uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
        uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
          uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
            uVar3 = lib::L2CValue::operator__(aLStack224,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar3 & 1) == 0) goto LAB_710000d0c0;
            lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack288,0x21065587da);
            uVar3 = lib::L2CValue::as_integer(aLStack272);
            uVar5 = lib::L2CValue::as_integer(aLStack288);
            iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack112,iVar2);
            lib::L2CValue::operator_(aLStack240,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack288,0x2097af9e49);
            uVar3 = lib::L2CValue::as_integer(aLStack272);
            uVar5 = lib::L2CValue::as_integer(aLStack288);
            iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack112,iVar2);
            lib::L2CValue::operator_(aLStack240,aLStack112);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack288,0x2085569af2);
          uVar3 = lib::L2CValue::as_integer(aLStack272);
          uVar5 = lib::L2CValue::as_integer(aLStack288);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
          lib::L2CValue::L2CValue(aLStack112,iVar2);
          lib::L2CValue::operator_(aLStack240,aLStack112);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack288,0x20a0a49384);
        uVar3 = lib::L2CValue::as_integer(aLStack272);
        uVar5 = lib::L2CValue::as_integer(aLStack288);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        lib::L2CValue::operator_(aLStack240,aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
    }
LAB_710000d0c0:
    lib::L2CValue::L2CValue(aLStack288,0);
    uVar3 = lib::L2CValue::as_integer(aLStack192);
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar5);
    lib::L2CValue::L2CValue(aLStack272,fVar9);
    lib::L2CValue::operator_(aLStack272,aLStack240);
    lib::L2CValue::operator_(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    uVar3 = lib::L2CValue::operator_(aLStack144,aLStack160);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack144,aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar3 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,aLStack208);
      lib::L2CValue::L2CValue(aLStack320,aLStack144);
      lua2cpp::L2CFighterCommon::sub_get_landing_motion_rate(this,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack272,false);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack272);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar3 = lib::L2CValue::operator__(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_RUN_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar2);
      goto LAB_710000d2e8;
    }
  }
  lib::L2CValue::_L2CValue(aLStack240);
  pLVar4 = aLStack224;
LAB_710000d2fc:
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

