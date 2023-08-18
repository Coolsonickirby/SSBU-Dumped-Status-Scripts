
void __thiscall
L2CWeaponBraveLightning::status::Regular_map_correct
          (L2CWeaponBraveLightning *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue *this_00;
  Weapon *pWVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar1 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,-90.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack80);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    uVar6 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar5,uVar4);
    uStack56 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,90.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack80);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    uVar6 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar5,uVar4);
    uStack56 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar2 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  app::WeaponSpecializer_BraveLightning::exec_map_collection(pWVar2);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

