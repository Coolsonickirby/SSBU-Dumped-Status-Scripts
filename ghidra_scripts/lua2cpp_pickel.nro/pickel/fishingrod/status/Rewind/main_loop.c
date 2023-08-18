
void __thiscall
L2CWeaponPickelFishingrod::status::Rewind_main_loop
          (L2CWeaponPickelFishingrod *this,L2CValue *return_value)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar4 = (float)app::lua_bind::PhysicsModule__get_2nd_active_node_num_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x3008eb705);
    lib::L2CValue::L2CValue(aLStack80,0x883253c27);
    lVar2 = lib::L2CValue::as_integer(aLStack64);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar2,lVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

