
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022b40(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  BattleObject **this;
  GroundCorrectKind GVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
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
  
  lib::L2CValue::L2CValue(aLStack96,param_2);
  lib::L2CValue::L2CValue(aLStack112,param_3);
  lib::L2CValue::L2CValue(aLStack128,param_4);
  FUN_710001d290(param_1,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  this = &param_1[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar1);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_7100022c44;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      return;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
LAB_7100022c44:
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar2)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0xdfe4ec7a8);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack176,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    lib::L2CAgent::push_lua_stack(param_1,aLStack256);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    FUN_7100006480(aLStack176,param_1);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

