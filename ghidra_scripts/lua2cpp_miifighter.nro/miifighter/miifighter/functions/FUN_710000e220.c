
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000e220(L2CFighterMiifighter *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  FUN_71000155b0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

