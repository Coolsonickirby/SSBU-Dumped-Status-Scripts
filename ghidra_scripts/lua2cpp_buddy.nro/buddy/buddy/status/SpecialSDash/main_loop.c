
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSDash_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) goto LAB_7100023680;
  FUN_7100024430(this);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x936733ce1);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack128);
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar7 = lib::L2CValue::operator__(aLStack96,pLVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    goto LAB_7100023670;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    bVar2 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_WALL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          goto LAB_7100023670;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_WALL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
LAB_7100023670:
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
LAB_7100023680:
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          return;
        }
      }
    }
  }
  FUN_7100020f90(this);
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x1df7e26482);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_PREV);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack160,aLStack144);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack160);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0x17a26fc33e);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      uVar8 = lib::L2CValue::as_integer(aLStack208);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      uVar7 = lib::L2CValue::operator_(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_S_WALL);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        pLVar6 = aLStack128;
        goto LAB_7100023ff4;
      }
    }
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack144);
    if ((uVar7 & 1) == 0) {
      fVar11 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack208,fVar11);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,-1);
      lib::L2CValue::L2CValue(aLStack224,fVar11);
      lib::L2CValue::operator_(aLStack208,aLStack224);
      lib::L2CValue::L2CValue(aLStack240,false);
      fVar11 = (float)lib::L2CValue::as_number(aLStack192);
      bVar2 = lib::L2CValue::as_bool(aLStack240);
      bVar2 = app::lua_bind::GroundModule__is_still_on_floor_impl
                        (*ppBVar10,fVar11,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((bVar1 & 1U) != 0) goto LAB_7100023ac8;
    }
    else {
LAB_7100023ac8:
      lib::L2CValue::operator_(aLStack176);
      lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack224,0x1757db5b57);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      uVar8 = lib::L2CValue::as_integer(aLStack224);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack192,fVar11);
      uVar7 = lib::L2CValue::operator_(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        FUN_7100024650(this);
      }
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack144,0xe3d6acb62);
  lib::L2CValue::L2CValue(aLStack160,0x127f383ead);
  lib::L2CValue::L2CValue(aLStack176,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (this,(L2CValue)0x30,(L2CValue)0x20);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar1 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      FUN_7100024650(this);
    }
    lib::L2CValue::L2CValue(aLStack240,true);
    FUN_71000214a0(this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  FUN_7100022790(this);
  FUN_71000231a0(this);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_CLIFF_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
LAB_7100023dbc:
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xf0);
  }
  else {
    lib::L2CValue::operator_(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((bVar1 & 1U) == 0) goto LAB_7100023dbc;
    lib::L2CValue::L2CValue(aLStack272,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xf0);
  }
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,HVar9);
    lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack320,0x165b1dc489);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack288,fVar11);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_MOTION_RATE);
    lua2cpp::L2CFighterCommon::set_speed_ratio(this,(L2CValue)0xa0,(L2CValue)0xe0,(L2CValue)0xb0);
  }
  else {
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,HVar9);
    lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack320,0x195db404ca);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack288,fVar11);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_MOTION_RATE);
    lua2cpp::L2CFighterCommon::set_speed_ratio(this,(L2CValue)0xa0,(L2CValue)0xe0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_MOTION_RATE);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack320,fVar11);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack368,fVar11);
  lib::L2CValue::operator_(aLStack320,aLStack368);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack352);
  fVar11 = (float)lib::L2CValue::as_number(aLStack304);
  app::lua_bind::MotionModule__set_rate_impl(*ppBVar10,fVar11);
  fVar11 = (float)lib::L2CValue::as_number(aLStack304);
  app::lua_bind::MotionModule__set_rate_2nd_impl(*ppBVar10,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  pLVar6 = aLStack304;
LAB_7100023ff4:
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

