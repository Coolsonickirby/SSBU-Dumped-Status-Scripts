
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016ee0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar4);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_4);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
      goto LAB_71000171ac;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar4);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    param_4 = param_3;
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(param_3);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
LAB_71000171ac:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_71000171c4;
    }
  }
  HVar6 = lib::L2CValue::as_hash(param_4);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
LAB_71000171c4:
  lib::L2CValue::L2CValue(aLStack112,0xa584c4b41);
  uVar5 = lib::L2CValue::operator==(param_3,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack128,-1.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  return;
}

