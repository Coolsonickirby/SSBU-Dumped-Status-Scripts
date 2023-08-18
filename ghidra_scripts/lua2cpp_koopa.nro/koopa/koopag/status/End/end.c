
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopaKoopag::status::End_end(L2CWeaponKoopaKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_CAMERA_ZOOM_OUT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::CameraModule__end_final_zoom_out_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

