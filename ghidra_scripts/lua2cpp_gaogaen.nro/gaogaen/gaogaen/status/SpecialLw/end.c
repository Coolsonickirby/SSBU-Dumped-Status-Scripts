
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialLw_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  DamageNoReactionMode DVar1;
  float fVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_DAMAGE_NO_REACTION_MODE_NORMAL);
  DVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar1,-1.0,-1.0,-1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::DamageModule__set_damage_mul_2nd_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar2,3,0.0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

