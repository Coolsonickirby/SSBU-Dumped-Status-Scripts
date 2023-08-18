
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueFishingrod::status::Wait_main(L2CWeaponShizueFishingrod *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x4d114b4f6);
  lib::L2CValue::L2CValue(aLStack96,0x8d8f76e19);
  lVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x5c9a55e95);
  lib::L2CValue::L2CValue(aLStack96,0x9bba3642d);
  lVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_PH2NDARY_CRAW_NONE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::PhysicsModule__set_2nd_status_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x47dee83e5);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Wait_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

