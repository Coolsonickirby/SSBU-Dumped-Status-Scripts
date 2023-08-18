
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackRageCatch_end(L2CFighterDemon *this,L2CValue *return_value)

{
  DamageNoReactionMode DVar1;
  L2CValue *this_00;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar3,3,0.0);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100022300(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE_FALL);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    FUN_71000281c0(this,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_DAMAGE_NO_REACTION_MODE_NORMAL);
    DVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
              (this->moduleAccessor,DVar1,-1.0,-1.0,-1);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

