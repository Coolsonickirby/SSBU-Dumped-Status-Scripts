
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c000(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_ATTACK_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_IS_ATTACK_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack96,0x2158c97d47);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x21081fe416);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                               (param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                               (param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator*(aLStack112,aLStack64);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack144);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::operator*(aLStack96,aLStack64);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack144);
      lib::L2CAgent::push_lua_stack(param_1,aLStack160);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__inc_int_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

