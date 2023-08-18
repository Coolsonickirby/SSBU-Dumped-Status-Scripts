
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyBullet::status::Fly_fix_pos_slow(L2CWeaponBuddyBullet *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_BUDDY_BULLET_STATUS_WORK_ID_FLOAT_ROT_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar2);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  lVar5 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

