
void FUN_7100029d50(L2CAgent *param_1,L2CValue *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack48,1);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x1697fad952);
    uVar1 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack48,fVar3);
    lib::L2CValue::operator=(aLStack64,aLStack48);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x16ae77e597);
    uVar1 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack48,fVar3);
    lib::L2CValue::operator=(aLStack64,aLStack48);
  }
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfce095390);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack48,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator*(aLStack64,aLStack48);
  lib::L2CValue::operator=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

