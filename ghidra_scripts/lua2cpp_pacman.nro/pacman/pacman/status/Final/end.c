
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPacman::status::Final_end(L2CFighterPacman *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue *this_00;
  L2CValue aLStack48 [16];
  
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack48,5);
  uVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_PACMAN_STATUS_KIND_FINAL_MOVE);
  lib::L2CValue::operator__(this_00,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

