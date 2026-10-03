
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000211d0(L2CAgent *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
  lib::L2CValue::operator=(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_SPECIAL_S_ENERGY_MODE_AIR_STOP);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_SPECIAL_S_ENERGY_MODE_BRAKE);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) goto LAB_71000212e8;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_SPECIAL_S_ENERGY_MODE_FALL);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_71000212e8;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_FALL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_71000212e8:
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_kinetic_energy::clear_speed_ex(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

