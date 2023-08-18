
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveDeathball::status::Hit1_main(L2CWeaponBraveDeathball *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,8);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,Hit1_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

