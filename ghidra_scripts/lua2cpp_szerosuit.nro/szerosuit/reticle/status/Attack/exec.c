
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSzerosuitReticle::status::Attack_exec
          (L2CWeaponSzerosuitReticle *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLAG_EFFECT_CHANGED);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLOAT_ROTATE_DEGREE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLOAT_ROTATE_DEGREE_ONCE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar3 = lib::L2CValue::as_number(aLStack112);
    lVar6 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack128);
    local_50 = uVar3 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_FLOAT_ROTATE_DEGREE);
    fVar4 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

