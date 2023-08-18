
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelFishingrod::status::Exhaust_main
          (L2CWeaponPickelFishingrod *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_PH2NDARY_CRAW_FALL);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::PhysicsModule__set_2nd_status_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,Exhaust_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

