
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Follow_main(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  uint uVar8;
  float fVar9;
  long lVar10;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_RETURN);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  if ((bVar2 & 1U) == 0) {
    lVar10 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack160,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_RETURN_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_EFFECT_HANDLE_NULL);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_710001ec44;
    lib::L2CValue::L2CValue(aLStack144,0x139d74848e);
    lib::L2CValue::L2CValue(aLStack160,0x35dbfe258);
    lib::L2CValue::L2CValue(aLStack176,0);
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::L2CValue(aLStack224,0);
    lib::L2CValue::L2CValue(aLStack240,0);
    lib::L2CValue::L2CValue(aLStack256,0);
    lib::L2CValue::L2CValue(aLStack272,1);
    lib::L2CValue::L2CValue(aLStack288,true);
    lib::L2CValue::L2CValue(aLStack304,_EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    HVar7 = lib::L2CValue::as_hash(aLStack160);
    uVar5 = lib::L2CValue::as_number(aLStack176);
    lVar10 = lib::L2CValue::as_number(aLStack192);
    uVar8 = lib::L2CValue::as_number(aLStack208);
    local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar8;
    uVar5 = lib::L2CValue::as_number(aLStack224);
    lVar10 = lib::L2CValue::as_number(aLStack240);
    uVar8 = lib::L2CValue::as_number(aLStack256);
    local_70 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar8;
    fVar9 = (float)lib::L2CValue::as_number(aLStack272);
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    uVar8 = lib::L2CValue::as_integer(aLStack304);
    uVar8 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar6,HVar7,(Vector3f *)&local_60,(Vector3f *)&local_70,
                       fVar9,(bool)(bVar1 & 1),uVar8,0,-1,in_stack_fffffffffffffe84,0,
                       (bool)in_stack_fffffffffffffe8c,false);
    lib::L2CValue::L2CValue(aLStack128,uVar8);
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
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_RETURN_EFFECT_HANDLE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lVar10 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar10));
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001ec44:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Follow_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  return;
}

