
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b090(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar4 = lib::L2CValue::operator==(param_3,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_FALL);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,true);
      uVar4 = lib::L2CValue::operator==(param_2,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack192);
        uVar10 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack176,(float)uVar10);
        lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar10 >> 0x20));
        lib::L2CValue::operator=(aLStack128,aLStack176);
        lib::L2CValue::operator=(aLStack144,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack224,0xfdbdc9ffc);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar8);
        lib::L2CValue::operator*(aLStack128,aLStack192);
        lib::L2CValue::operator=(aLStack128,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack176);
        lib::L2CAgent::push_lua_stack(param_1,aLStack128);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MEWTWO_STATUS_SPECIAL_S_FLAG_ACCEL_NORMAL);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack176,false);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0xf37cd960d);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar8);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144,0xf71f4d4f8);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar8);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack192,0xf25ec86be);
        lib::L2CValue::L2CValue(aLStack208,0);
        uVar4 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack144,fVar8);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::operator*(aLStack128,aLStack176);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack192);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_accel_x_mul(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::operator*(aLStack144,aLStack176);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack192);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_accel_x_add(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack176);
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MEWTWO_STATUS_SPECIAL_S_FLAG_GRAVITY_NORMAL);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack176,false);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MEWTWO_STATUS_SPECIAL_S_FLAG_BACK_GRAVITY);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0xfcca78bbf);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar8);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack192,0xf20b6824e);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar8);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack224,0x12ec5626fe);
        lib::L2CValue::L2CValue(aLStack240,0);
        uVar4 = lib::L2CValue::as_integer(aLStack224);
        uVar7 = lib::L2CValue::as_integer(aLStack240);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack208,fVar8);
        lib::L2CValue::operator*(aLStack208,aLStack176);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        lib::L2CAgent::push_lua_stack(param_1,aLStack192);
        app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack240,0xba18057d9);
        lib::L2CValue::L2CValue(aLStack256,0);
        uVar4 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack256);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack224,fVar8);
        lib::L2CValue::operator-(aLStack224);
        lib::L2CValue::operator*(aLStack208,aLStack128);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        lib::L2CAgent::push_lua_stack(param_1,aLStack192);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::~L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MEWTWO_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,lVar5);
    lib::L2CValue::operator=(aLStack112,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
                (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0);
      goto LAB_710000baf4;
    }
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar4 = lib::L2CValue::operator==(param_3,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    GVar3 = lib::L2CValue::as_integer(param_4);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MEWTWO_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,lVar5);
    lib::L2CValue::operator=(aLStack112,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
                (param_1->moduleAccessor,HVar6,-1.0,1.0,0.0);
      goto LAB_710000baf4;
    }
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
LAB_710000baf4:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

