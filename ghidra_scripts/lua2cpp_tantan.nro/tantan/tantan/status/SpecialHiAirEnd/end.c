
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAirEnd_end(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_IS_BLOCKED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x4a7f3f69c);
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_MAP_COLL_OFFSET_X);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    fVar5 = 0.0;
    lib::L2CValue::L2CValue(aLStack192,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack128);
    uVar7 = lib::L2CValue::as_number(aLStack144);
    lVar8 = lib::L2CValue::as_number(aLStack176);
    uVar6 = lib::L2CValue::as_number(aLStack192);
    local_40 = uVar7 & 0xffffffff | lVar8 << 0x20;
    uStack56 = (ulong)uVar6;
    uVar9 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                      (this->moduleAccessor,HVar4,(Vector3f *)&local_40);
    lib::L2CValue::L2CValue(aLStack112,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

