
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialLwKick_end(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  float in_register_00005008;
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
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack176,0xe22a27e23);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  lVar6 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,lVar6);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_X);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::L2CValue
            (aLStack272,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_Z);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  uVar4 = lib::L2CValue::as_number(aLStack192);
  lVar6 = lib::L2CValue::as_number(aLStack224);
  uVar9 = lib::L2CValue::as_number(aLStack256);
  local_50 = uVar4 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar9;
  uVar10 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (this->moduleAccessor,HVar7,(Vector3f *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,in_register_00005008);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

