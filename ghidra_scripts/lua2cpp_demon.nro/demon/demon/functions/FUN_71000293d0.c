
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000293d0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  long lVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710002951c;
    }
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_7100029f34;
  }
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710002951c:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar7 = aLStack224;
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack208);
      pLVar7 = aLStack192;
    }
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_7100029f34;
  }
  this = &param_2->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    bVar1 = lib::L2CValue::operator==(pLVar7,aLStack96);
    bVar1 = bVar1 ^ 1;
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    bVar1 = lib::L2CValue::operator==(pLVar7,aLStack96);
    bVar1 = bVar1 ^ 1;
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if (((bVar2 & 1U) != 0) ||
     (bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144), (bVar2 & 1U) != 0)) {
    lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack272);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator=(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack272);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator=(aLStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack288,aLStack112);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(param_2,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack320,param_3);
  lib::L2CValue::L2CValue(aLStack336,param_4);
  lib::L2CValue::L2CValue(aLStack352,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (param_2,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if (((bVar2 & 1U) != 0) ||
     (bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144), (bVar2 & 1U) != 0)) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack384);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack368,fVar9);
    lib::L2CValue::operator-(aLStack368,aLStack176);
    lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack432);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack416,fVar9);
    lib::L2CValue::operator-(aLStack416,aLStack256);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack400);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1608994192);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack272,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xe);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator+(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator<=(aLStack272,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x154540af28);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack368,fVar9);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1900b3b5b6);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack384,fVar9);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack416,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack432,0);
      uVar6 = lib::L2CValue::as_integer(aLStack416);
      uVar8 = lib::L2CValue::as_integer(aLStack432);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack368,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator*(aLStack368,aLStack400);
        lib::L2CValue::operator=(aLStack400,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack432,0);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack432);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack416,fVar9);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack384,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator*(aLStack384,aLStack416);
        lib::L2CValue::operator=(aLStack416,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack400);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack416);
      app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack416);
      app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
    }
    lib::L2CValue::~L2CValue(aLStack272);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(aLStack272,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_7100029e3c:
    pLVar7 = aLStack272;
LAB_7100029f04:
    lib::L2CValue::~L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100029e04;
      lib::L2CValue::~L2CValue(aLStack272);
LAB_7100029e84:
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar4);
      }
      pLVar7 = aLStack96;
      goto LAB_7100029f04;
    }
LAB_7100029e04:
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_7100029e3c;
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar6 & 1) != 0) goto LAB_7100029e84;
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_7100029f34:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

