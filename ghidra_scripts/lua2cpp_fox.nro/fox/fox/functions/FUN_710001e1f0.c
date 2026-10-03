
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e1f0(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
  FUN_710001ddc0(aLStack112,param_1);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_WOLF);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    fVar6 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack128,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
              (param_1->moduleAccessor,HVar5,-1.0,1.0,0.0);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

