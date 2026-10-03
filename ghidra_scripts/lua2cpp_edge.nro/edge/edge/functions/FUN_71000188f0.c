
void FUN_71000188f0(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack80,0x1608994192);
  uVar2 = lib::L2CValue::as_integer(aLStack48);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xe);
  lib::L2CValue::L2CValue(aLStack48,1);
  lib::L2CValue::operator+(this,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  uVar2 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack96,0xdaad87974);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack48,fVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::operator-(aLStack48);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

