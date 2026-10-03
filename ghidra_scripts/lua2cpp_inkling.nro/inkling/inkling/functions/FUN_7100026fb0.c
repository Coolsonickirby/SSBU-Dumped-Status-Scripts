
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026fb0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  BattleObject **this;
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,param_2);
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lib::L2CValue::L2CValue(aLStack112,param_4);
  FUN_710001d290(param_1,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(param_4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  this = &param_1[2].battleObject;
  if ((uVar2 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) goto LAB_7100027048;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
LAB_7100027048:
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x1659d18f52);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,uVar4);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::operator*(aLStack64,aLStack144);
    lib::L2CValue::operator=(aLStack64,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_1->moduleAccessor,iVar1)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    lib::L2CAgent::push_lua_stack(param_1,aLStack240);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    FUN_7100026bd0(param_1);
  }
  else {
    FUN_7100006480(aLStack128,param_1);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::operator*(aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

