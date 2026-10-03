
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100031140(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_2->moduleAccessor,iVar2)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    lib::L2CValue::operator*(aLStack80,aLStack112);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    this = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar2);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

