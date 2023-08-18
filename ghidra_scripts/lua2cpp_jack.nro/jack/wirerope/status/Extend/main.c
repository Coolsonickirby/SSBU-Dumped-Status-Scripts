
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackWirerope::status::Extend_main(L2CWeaponJackWirerope *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xa28f17495);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLAG_CHECK_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_EC_TARGET_LENGTH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_EXTEND_SPEED);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  lib::L2CValue::L2CValue(aLStack80,100.0);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,100.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_TARGET_FRAME);
  fVar5 = (float)lib::L2CValue::as_number(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_EC_LENGTH);
  fVar5 = (float)lib::L2CValue::as_number(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_EC_TARGET_LENGTH);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_PH2NDARY_CRAW_COLLIDE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::PhysicsModule__set_2nd_status_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Extend_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

