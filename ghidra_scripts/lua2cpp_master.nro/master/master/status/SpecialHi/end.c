
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHi_end(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
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
  
  lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack192,0xe22a27e23);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  lVar5 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack160,lVar5);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_X);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack240,fVar8);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_Z);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack272,fVar8);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  uVar3 = lib::L2CValue::as_number(aLStack208);
  lVar5 = lib::L2CValue::as_number(aLStack240);
  uVar9 = lib::L2CValue::as_number(aLStack272);
  local_60 = uVar3 & 0xffffffff | lVar5 << 0x20;
  uStack88 = (ulong)uVar9;
  uVar10 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (this->moduleAccessor,HVar6,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack112,in_register_00005008);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_HIT);
  uVar3 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar3 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_FAIL);
    uVar3 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
      uVar3 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
  uVar3 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
    app::lua_bind::GroundModule__set_rhombus_modify_air_lasso_impl
              (this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

