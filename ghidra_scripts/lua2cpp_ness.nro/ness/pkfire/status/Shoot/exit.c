
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkfire::status::Shoot_exit(L2CWeaponNessPkfire *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  Hash40 HVar2;
  uint uVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar5 = lib::L2CValue::as_number((L2CValue *)&local_60);
  lVar6 = lib::L2CValue::as_number(aLStack112);
  uVar3 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_NESS_PK_FIRE_STATUS_KIND_PILLAR);
  uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
    fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar4);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.5);
    lib::L2CValue::L2CValue(aLStack256,0);
    lib::L2CValue::L2CValue(aLStack272,0);
    HVar2 = lib::L2CValue::as_hash(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    lVar6 = lib::L2CValue::as_number(aLStack160);
    uVar3 = lib::L2CValue::as_number(aLStack176);
    local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar3;
    uVar5 = lib::L2CValue::as_number(aLStack192);
    lVar6 = lib::L2CValue::as_number(aLStack208);
    uVar3 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar5 & 0xffffffff | lVar6 << 0x20;
    uStack88 = (ulong)uVar3;
    fVar4 = (float)lib::L2CValue::as_number(aLStack240);
    uVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    uVar3 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar2,(Vector3f *)&local_50,(Vector3f *)&local_60,fVar4,
                       uVar3,iVar1,false,0);
    lib::L2CValue::L2CValue(aLStack112,uVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

