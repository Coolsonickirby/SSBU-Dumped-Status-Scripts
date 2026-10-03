
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002cef0(L2CAgent *param_1)

{
  BattleObject **this;
  GroundCorrectKind GVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
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
  
  this = &param_1[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      goto LAB_710002d540;
    }
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
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x129cf4a752);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x12ee0f7093);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::operator-(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,aLStack80);
  lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::operator=(aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack192,ENERGY_STOP_RESET_TYPE_AIR);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  lib::L2CAgent::push_lua_stack(param_1,aLStack240);
  lib::L2CAgent::push_lua_stack(param_1,aLStack256);
  lib::L2CAgent::push_lua_stack(param_1,aLStack272);
  app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack192,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  lib::L2CAgent::push_lua_stack(param_1,aLStack240);
  lib::L2CAgent::push_lua_stack(param_1,aLStack256);
  lib::L2CAgent::push_lua_stack(param_1,aLStack272);
  app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  app::sv_kinetic_energy::controller_set_accel_x_mul(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_kinetic_energy::controller_set_accel_x_add(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710002d540:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

