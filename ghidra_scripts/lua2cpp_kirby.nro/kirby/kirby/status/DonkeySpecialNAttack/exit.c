
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNAttack_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  DamageNoReactionMode DVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,-1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_SPECIAL_N_WORK_INT_DEFAULT_POWER_0);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_DAMAGE_NO_REACTION_MODE_NORMAL);
  DVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar3,-1.0,-1.0,-1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

