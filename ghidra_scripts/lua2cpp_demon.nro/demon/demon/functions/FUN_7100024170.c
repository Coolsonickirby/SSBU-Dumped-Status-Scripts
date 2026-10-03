
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100024170(L2CFighterCommon *param_1,L2CValue *param_2)

{
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (param_1,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_71000248d4;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack176,0x140ce6081f);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      pLVar5 = aLStack160;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack176,0x14e585ad2a);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack176);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack176);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar5 = aLStack80;
    }
    lib::L2CValue::~L2CValue(pLVar5);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
    app::sv_kinetic_energy::set_speed_mul(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x10dad4f0ce);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack192,0xf71f4d4f8);
    lib::L2CValue::L2CValue(aLStack208,0);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::operator*(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack192,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack272);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
    app::sv_kinetic_energy::controller_set_accel_x_mul(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xe0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,true);
    bVar2 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::StatusModule__set_keep_situation_air_impl
              (param_1->moduleAccessor,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x14cd229ac9);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack176,0x1220fc2660);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::operator*(aLStack80,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack176);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack176);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
  }
LAB_71000248d4:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

