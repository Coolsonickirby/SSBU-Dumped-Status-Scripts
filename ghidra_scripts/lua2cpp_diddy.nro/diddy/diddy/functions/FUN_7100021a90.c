
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021a90(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
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
  L2CValue aLStack80 [16];
  
  ppBVar9 = &param_1->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_situation_changed_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack160,0);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator-(aLStack128);
      lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack208,0x1d8f188461);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::operator*(aLStack112,aLStack176);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack192,0x27e927c55d);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::operator*(aLStack112,aLStack160);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,0xbcd2c83a6);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0x1183ff9f6a);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack192,0x27e927c55d);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::operator*(aLStack112,aLStack160);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  else {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      FUN_7100023170(param_1);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDIY_STATUS_SPECIAL_HI_WORK_FLOAT_MOTION_VALUE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::~L2CValue(aLStack80);
  fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::L2CValue(aLStack80,0.9);
  lib::L2CValue::operator*(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  fVar10 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator+(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.1);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) == 0) {
        fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::L2CValue(aLStack80,-1.9);
        lib::L2CValue::operator-(aLStack80,aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::operator=(aLStack112,aLStack128);
        goto LAB_7100022264;
      }
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      lib::L2CValue::operator=(aLStack112,aLStack80);
LAB_71000221d0:
      pLVar7 = aLStack80;
    }
    else {
      fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator-(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.1);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,1.0);
        lib::L2CValue::operator=(aLStack112,aLStack80);
        goto LAB_71000221d0;
      }
      fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::L2CValue(aLStack80,1.9);
      lib::L2CValue::operator-(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack112,aLStack128);
LAB_7100022264:
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar7 = aLStack144;
    }
    lib::L2CValue::~L2CValue(pLVar7);
  }
  lib::L2CValue::operator-(aLStack112,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack192,0x1ba1ca146b);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::operator*(aLStack128,aLStack160);
  lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0x19c31ed02c);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::operator/(aLStack144,aLStack208);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::operator+(aLStack96,aLStack128);
  pLVar7 = aLStack80;
  lib::L2CValue::operator=(aLStack96,pLVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar7);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDIY_STATUS_SPECIAL_HI_WORK_FLOAT_MOTION_VALUE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack176,0xce9220bd5);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar10);
  uVar4 = lib::L2CValue::operator<(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator-(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar10 = (float)app::lua_bind::MotionModule__prev_weight_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator-(aLStack176,aLStack80);
    fVar10 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::MotionModule__set_weight_rate_impl(*ppBVar9,fVar10);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDIY_STATUS_SPECIAL_HI_WORK_INT_MOTION_KIND_2ND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar7 = aLStack80;
    goto LAB_71000228e8;
  }
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x176a1e73ef);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x176d73b7f6);
    lib::L2CValue::operator=(aLStack176,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x131d943d29);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x131af9f930);
    lib::L2CValue::operator=(aLStack176,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDIY_STATUS_SPECIAL_HI_WORK_INT_MOTION_KIND_2ND);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack192,lVar6);
  lib::L2CValue::~L2CValue(aLStack80);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack240,fVar10);
  lib::L2CValue::operator*(aLStack96,aLStack240);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack224);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar7 = aLStack160;
  if ((uVar4 & 1) == 0) {
    pLVar7 = aLStack176;
  }
  lib::L2CValue::L2CValue(aLStack208,pLVar7);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  uVar4 = lib::L2CValue::operator==(aLStack192,aLStack208);
  if ((uVar4 & 1) == 0) {
LAB_7100022738:
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    HVar8 = lib::L2CValue::as_hash(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__add_motion_2nd_impl(*ppBVar9,HVar8,fVar10,1.0,false,1.0);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = app::lua_bind::StatusModule__is_situation_changed_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_MOTION_WEIGHT);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      fVar10 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_weight_impl(*ppBVar9,fVar10,true);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDIY_STATUS_SPECIAL_HI_WORK_INT_MOTION_KIND_2ND);
    lVar6 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    HVar8 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack224,HVar8);
    lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
    uVar4 = lib::L2CValue::operator==(aLStack224,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar4 & 1) != 0) goto LAB_7100022738;
  }
  bVar1 = app::lua_bind::StatusModule__is_situation_changed_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator-(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar10 = (float)app::lua_bind::MotionModule__prev_weight_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator-(aLStack240,aLStack80);
    fVar10 = (float)lib::L2CValue::as_number(aLStack224);
    app::lua_bind::MotionModule__set_weight_rate_impl(*ppBVar9,fVar10);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack240);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar7 = aLStack160;
LAB_71000228e8:
  lib::L2CValue::~L2CValue(pLVar7);
  fVar10 = (float)app::lua_bind::MotionModule__weight_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  HVar8 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack176,HVar8);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack224,0x19c31ed02c);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar10);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator-(aLStack80,aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator*(aLStack192,aLStack240);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::operator*(aLStack96,aLStack208);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,90.0);
    lib::L2CValue::operator+(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator=(aLStack176,aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,90.0);
    lib::L2CValue::operator-(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator=(aLStack176,aLStack192);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_UPPER_START_ANGLE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack176);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

