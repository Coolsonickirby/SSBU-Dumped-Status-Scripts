
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Try_main_loop(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLAG_REFLECT);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_EDGE_FLARE2_STATUS_KIND_REF);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
  lib::L2CValue::L2CValue(aLStack112,uVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::sv_battle_object::is_active(uVar4);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar5 = lib::L2CValue::operator__(aLStack240,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
    goto LAB_710002cdb4;
  }
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar6);
  }
  uVar10 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lib::L2CValue::L2CValue(aLStack80,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  uVar10 = app::lua_bind::PostureModule__pos_2d_impl(pBVar7);
  lib::L2CValue::L2CValue(aLStack240,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack240);
  lib::L2CValue::L2CValue(aLStack96,aLStack224);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack208,aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack96,aLStack192);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack256,0x109d30aa1b);
  lib::L2CValue::L2CValue(aLStack272,0xc6c8a6c8d);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar8 = lib::L2CValue::as_integer(aLStack272);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  fVar9 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar9);
  lib::L2CValue::operator_(aLStack208,aLStack272);
  lib::L2CValue::operator_(aLStack208,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack208);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar9);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) goto LAB_710002cd44;
  }
  else {
LAB_710002cd44:
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_EDGE_FLARE2_STATUS_KIND_EXP);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710002cdb4:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

