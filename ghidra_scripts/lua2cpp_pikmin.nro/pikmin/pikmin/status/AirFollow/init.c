
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::AirFollow_init(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100028a80();
  lib::L2CValue::L2CValue(aLStack80,0x5a);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_CHECK_INTERVAL)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x5a);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_COUNTER);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,10.0);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLOAT_PERPLEXED_TARGET_DIST);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_CHECK_AUTONOMY);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

