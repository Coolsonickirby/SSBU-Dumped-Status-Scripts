
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Fly_main(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,-1);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar7);
    }
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    iVar2 = app::lua_bind::StatusModule__status_kind_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_EDGE_FLAREDUMMY_STATUS_KIND_TRY);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_DELAY);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_DELAY);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

