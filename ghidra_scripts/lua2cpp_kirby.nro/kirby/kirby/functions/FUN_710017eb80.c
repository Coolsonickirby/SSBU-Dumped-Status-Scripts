
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710017eb80(L2CAgent *param_1,L2CValue *param_2)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack128,0x1220fc2660);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x137bfdce41);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator*(aLStack112,aLStack160);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (param_1->moduleAccessor,HVar5,-1.0,1.0,0.0,false,false);
      goto LAB_710017efc8;
    }
    lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (param_1->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (param_1->moduleAccessor,HVar5,-1.0,1.0,0.0,false,false);
      goto LAB_710017efc8;
    }
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (param_1->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710017efc8:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

