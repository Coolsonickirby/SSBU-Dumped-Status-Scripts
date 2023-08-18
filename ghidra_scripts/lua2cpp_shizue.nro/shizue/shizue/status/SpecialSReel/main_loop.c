
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSReel_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  undefined8 *this_00;
  L2CValue *this_01;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong uVar10;
  long lVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  this_00 = &this[1].field_0x30;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6017d9eb2);
  lib::L2CValue::L2CValue(aLStack208,pLVar6);
  FUN_7100026d30(aLStack112,this);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6017d9eb2);
  lib::L2CValue::operator_(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  ppBVar12 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    this_01 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x17);
    uVar7 = lib::L2CValue::operator__(pLVar6,pLVar8);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      lVar11 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack144,lVar11);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_FALL);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1216b6effc);
        lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1546d1fbf4);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_HI);
        lVar11 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x15d8b20393);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_LW);
        lVar11 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x11308c0feb);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x11aeeff78c);
          uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) goto LAB_7100027308;
          lib::L2CValue::L2CValue(aLStack112,0x15d8b20393);
          lib::L2CValue::operator_(aLStack144,aLStack112);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1546d1fbf4);
          lib::L2CValue::operator_(aLStack144,aLStack112);
        }
LAB_7100027300:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
        GVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xe54e41a33);
        lib::L2CValue::operator_(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x11308c0feb);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_HI);
        lVar11 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x11aeeff78c);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_LW);
        lVar11 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1546d1fbf4);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x11308c0feb);
          lib::L2CValue::operator_(aLStack144,aLStack112);
          goto LAB_7100027300;
        }
        lib::L2CValue::L2CValue(aLStack112,0x15d8b20393);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x11aeeff78c);
          lib::L2CValue::operator_(aLStack144,aLStack112);
          goto LAB_7100027300;
        }
      }
LAB_7100027308:
      lib::L2CValue::L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,fVar15);
        lib::L2CValue::operator_(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      HVar9 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                (*ppBVar12,HVar9,-1.0,1.0,0.0);
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,fVar15);
        fVar15 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack176,fVar15);
        lib::L2CValue::L2CValue(aLStack192,true);
        HVar9 = lib::L2CValue::as_hash(aLStack144);
        fVar15 = (float)lib::L2CValue::as_number(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        fVar14 = (float)lib::L2CValue::as_number(aLStack160);
        app::lua_bind::MotionModule__add_motion_2nd_impl
                  (*ppBVar12,HVar9,fVar15,fVar13,(bool)(bVar1 & 1),fVar14);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
        lVar11 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack224,true);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,false);
    }
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6017d9eb2);
    lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0xfa7c88e43);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    uVar10 = lib::L2CValue::as_integer(aLStack176);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack144,fVar15);
    lib::L2CValue::L2CValue(aLStack112,10.0);
    lib::L2CValue::operator_(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,true);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002805c;
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar6 = aLStack112;
  uVar7 = lib::L2CValue::operator__(aLStack128,pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
    lib::L2CValue::L2CValue
              (aLStack112,
               FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N | _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N |
               FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S | _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI |
               _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
    pLVar6 = aLStack112;
    lib::L2CValue::operator_(pLVar8,pLVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_HOOK);
      lib::L2CValue::L2CValue(aLStack288,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      goto LAB_710002805c;
    }
  }
  fVar15 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack144,fVar15);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar6);
  lib::L2CValue::L2CValue(aLStack112,1e-05);
  uVar7 = lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x10913b7dca);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar10 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    uVar7 = lib::L2CValue::operator__(aLStack112,pLVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0xae703c2bf);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar10 = lib::L2CValue::as_integer(aLStack128);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack304,fVar15);
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_SHIZUE_FISHINGROD_STATUS_KIND_REEL);
      lib::L2CValue::L2CValue(aLStack336,false);
      FUN_7100022200(this,aLStack304,aLStack320,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      fVar15 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar12,fVar15);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      lVar11 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack128,lVar11);
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,fVar15);
        fVar15 = (float)lib::L2CValue::as_number(aLStack112);
        app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar12,fVar15);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002805c;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6017d9eb2);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb7ef04c09);
  lib::L2CValue::operator_(pLVar6,pLVar8);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
  lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack176,0x131bb1c786);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  uVar10 = lib::L2CValue::as_integer(aLStack176);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar10);
  lib::L2CValue::L2CValue(aLStack144,fVar15);
  uVar7 = lib::L2CValue::operator_(aLStack112,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,true);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_REEL_STOP_FRAME)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar7 = lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_REEL_MOTION_RATE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack112,fVar15);
      fVar15 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar12,fVar15);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      lVar11 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack128,lVar11);
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,fVar15);
        fVar15 = (float)lib::L2CValue::as_number(aLStack112);
        app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar12,fVar15);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,-1);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_REEL_STOP_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb7ef04c09);
    lib::L2CValue::operator_(pLVar6,aLStack208);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_REEL_STOP_FRAME)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar7 = lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x152d528a21);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      uVar10 = lib::L2CValue::as_integer(aLStack144);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar15);
      fVar15 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar12,fVar15);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      lVar11 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack128,lVar11);
      lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        fVar15 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,fVar15);
        fVar15 = (float)lib::L2CValue::as_number(aLStack112);
        app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar12,fVar15);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x15283722fd);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      uVar10 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_REEL_STOP_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_GUARD);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_REEL_STOP_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar12,iVar4,0);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,true);
        goto LAB_7100027fec;
      }
    }
    lib::L2CValue::L2CValue(aLStack144,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,true);
  }
LAB_7100027fec:
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CUT);
    lib::L2CValue::L2CValue(aLStack368,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_710002805c:
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

