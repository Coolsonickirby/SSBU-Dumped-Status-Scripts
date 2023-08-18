
void __thiscall L2CFighterDemon::status::Throw_end(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Throw(this);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  bVar1 = app::lua_bind::FighterCutInManager__is_play_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::FighterCutInManager__request_end_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

