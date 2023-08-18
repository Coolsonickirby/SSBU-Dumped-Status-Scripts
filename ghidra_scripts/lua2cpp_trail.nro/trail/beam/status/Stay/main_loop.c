
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTrailBeam::status::Stay_main_loop(L2CWeaponTrailBeam *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *this_00;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(this_00);
  uVar3 = app::sv_battle_object::get_founder_id(uVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                    (LUA_SCRIPT_LINE_STATUS_SYSTEM,uVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar5);
    }
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar6);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TRAIL_STATUS_KIND_FINAL_READY);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack96);
        goto LAB_7100003ee8;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar4,false);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::AttackModule__clear_impl(this->moduleAccessor,iVar4,false);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100003ee8:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

