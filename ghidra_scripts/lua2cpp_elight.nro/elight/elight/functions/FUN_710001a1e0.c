
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a1e0(L2CAgent *param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    fVar4 = (float)app::sv_kinetic_energy::get_brake_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      pLVar1 = aLStack96;
      lib::L2CAgent::push_lua_stack(param_1,pLVar1);
      fVar4 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack80,fVar4);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar1);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0x1e716694dc);
      uVar2 = lib::L2CValue::as_integer(aLStack128);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar4);
      uVar2 = lib::L2CValue::operator<=(aLStack64,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack64);
        lib::L2CAgent::push_lua_stack(param_1,aLStack80);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  return;
}

