
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingMegaphonelaser::status::Finish_exec
          (L2CWeaponInklingMegaphonelaser *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_30,
             _WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_FLOAT_SHOOT_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  lib::L2CValue::operator_(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack80);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  local_30 = CONCAT44(uVar4,uVar3);
  uStack40 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_30,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

