
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016a80(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_ROTATION_SPEED);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack128,0x1290c41dc2);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::operator-(aLStack80,aLStack96);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack112,0x10fbef6c9b);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator=(aLStack80,aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  FUN_7100014010(param_1,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_MAX_FALL_SPEED);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::operator-(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator<(aLStack64,aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack176,0xf526564d7);
    uVar2 = lib::L2CValue::as_integer(aLStack160);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  uVar2 = lib::L2CValue::operator<(aLStack64,aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar1)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

