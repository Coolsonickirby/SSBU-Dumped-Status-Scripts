
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Fly_exec(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_XLU_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
    HVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_DELAY);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLAG_REFLECT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_RADIUS);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
    lib::L2CValue::L2CValue(aLStack128,uVar5);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::sv_battle_object::is_active(uVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_OBJECT_ID);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::sv_battle_object::is_active(uVar5);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar6 = lib::L2CValue::operator__(aLStack176,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar6 & 1) != 0) {
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,pvVar7);
          }
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
          fVar9 = (float)app::lua_bind::PostureModule__scale_impl(pBVar8);
          lib::L2CValue::L2CValue(aLStack192,fVar9);
          lib::L2CValue::operator_(aLStack112,aLStack192);
          lib::L2CValue::operator_(aLStack112,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack64);
        }
        lib::L2CValue::_L2CValue(aLStack160);
      }
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    FUN_71000290f0(aLStack64,this,aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

