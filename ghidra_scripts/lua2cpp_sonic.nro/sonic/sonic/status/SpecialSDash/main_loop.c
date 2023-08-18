
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialSDash_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  HitStatus HVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  ppBVar11 = &this->moduleAccessor;
  bVar3 = app::lua_bind::StopModule__is_stop_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  bVar4 = (bVar4 & 1U) == 0;
  if (bVar4) {
    bVar3 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  }
  else {
    bVar3 = 1;
  }
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if (bVar4) {
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_WORK_INT_ADVANCE_COUNTER);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar8 = lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001abe4;
  }
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_RIGHT);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack208,fVar12);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator_(aLStack96,aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_REBOUND);
        lib::L2CValue::L2CValue(aLStack240,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '0'),(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001abe4;
      }
    }
    lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_LEFT);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack208,fVar12);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator_(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_REBOUND);
        lib::L2CValue::L2CValue(aLStack272,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001abe4;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar8 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    FUN_710001aff0(aLStack96,this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_INFLICT_OCCUR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_SONIC_STATUS_KIND_SPIN_JUMP);
        lib::L2CValue::L2CValue(aLStack304,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001abe4;
      }
    }
  }
  FUN_7100015020(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001abe4;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_HOP_WAIT_MTRANS);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar4 & 1U) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack96,2.0);
    uVar8 = lib::L2CValue::operator_(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001abe4;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001abe4;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_HOP_WAIT_MTRANS);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    FUN_7100019b20(this);
  }
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_WORK_INT_WAIT_MTRANS_TYPE)
  ;
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar5);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_WAIT_MTRANS_TYPE_SITUATION_GROUND);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_WAIT_MTRANS_TYPE_SITUATION_AIR);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack208,1);
          goto LAB_710001a628;
        }
      }
    }
LAB_710001a61c:
    lib::L2CValue::L2CValue(aLStack208,0);
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) goto LAB_710001a61c;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) goto LAB_710001a61c;
    lib::L2CValue::L2CValue(aLStack208,1);
  }
LAB_710001a628:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar8 = lib::L2CValue::operator__(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar8 & 1) == 0) {
    FUN_7100019b20(this);
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    pLVar9 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
    fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,(int)pLVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar12);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar9);
    lib::L2CValue::L2CValue(aLStack320,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack336,0x19beed7280);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    uVar10 = lib::L2CValue::as_integer(aLStack336);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
    lib::L2CValue::L2CValue(aLStack208,fVar12);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack368,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710001abe4;
    }
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::operator_(pLVar9,aLStack128);
    lib::L2CValue::L2CValue(aLStack320,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack336,0xcee0a3848);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    uVar10 = lib::L2CValue::as_integer(aLStack336);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
    lib::L2CValue::L2CValue(aLStack208,fVar12);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack208);
    if ((uVar8 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH);
      lib::L2CValue::operator_(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack384);
      lib::L2CValue::_L2CValue(aLStack384);
    }
    else {
      bVar3 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar9 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,(int)pLVar9);
      lib::L2CValue::L2CValue(aLStack112,fVar12);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar9);
      lib::L2CValue::L2CValue(aLStack320,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack336,0x19f6fb9072);
      uVar8 = lib::L2CValue::as_integer(aLStack320);
      uVar10 = lib::L2CValue::as_integer(aLStack336);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
      lib::L2CValue::L2CValue(aLStack208,fVar12);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_TURN);
        lib::L2CValue::L2CValue(aLStack448,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack400,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack416,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      goto LAB_710001abe4;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_MAX_CHARGE);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lVar2 = -0x70;
LAB_710001abd4:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_MAX_CHARGE_HIT_XLU)
    ;
    iVar5 = lib::L2CValue::as_integer(aLStack320);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0x1f710af228);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      uVar10 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar8,uVar10);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      uVar8 = lib::L2CValue::operator_(aLStack96,pLVar9);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_NORMAL);
        HVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::HitModule__set_whole_impl(*ppBVar11,HVar7,0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_SONIC_STATUS_SPECIAL_S_DASH_FLAG_MAX_CHARGE_HIT_XLU);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
        lVar2 = -0x50;
        goto LAB_710001abd4;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001abe4:
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

