
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveFlash::status::Hit1_exec(L2CWeaponBraveFlash *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,8);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xb17c1f83e);
  lib::L2CValue::L2CValue(aLStack128,0xc8006a8e2);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xb17c1f83e);
  lib::L2CValue::L2CValue(aLStack144,0xc99eb65bc);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::operator_(aLStack96,aLStack192);
  lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::operator_(aLStack128,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar5,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

