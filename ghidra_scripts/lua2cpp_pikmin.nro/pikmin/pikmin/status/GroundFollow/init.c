
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::GroundFollow_init(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  FUN_7100028a80();
  lib::L2CValue::L2CValue
            (aLStack48,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_CHECK_AUTONOMY);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

