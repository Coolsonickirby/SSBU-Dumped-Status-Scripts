
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWario::status::SpecialSBump_main(L2CFighterWario *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_CAMERA_QUAKE_KIND_M);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WARIO_STATUS_SPECIAL_S_FLAG_MOT_CHANGE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100010960(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialSBump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

