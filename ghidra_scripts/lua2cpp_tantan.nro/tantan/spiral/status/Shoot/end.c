
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::Shoot_end(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack128,HVar6);
  lib::L2CValue::L2CValue(aLStack112,0x5c86412ff);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
    lib::L2CValue::L2CValue(aLStack128,0xeb8da7432);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    lib::L2CValue::L2CValue(aLStack192,false);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,false);
    lib::L2CValue::L2CValue(aLStack240,false);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    fVar9 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack192);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    bVar3 = lib::L2CValue::as_bool(aLStack224);
    bVar4 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar5,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar10,(bool)(bVar3 & 1),(bool)(bVar4 & 1),false);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

