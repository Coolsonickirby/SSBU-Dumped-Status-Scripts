
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterWhip::status::Normal_main_loop(L2CWeaponRichterWhip *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710002db18;
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_710002d9b4;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD_DAMAGE);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_710002d9b4;
    }
    else {
LAB_710002d9b4:
      lib::L2CValue::L2CValue(aLStack80,0x5af1213cc);
      HVar8 = app::lua_bind::MotionModule__motion_kind_2nd_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,HVar8);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        fVar9 = (float)app::lua_bind::MotionModule__frame_2nd_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        fVar9 = (float)app::lua_bind::MotionModule__weight_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar9);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        fVar10 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        app::lua_bind::MotionModule__add_motion_2nd_impl
                  (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),fVar11);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      else {
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        fVar9 = (float)app::lua_bind::MotionModule__frame_2nd_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        fVar9 = (float)app::lua_bind::MotionModule__weight_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar9);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar9,true);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        app::lua_bind::MotionModule__set_frame_2nd_impl(this->moduleAccessor,fVar9,true);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710002db18:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

