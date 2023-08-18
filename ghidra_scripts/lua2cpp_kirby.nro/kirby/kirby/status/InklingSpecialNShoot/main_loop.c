
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::InklingSpecialNShoot_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack128,0x10a7ef0a4a);
  lib::L2CValue::L2CValue(aLStack144,0x14265a850a);
  lib::L2CValue::L2CValue(aLStack160,true);
  FUN_710016e110(this,aLStack128,aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710016e8b0(this);
  bVar2 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) goto LAB_710016fa7c;
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_DEGREE);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0x121faf5a2d);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0x14dfe6988c);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0x19c283ff05);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack240,fVar9);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack272,0x1b35ba462e);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::operator_(aLStack192,aLStack240);
  fVar9 = (float)app::lua_bind::SlowModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::operator_(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack272,aLStack176);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_INKLING_STATUS_SPECIAL_N_FLAG_CAN_CHANGE_ANGLE);
  iVar4 = lib::L2CValue::as_integer(aLStack288);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::operator_(aLStack176,aLStack256);
    lib::L2CValue::operator_(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  uVar5 = lib::L2CValue::operator_(aLStack208,aLStack272);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator_(aLStack224);
    uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator_(aLStack224);
      lib::L2CValue::operator_(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack272,aLStack208);
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_DEGREE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack288);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator_(aLStack272);
      lib::L2CValue::operator_(aLStack320,aLStack224);
      lib::L2CValue::operator_(aLStack304,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar1 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar4 = FIGHTER_KIND_KIRBY;
      if ((uVar5 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,2);
        lib::L2CValue::L2CValue(aLStack112,iVar4);
        uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x14c68f6c14);
          lib::L2CValue::operator_(aLStack288,aLStack112);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1cfbc33afd);
          lib::L2CValue::operator_(aLStack288,aLStack112);
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,2);
        lib::L2CValue::L2CValue(aLStack112,iVar4);
        uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x10473ae354);
          lib::L2CValue::operator_(aLStack288,aLStack112);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x185dcfd808);
          lib::L2CValue::operator_(aLStack288,aLStack112);
        }
      }
      goto LAB_710016f8e8;
    }
  }
  else {
    lib::L2CValue::operator_(aLStack272,aLStack208);
    lib::L2CValue::operator_(aLStack304,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar4 = FIGHTER_KIND_KIRBY;
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,2);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x14ac3f4ce6);
        lib::L2CValue::operator_(aLStack288,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1c91731a0f);
        lib::L2CValue::operator_(aLStack288,aLStack112);
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,2);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x102d8ac3a6);
        lib::L2CValue::operator_(aLStack288,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x18377ff8fa);
        lib::L2CValue::operator_(aLStack288,aLStack112);
      }
    }
LAB_710016f8e8:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  HVar8 = app::lua_bind::MotionModule__motion_kind_2nd_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,HVar8);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack288);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack320,fVar9);
    fVar9 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar9);
    lib::L2CValue::L2CValue(aLStack352,true);
    HVar8 = lib::L2CValue::as_hash(aLStack288);
    fVar9 = (float)lib::L2CValue::as_number(aLStack320);
    fVar10 = (float)lib::L2CValue::as_number(aLStack336);
    bVar2 = lib::L2CValue::as_bool(aLStack352);
    fVar11 = (float)lib::L2CValue::as_number(aLStack304);
    app::lua_bind::MotionModule__add_motion_2nd_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar2 & 1),fVar11);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack304);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack368);
    app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar9,true);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack112,aLStack304);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar9 = (float)lib::L2CValue::as_number(aLStack320);
    app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar9,true);
  }
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
LAB_710016fa7c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

