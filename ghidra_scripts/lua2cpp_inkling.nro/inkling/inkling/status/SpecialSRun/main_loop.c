
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSRun_main_loop(L2CFighterInkling *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  float fVar11;
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [16];
  undefined auStack400 [32];
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
  
  FUN_710001f950(this);
  FUN_71000258d0(this);
  lib::L2CValue::L2CValue(aLStack112,0xde837a165);
  lib::L2CValue::L2CValue(aLStack128,0x11085a024c);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_710001cbc0(this,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_7100006390(aLStack160,this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,0x35076a4c0);
    lib::L2CValue::L2CValue(aLStack240,0x7201d1734);
    lib::L2CValue::L2CValue(aLStack256,false);
    FUN_710001cfc0(this,aLStack224,aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lVar1 = -0xd0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0xa67140f8a);
    lib::L2CValue::L2CValue(aLStack192,0xa67140f8a);
    lib::L2CValue::L2CValue(aLStack208,false);
    FUN_710001cfc0(this,aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lVar1 = -0xa0;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_TYPE_MOTION);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
  lib::L2CValue::L2CValue(aLStack304,false);
  FUN_7100023cc0(this,aLStack272,aLStack288,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  FUN_71000265a0(this);
  FUN_7100020d50(aLStack160,this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_STOP_WALL);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack480,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_STOP_WALL);
      lib::L2CValue::L2CValue(aLStack496,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024a00;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack368,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
    fVar11 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar11);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    pLVar9 = aLStack96;
    lib::L2CValue::operator_(aLStack336,pLVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_rad((L2CAgent *)auStack416,pLVar9);
    lib::L2CAgent::math_sin((L2CAgent *)auStack400,pLVar9);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    lib::L2CValue::L2CValue(aLStack432,FIGHTER_KINETIC_TYPE_MOTION);
    lib::L2CValue::L2CValue(aLStack448,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    lib::L2CValue::L2CValue(aLStack464,false);
    FUN_7100023cc0(this,aLStack432,aLStack448,aLStack464);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
  }
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack96,1);
  uVar8 = lib::L2CValue::operator__(aLStack96,pLVar9);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar8 = lib::L2CValue::operator__(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack368,_GROUND_TOUCH_FLAG_RIGHT_SIDE);
      uVar7 = lib::L2CValue::as_integer(aLStack368);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar7);
      lib::L2CValue::L2CValue(aLStack352,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack352);
      if ((bVar3 & 1U) == 0) {
        bVar3 = true;
        goto LAB_71000247bc;
      }
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack336);
LAB_7100024868:
      lib::L2CValue::L2CValue(aLStack512,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_STOP_WALL);
      lib::L2CValue::L2CValue(aLStack528,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024a00;
    }
    bVar3 = false;
LAB_71000247bc:
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar11);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if (bVar3) {
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack368);
      }
      lib::L2CValue::_L2CValue(aLStack336);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack400,_GROUND_TOUCH_FLAG_LEFT_SIDE);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack400);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar7);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack400);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      if (bVar3) {
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack368);
      }
      lib::L2CValue::_L2CValue(aLStack336);
      if ((bVar4 & 1U) != 0) goto LAB_7100024868;
    }
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0xdd683f82d);
  uVar8 = lib::L2CValue::as_integer(aLStack336);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack400 + 0x10));
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack96,iVar6);
  uVar8 = lib::L2CValue::operator_(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue(aLStack336);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100024a00;
  }
  FUN_7100006390(aLStack336,this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator__(aLStack336,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack544,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
    lib::L2CValue::L2CValue(aLStack560,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100024a00;
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    FUN_7100023670(aLStack96,this);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
      iVar6 = lib::L2CValue::as_integer(aLStack336);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack336);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack704,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack720,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack720);
        pLVar9 = aLStack704;
      }
      else {
        lib::L2CValue::L2CValue(aLStack672,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_JUMP_END);
        lib::L2CValue::L2CValue(aLStack688,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack688);
        pLVar9 = aLStack672;
      }
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024a00;
    }
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar8 = lib::L2CValue::operator__(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      bVar3 = false;
LAB_7100024e30:
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar11);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack400,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar11);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar8 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack416);
        uVar8 = uVar8 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack400);
      if (bVar3) {
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      }
      lib::L2CValue::_L2CValue(aLStack336);
      if ((uVar8 & 1) == 0) goto LAB_7100025140;
    }
    else {
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        bVar3 = true;
        goto LAB_7100024e30;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue(aLStack336);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack736,0x13ea40dd0b);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    uVar10 = lib::L2CValue::as_integer(aLStack736);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar11);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)auStack400);
    lib::L2CValue::operator_(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue(aLStack736);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack400);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::L2CValue(aLStack752,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
    lib::L2CValue::L2CValue(aLStack768,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack768);
    lib::L2CValue::_L2CValue(aLStack752);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack336);
    goto LAB_7100024a00;
  }
  FUN_7100023670(aLStack96,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP_END);
    iVar6 = lib::L2CValue::as_integer(aLStack336);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack608,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack624,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack624);
      pLVar9 = aLStack608;
    }
    else {
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_JUMP_END);
      lib::L2CValue::L2CValue(aLStack592,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack592);
      pLVar9 = aLStack576;
    }
    lib::L2CValue::_L2CValue(pLVar9);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100024a00;
  }
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_INT_AFTER_TURN_FRAME);
  iVar6 = lib::L2CValue::as_integer(aLStack336);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack400,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0x11e7d65f61);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack400);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),iVar6);
  uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack400 + 0x10),aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  lib::L2CValue::_L2CValue((L2CValue *)auStack400);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((uVar8 & 1) != 0) {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar8 = lib::L2CValue::operator__(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      bVar3 = false;
LAB_7100025058:
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar11);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack400,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar11);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar8 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack416);
        uVar8 = uVar8 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack400);
      if (bVar3) {
        lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      }
      lib::L2CValue::_L2CValue(aLStack336);
      if ((uVar8 & 1) == 0) goto LAB_7100025140;
    }
    else {
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack400 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        bVar3 = true;
        goto LAB_7100025058;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
      lib::L2CValue::_L2CValue(aLStack336);
    }
    lib::L2CValue::L2CValue(aLStack640,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN_TURN);
    lib::L2CValue::L2CValue(aLStack656,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100024a00;
  }
LAB_7100025140:
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack336,fVar11);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar8 = lib::L2CValue::operator__(aLStack336,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    bVar3 = false;
LAB_71000251d0:
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar11);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack416,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack736,fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack736);
      uVar8 = uVar8 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack736);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    if (bVar3) {
      lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    }
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024a00;
    }
  }
  else {
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack400,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      bVar3 = true;
      goto LAB_71000251d0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue(aLStack336);
  }
  lib::L2CValue::L2CValue(aLStack784,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
  lib::L2CValue::L2CValue(aLStack800,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack800);
  lib::L2CValue::_L2CValue(aLStack784);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100024a00:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

