
void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalJump_end
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  undefined8 uStack40;
  
  fVar1 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,fVar1);
  fVar1 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar1);
  uVar2 = lib::L2CValue::as_number(aLStack64);
  uVar3 = lib::L2CValue::as_number(aLStack80);
  local_30 = CONCAT44(uVar3,uVar2);
  uStack40 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_30);
  FUN_710002f9a0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

