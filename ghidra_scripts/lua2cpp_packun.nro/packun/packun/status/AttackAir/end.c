
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::AttackAir_end(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_AttackAir(this);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue(aLStack64,0.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::GroundModule__set_offset_x_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::GroundModule__set_offset_y_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

