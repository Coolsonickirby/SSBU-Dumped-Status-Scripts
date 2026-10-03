
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000210d0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  BattleObject **this;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_71000226fc;
  this = &param_2[2].battleObject;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack112,pLVar5);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0x2041e0d192);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  ppBVar8 = &param_2->moduleAccessor;
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0x141a28d9bf);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0x1eff745701);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack192,0x187c1ef75f);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0x16d5f152b5);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack224,0x22c9b49999);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0x228933e5bb);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack256,0x1ffbac0abc);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack256);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack240,fVar9);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack272,0x16a2f66223);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack256,fVar9);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack288,0x19ecf9d8dc);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack288);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack304,0x2388140c3b);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack288,fVar9);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack320,0x199bfee84a);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack320);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack304,fVar9);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack336,0x1f32a7c5bf);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack336);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack320,fVar9);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack336,1.0);
  lib::L2CValue::L2CValue(aLStack352,1.0);
  lib::L2CValue::L2CValue(aLStack368,1.0);
  lib::L2CValue::L2CValue(aLStack384,1.0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar6 = lib::L2CValue::operator<=(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::operator=(aLStack336,pLVar5);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::operator-(pLVar5);
    lib::L2CValue::operator=(aLStack336,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar6 = lib::L2CValue::operator<(aLStack96,aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator=(aLStack352,aLStack96);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator-(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack432,aLStack336);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator+(aLStack96,aLStack416);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack352,aLStack400);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    pLVar5 = aLStack432;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI_FALL);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI_AIR_END);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_7100021808;
  }
  else {
LAB_7100021808:
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator=(aLStack352,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar6 = lib::L2CValue::operator<(aLStack224,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator=(aLStack368,aLStack96);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator-(aLStack96,aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack432,aLStack336);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator-(aLStack96,aLStack416);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack368,aLStack400);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    pLVar5 = aLStack432;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar6 = lib::L2CValue::operator<(aLStack96,aLStack288);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator=(aLStack384,aLStack96);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator-(aLStack288,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack432,aLStack336);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator+(aLStack96,aLStack416);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator=(aLStack384,aLStack400);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    pLVar5 = aLStack432;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::operator*(aLStack272,aLStack352);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack400);
    lib::L2CAgent::push_lua_stack(param_2,aLStack416);
    app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::operator*(aLStack304,aLStack384);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack400);
    app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack400);
LAB_7100021e84:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack400,_GROUND_TOUCH_FLAG_ALL);
    uVar3 = lib::L2CValue::as_integer(aLStack400);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack400);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::operator*(aLStack176,aLStack352);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack400);
      lib::L2CAgent::push_lua_stack(param_2,aLStack416);
      app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::operator*(aLStack160,aLStack352);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack400);
      lib::L2CAgent::push_lua_stack(param_2,aLStack416);
      app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KROOL_STATUS_SPECIAL_HI_INT_BRAKE_AFTER_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack416);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack400,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<=(aLStack400,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator-(aLStack256);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack400);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_HI_INT_BRAKE_AFTER_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar4);
      goto LAB_7100021e84;
    }
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack416);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack400,fVar9);
    lib::L2CValue::L2CValue(aLStack96,10);
    lib::L2CValue::operator*(aLStack240,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator<=(aLStack432,aLStack400);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator*(aLStack144,aLStack368);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack400);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack400);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator-(aLStack256);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack400);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_HI_INT_BRAKE_AFTER_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack416,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack416);
    fVar9 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack400,fVar9);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack400,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      goto LAB_7100021e84;
    }
  }
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack432,0x1c8c5cbf9c);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack432);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack416,fVar9);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::operator*(pLVar5,aLStack416);
  lib::L2CValue::operator+(aLStack400,aLStack432);
  lib::L2CValue::operator=(aLStack400,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack432);
  lib::L2CAgent::push_lua_stack(param_2,aLStack448);
  app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack432);
  lib::L2CAgent::push_lua_stack(param_2,aLStack448);
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar6 = lib::L2CValue::operator==(aLStack400,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_71000220c0:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::operator*(pLVar5,aLStack416);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack432);
    lib::L2CAgent::push_lua_stack(param_2,aLStack448);
    app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack448,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack448);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack432,fVar9);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack432,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
      lib::L2CValue::operator*(pLVar5,aLStack320);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack432);
      lib::L2CAgent::push_lua_stack(param_2,aLStack448);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack448);
      goto LAB_710002220c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator==(aLStack400,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_71000220c0;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    lib::L2CAgent::push_lua_stack(param_2,aLStack432);
    app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
LAB_710002220c:
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack432,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack448,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator*(aLStack432,aLStack432);
  lib::L2CValue::operator*(aLStack448,aLStack448);
  pLVar5 = aLStack496;
  lib::L2CValue::operator+(aLStack480,pLVar5);
  lib::L2CAgent::math_sqrt((L2CAgent *)aLStack96,pLVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar6 = lib::L2CValue::operator<(aLStack448,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack528,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack528);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack512,fVar9);
    lib::L2CValue::operator+(aLStack464,aLStack512);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(aLStack496,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    fVar9 = (float)lib::L2CValue::as_number(aLStack480);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack512);
    pLVar5 = aLStack528;
  }
  else {
    lib::L2CValue::operator-(aLStack464);
    lib::L2CValue::L2CValue(aLStack544,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack544);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack528,fVar9);
    lib::L2CValue::operator+(aLStack512,aLStack528);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(aLStack496,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOVEMENT_Y);
    fVar9 = (float)lib::L2CValue::as_number(aLStack480);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack544);
    pLVar5 = aLStack512;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI_AIR_END);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack608,0x1254e781ec);
      lib::L2CValue::L2CValue(aLStack624,0x14b05fccb8);
      lib::L2CValue::L2CValue(aLStack640,0x14b73208a1);
      FUN_710001e090(param_2,aLStack624,aLStack640);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      pLVar5 = aLStack608;
      goto LAB_7100022640;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI_FALL);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack656,0xfb29587f1);
      lib::L2CValue::L2CValue(aLStack672,0x11a650e3e3);
      lib::L2CValue::L2CValue(aLStack688,0x11a13d27fa);
      FUN_710001e090(param_2,aLStack672,aLStack688);
      lib::L2CValue::~L2CValue(aLStack688);
      lib::L2CValue::~L2CValue(aLStack672);
      pLVar5 = aLStack656;
      goto LAB_7100022640;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack560,0xa28f17495);
    lib::L2CValue::L2CValue(aLStack576,0xc83757482);
    lib::L2CValue::L2CValue(aLStack592,0xc8418b09b);
    FUN_710001e090(param_2,aLStack576,aLStack592);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    pLVar5 = aLStack560;
LAB_7100022640:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71000226fc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

