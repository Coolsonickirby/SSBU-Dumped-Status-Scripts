
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b000(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
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
  
  ppBVar9 = &param_1->moduleAccessor;
  uVar12 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar9,-1);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack160);
  lib::L2CValue::L2CValue(aLStack112,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack224,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0xd20cd6527);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack192,HVar7);
      lib::L2CValue::L2CValue(aLStack96,0x18a0fd39ca);
      uVar6 = lib::L2CValue::operator==(aLStack192,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710001b34c;
      lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      lib::L2CValue::L2CValue(aLStack208,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      bVar1 = lib::L2CValue::as_bool(aLStack208);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar11,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
LAB_710001b34c:
      lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_FLAG_MOTION_TRANSITION_TERM_ID_MOT_END
              );
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MTRANS);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar2);
    goto LAB_710001b660;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
  GVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,HVar7);
  lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack192,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0x1cb3ed3dec);
    uVar6 = lib::L2CValue::operator==(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710001b2b8;
    lib::L2CValue::L2CValue(aLStack96,0xd20cd6527);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar7,fVar11,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_710001b2b8:
    lib::L2CValue::L2CValue(aLStack96,0xd20cd6527);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_FLAG_MOTION_TRANSITION_TERM_ID_MOT_END);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MTRANS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar2);
LAB_710001b660:
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x13a817e3eb);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack208,0xfc6a9b0eb);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar8 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x13fc7c71ec);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::operator*(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    lib::L2CAgent::push_lua_stack(param_1,aLStack256);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x16c9cdfd5d);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack208,0x12c8962397);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar8 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::operator*(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,-1.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

