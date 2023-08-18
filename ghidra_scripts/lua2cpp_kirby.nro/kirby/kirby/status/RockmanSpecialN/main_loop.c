
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RockmanSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CAgent *this_00;
  Hash40 HVar9;
  L2CValue *in_x2;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  undefined auStack208 [32];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_STATUS_START_TURN_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  ppBVar10 = &this->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
LAB_710018cd48:
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack144;
LAB_710018cd54:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack208 + 0x10),
               _FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_FRAME_END);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      goto LAB_710018cd48;
    }
    lib::L2CValue::L2CValue
              (aLStack224,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_ACCEPT);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      pLVar1 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
      lib::L2CValue::operator_(pLVar7,pLVar8);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
      lib::L2CValue::operator_(pLVar7,pLVar8);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack112,0.1225);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) goto LAB_710018cd58;
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
      lib::L2CValue::operator_(pLVar7,aLStack128);
      pLVar7 = aLStack112;
      lib::L2CAgent::math_atan(this_00,pLVar7,in_x2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,112.5);
      lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar7);
      pLVar7 = aLStack144;
      uVar6 = lib::L2CValue::operator__(aLStack112,pLVar7);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack208,-112.5);
        lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar7);
        uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)(auStack208 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        if ((uVar6 & 1) != 0) goto LAB_710018d80c;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
LAB_710018d80c:
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_TURN_MOTION);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,true);
        lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator_(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLOAT_STICK_X);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator_(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLOAT_STICK_Y);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_STICK_CHECK_ACCEPT);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar7 = aLStack128;
      goto LAB_710018cd54;
    }
  }
LAB_710018cd58:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710018cd94;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710018cd9c;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack144,false);
  }
  else {
LAB_710018cd94:
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710018cd9c:
    lib::L2CValue::L2CValue(aLStack144,true);
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  if ((bVar3 & 1U) == 0) {
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar3 & 1U) != 0) goto LAB_710018cee0;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack144);
LAB_710018cee0:
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_TURN_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack128);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_ALREADY_EXIST_METALBLADE)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x14aa618c44);
        lib::L2CValue::operator_((L2CValue *)auStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x18d811618f);
        lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xe396c1260);
        lib::L2CValue::operator_((L2CValue *)auStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x127b3ee7af);
        lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack112);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_ALREADY_EXIST_METALBLADE)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xfcdd4c4a8);
        lib::L2CValue::operator_((L2CValue *)auStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x13c64d497c);
        lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
        lib::L2CValue::operator_((L2CValue *)auStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
        lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack112);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack240,(L2CValue *)auStack176);
    lib::L2CValue::L2CValue(aLStack256,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_FIRST);
    lib::L2CValue::L2CValue(aLStack320,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      iVar4 = lib::L2CValue::as_integer(aLStack288);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack304);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar9 = lib::L2CValue::as_hash(aLStack256);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        bVar2 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
      }
      else {
        HVar9 = lib::L2CValue::as_hash(aLStack256);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      GVar5 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
      iVar4 = lib::L2CValue::as_integer(aLStack304);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar9 = lib::L2CValue::as_hash(aLStack240);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        bVar2 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
      }
      else {
        HVar9 = lib::L2CValue::as_hash(aLStack240);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xb0);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack336);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710018d794;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710018d794;
      }
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack368,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710018d794;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack400,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710018d794;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710018d794:
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  return;
}

