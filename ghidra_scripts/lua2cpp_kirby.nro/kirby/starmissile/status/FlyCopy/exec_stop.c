
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyStarmissile::status::FlyCopy_exec_stop
          (L2CWeaponKirbyStarmissile *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar3);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator_(aLStack96);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

