
void __thiscall L2CFighterKoopa::status::JumpSquat_end(L2CFighterKoopa *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_end_JumpSquat(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

