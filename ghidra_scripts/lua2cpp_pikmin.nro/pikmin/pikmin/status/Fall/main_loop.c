
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::Fall_main_loop(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *this_00;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710004a394;
  }
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_HIDE_INDICATION);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_UNABLE_HIDE_WAIT)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x289a9c79db);
      lib::L2CValue::L2CValue(aLStack192,0xcc40f4e28);
      lib::L2CValue::L2CValue(aLStack208,0x14a96c5752);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_ALL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::operator_(aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_HIDE_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710004a394;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_null(uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::sv_battle_object::is_active(uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_710004a124;
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar8);
      }
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CAPTURE_JUMP);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_710004a124:
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_BORING_INDICATION);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack64,2);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
LAB_710004a370:
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710004a380;
    }
    lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_710004a370;
    }
    lib::L2CValue::L2CValue(aLStack176,0x289a9c79db);
    lib::L2CValue::L2CValue(aLStack208,0xcc40f4e28);
    lib::L2CValue::L2CValue(aLStack224,0x14a96c5752);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_UP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_710004a380;
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_JUMP_AERIAL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
LAB_710004a380:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710004a394:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

