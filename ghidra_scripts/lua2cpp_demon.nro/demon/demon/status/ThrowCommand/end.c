
void __thiscall
L2CFighterDemon::status::ThrowCommand_end(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  bVar1 = app::lua_bind::FighterCutInManager__is_play_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::FighterCutInManager__request_end_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

