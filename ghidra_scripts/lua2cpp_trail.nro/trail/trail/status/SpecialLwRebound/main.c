
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialLwRebound_main(L2CFighterTrail *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  float fVar12;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack192,0x129417320e);
  lib::L2CValue::L2CValue(aLStack208,0x161969620f);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) goto LAB_710001a834;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_INT_TARGET_ID);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::sv_battle_object::is_active(uVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
LAB_710001a658:
    lib::L2CValue::L2CValue(aLStack256,0x50000000);
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = app::sv_battle_object::category(uVar5);
    lib::L2CValue::L2CValue(aLStack128,uVar5 & 0xff);
    lib::L2CValue::L2CValue(aLStack96,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) goto LAB_710001a658;
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_TRAIL_SPECIAL_LW_REBOUND);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) == 0) {
LAB_710001a650:
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710001a658;
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_FINAL_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(pBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) == 0) goto LAB_710001a650;
    lib::L2CValue::L2CValue(aLStack256,aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0x50000000);
  uVar7 = lib::L2CValue::operator__(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar8);
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_INT_TRAIL_REBOUND_OBJECT_ID);
    iVar4 = lib::L2CValue::as_integer(pLVar10);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(pBVar9,iVar4,iVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_TRAIL_REBOUND);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = lib::L2CValue::as_bool(aLStack144);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    bVar2 = app::lua_bind::StatusModule__change_status_request_impl(pBVar9,iVar4,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(pBVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar12);
    fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::operator_((L2CValue *)auStack240,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lVar1 = -0x80;
  }
  else {
    FUN_7100018a80(this);
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_INT_TARGET_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
    lVar1 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
LAB_710001a834:
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  fVar12 = (float)app::sv_kinetic_energy::get_limit_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,fVar12);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLOAT_LIMIT_SPEED_Y);
  fVar12 = (float)lib::L2CValue::as_number(aLStack160);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack288,0xe8f519052);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  uVar11 = lib::L2CValue::as_integer(aLStack288);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar11)
  ;
  lib::L2CValue::L2CValue(aLStack256,fVar12);
  lib::L2CValue::L2CValue(aLStack96,10.0);
  pLVar10 = aLStack96;
  lib::L2CValue::operator_(aLStack256,pLVar10);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar10);
  uVar7 = lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x1015a85af3);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    uVar11 = lib::L2CValue::as_integer(aLStack288);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack256,fVar12);
    lib::L2CValue::L2CValue(aLStack96,10.0);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar7 = lib::L2CValue::operator_((L2CValue *)auStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::operator_(aLStack128,aLStack160);
      pLVar10 = aLStack96;
      lib::L2CValue::operator_(aLStack128,pLVar10);
    }
    else {
      lib::L2CValue::operator_(aLStack128,aLStack160);
      pLVar10 = aLStack96;
      lib::L2CValue::operator_(aLStack128,pLVar10);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar10);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialLwRebound_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main
            (this,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  return;
}

