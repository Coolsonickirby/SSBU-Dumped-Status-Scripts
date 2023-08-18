
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPfushigisou::status::AirLassoReach_end(L2CFighterPfushigisou *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  float in_register_00005008;
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
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_AIR_LASSO_FLAG_MAP_COLL_OFFSET);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack160,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x1378036cb5);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    lVar6 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,lVar6);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_X)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_Y)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack240,fVar8);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_MAP_COLL_OFFSET_Z)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack272,fVar8);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    uVar4 = lib::L2CValue::as_number(aLStack208);
    lVar6 = lib::L2CValue::as_number(aLStack240);
    uVar9 = lib::L2CValue::as_number(aLStack272);
    local_60 = uVar4 & 0xffffffff | lVar6 << 0x20;
    uStack88 = (ulong)uVar9;
    uVar10 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                       (this->moduleAccessor,HVar7,(Vector3f *)&local_60);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PFUSHIGISOU_VINE_STATUS_KIND_REACH);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lua2cpp::L2CFighterCommon::status_end_AirLassoReach(this);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

