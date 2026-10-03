
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e750(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

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
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      fVar7 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x1bfc85a12c);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      lib::L2CValue::operator*(aLStack96,aLStack128);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x1b38d16a48);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x17e075c675);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::operator-(aLStack128);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    param_3 = param_4;
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(param_4);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      goto LAB_710001ec6c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
LAB_710001ec6c:
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
  }
  HVar6 = lib::L2CValue::as_hash(param_3);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
  return;
}

