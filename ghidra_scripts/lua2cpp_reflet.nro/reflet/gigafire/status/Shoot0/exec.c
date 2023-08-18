
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRefletGigafire::status::Shoot0_exec(L2CWeaponRefletGigafire *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_LEFT);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,-1);
        FUN_710002f160(aLStack128,this,aLStack144);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
        uVar4 = lib::L2CValue::operator_((L2CValue *)&local_40,aLStack128);
        lib::L2CValue::_L2CValue((L2CValue *)&local_40);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_REFLET_GIGAFIRE_STATUS_KIND_RISE);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue((L2CValue *)&local_40);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_REFLET_GIGAFIRE_STATUS_KIND_RISE);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,3.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack112);
    uVar3 = lib::L2CValue::as_number(aLStack96);
    local_40 = CONCAT44(uVar7,uVar6);
    uStack56 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_REFLET_GIGAFIRE_STATUS_KIND_RISE);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

