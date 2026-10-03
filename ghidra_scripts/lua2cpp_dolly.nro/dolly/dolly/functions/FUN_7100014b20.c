
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014b20(L2CAgent *param_1)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue *this;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_TYPE_MOTION);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack96,0x14836fd13a);
  lib::L2CValue::L2CValue(aLStack112,0x9ab5fb14f);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_kinetic_energy::set_speed_mul(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

