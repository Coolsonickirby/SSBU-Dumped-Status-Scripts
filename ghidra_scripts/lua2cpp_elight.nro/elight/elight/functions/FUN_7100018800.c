
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018800(L2CAgent *param_1,L2CValue *param_2)

{
  long lVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *this;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
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
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1213e64345);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1213e64345);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0xf0ad3ce1d);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0xf7025be11);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0x1220fc2660);
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator*(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0xf25ec86be);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator*(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0xf71f4d4f8);
    lib::L2CValue::L2CValue(aLStack208,0);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::operator*(aLStack176,aLStack128);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    app::sv_kinetic_energy::controller_set_accel_x_mul(param_1->luaStateAgent);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    app::sv_kinetic_energy::controller_set_accel_x_add(param_1->luaStateAgent);
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack192,0xf37b3e7ad);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack208,0xf4d4597a1);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar8);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack224,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack240,0);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::operator*(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack256,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack272,0);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar8);
      lib::L2CValue::operator-(aLStack240);
      lib::L2CValue::operator*(aLStack224,aLStack176);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack224,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack192);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      fVar8 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lVar1 = -0x60;
  }
  else {
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xe51b4b68a);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xe51b4b68a);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lVar1 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  FUN_7100002bb0(aLStack288,param_1);
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}

