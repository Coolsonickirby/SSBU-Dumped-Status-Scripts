
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018920(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar4 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0xb8de1a882);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar7);
      lib::L2CValue::operator-(aLStack144);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0xf4707f087);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar4 = lib::L2CValue::operator==(param_5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,param_5);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    param_3 = param_4;
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_4);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      goto LAB_7100018dfc;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
LAB_7100018dfc:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      return;
    }
  }
  HVar6 = lib::L2CValue::as_hash(param_3);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
  return;
}

