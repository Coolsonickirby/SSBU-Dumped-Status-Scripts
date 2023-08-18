
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialHiUpper_end(L2CFighterDiddy *this,L2CValue *return_value)

{
  DamageNoReactionMode DVar1;
  uint uVar2;
  L2CValue aLStack64 [16];
  
  FUN_710000ef10();
  lib::L2CValue::L2CValue(aLStack64,_DAMAGE_NO_REACTION_MODE_NORMAL);
  DVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar1,-1.0,-1.0,-1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

