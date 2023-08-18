
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicSupersonic::status::Idle_main(L2CWeaponSonicSupersonic *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  Hash40 HVar3;
  Hash40 HVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  int in_stack_fffffffffffffe84;
  undefined in_stack_fffffffffffffe8c;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1735827d29);
    lib::L2CValue::L2CValue(aLStack160,0x35dbfe258);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,true);
    lib::L2CValue::L2CValue
              (aLStack304,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE | _EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
    HVar3 = lib::L2CValue::as_hash(aLStack144);
    HVar4 = lib::L2CValue::as_hash(aLStack160);
    uVar2 = lib::L2CValue::as_number(aLStack176);
    lVar7 = lib::L2CValue::as_number(aLStack192);
    uVar6 = lib::L2CValue::as_number(aLStack208);
    local_60 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack88 = (ulong)uVar6;
    uVar2 = lib::L2CValue::as_number(aLStack224);
    lVar7 = lib::L2CValue::as_number(aLStack240);
    uVar6 = lib::L2CValue::as_number(aLStack256);
    local_70 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack104 = (ulong)uVar6;
    fVar5 = (float)lib::L2CValue::as_number(aLStack272);
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    uVar6 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar3,HVar4,(Vector3f *)&local_60,(Vector3f *)&local_70,
                       fVar5,(bool)(bVar1 & 1),uVar6,0,-1,in_stack_fffffffffffffe84,0,
                       (bool)in_stack_fffffffffffffe8c,false);
    lib::L2CValue::L2CValue(aLStack128,uVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0x19520cd9ff);
    lib::L2CValue::L2CValue(aLStack160,0x35dbfe258);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,true);
    lib::L2CValue::L2CValue
              (aLStack304,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE | _EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
    HVar3 = lib::L2CValue::as_hash(aLStack144);
    HVar4 = lib::L2CValue::as_hash(aLStack160);
    uVar2 = lib::L2CValue::as_number(aLStack176);
    lVar7 = lib::L2CValue::as_number(aLStack192);
    uVar6 = lib::L2CValue::as_number(aLStack208);
    local_60 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack88 = (ulong)uVar6;
    uVar2 = lib::L2CValue::as_number(aLStack224);
    lVar7 = lib::L2CValue::as_number(aLStack240);
    uVar6 = lib::L2CValue::as_number(aLStack256);
    local_70 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack104 = (ulong)uVar6;
    fVar5 = (float)lib::L2CValue::as_number(aLStack272);
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    uVar6 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar3,HVar4,(Vector3f *)&local_60,(Vector3f *)&local_70,
                       fVar5,(bool)(bVar1 & 1),uVar6,0,-1,in_stack_fffffffffffffe84,0,
                       (bool)in_stack_fffffffffffffe8c,false);
    lib::L2CValue::L2CValue(aLStack128,uVar6);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Idle_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  return;
}

