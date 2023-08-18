
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::SpecialHi_end(L2CFighterPfushigisou *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_AIR_LASSO_FLAG_MAP_COLL_OFFSET);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack144,true);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack176,0x1378036cb5);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      lVar5 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,lVar5);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_X);
      iVar2 = lib::L2CValue::as_integer(aLStack208);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack192,fVar7);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Y);
      iVar2 = lib::L2CValue::as_integer(aLStack240);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_AIR_LASSO_WORK_FLOAT_MAP_COLL_OFFSET_Z);
      iVar2 = lib::L2CValue::as_integer(aLStack272);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack256,fVar7);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      uVar3 = lib::L2CValue::as_number(aLStack192);
      lVar5 = lib::L2CValue::as_number(aLStack224);
      uVar8 = lib::L2CValue::as_number(aLStack256);
      local_50 = uVar3 & 0xffffffff | lVar5 << 0x20;
      uStack72 = (ulong)uVar8;
      uVar9 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                        (this->moduleAccessor,HVar6,(Vector3f *)&local_50);
      lib::L2CValue::L2CValue(aLStack144,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::L2CValue(aLStack112,in_register_00005008);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
  }
  lua2cpp::L2CFighterCommon::status_end_AirLasso(this);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

