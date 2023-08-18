
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Pre_main(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  HitStatus HVar5;
  Hash40 HVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x38b613fe1);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  fVar12 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack144,0x109d30aa1b);
    lib::L2CValue::L2CValue(aLStack160,0xb710311cf);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    uVar9 = lib::L2CValue::as_integer(aLStack160);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(pBVar10,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_SPEED);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_HIT_STATUS_XLU);
    HVar5 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,Pre_main_loop);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

