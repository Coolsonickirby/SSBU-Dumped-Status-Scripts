
void __thiscall
L2CWeaponPikachuKaminari::status::Regular_map_correct
          (L2CWeaponPikachuKaminari *this,L2CValue *return_value)

{
  ulong uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar1 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,-90.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar3 = lib::L2CValue::as_number(aLStack80);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar4,uVar3);
    uStack56 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,90.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar3 = lib::L2CValue::as_number(aLStack80);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar4,uVar3);
    uStack56 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x34363b465e);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

