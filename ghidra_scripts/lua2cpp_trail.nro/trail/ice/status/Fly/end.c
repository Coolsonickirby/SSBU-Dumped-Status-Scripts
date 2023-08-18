
void __thiscall L2CWeaponTrailIce::status::Fly_end(L2CWeaponTrailIce *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
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
  
  lib::L2CValue::L2CValue(aLStack144,0x1019c75df8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1);
  HVar4 = lib::L2CValue::as_hash(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar4,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x1019c75df8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  HVar4 = lib::L2CValue::as_hash(aLStack144);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  uVar7 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack176,0x148af140a9);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,1.0);
  HVar4 = lib::L2CValue::as_hash(aLStack176);
  uVar8 = lib::L2CValue::as_number(this_00);
  lVar9 = lib::L2CValue::as_number(this_01);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  local_50 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar5;
  uVar8 = lib::L2CValue::as_number(aLStack208);
  lVar9 = lib::L2CValue::as_number(aLStack224);
  uVar5 = lib::L2CValue::as_number(aLStack240);
  local_60 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar5;
  fVar6 = (float)lib::L2CValue::as_number(aLStack256);
  uVar5 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar4,(Vector3f *)&local_50,(Vector3f *)&local_60,fVar6,0,
                     -1,false,0);
  lib::L2CValue::L2CValue(aLStack160,uVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

