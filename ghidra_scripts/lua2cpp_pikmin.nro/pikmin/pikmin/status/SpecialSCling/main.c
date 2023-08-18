
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialSCling_main
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  long lVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  void *pvVar9;
  ulong uVar10;
  BattleObjectModuleAccessor *pBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_FLAG_POKEMON_CHANGE_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AttackModule__set_ignore_just_shield_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x10551dcdb7);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar12 = (float)lib::L2CValue::as_number(aLStack112);
  fVar13 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_S_CLING_ENEMY);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_S_CLING_CARRIER);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_INT_TARGET_NODE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,lVar7);
    lib::L2CValue::L2CValue(aLStack176,_CONSTRAINT_FLAG_SET_MATRIX | _CONSTRAINT_FLAG_NO_FLIP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    HVar8 = lib::L2CValue::as_hash(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (this->moduleAccessor,iVar3,HVar5,HVar8,uVar4,true);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0x367b17cdfd);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar4 = lib::L2CValue::as_integer(this_00);
  uVar4 = app::sv_battle_object::get_founder_id(uVar4);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar9);
  }
  uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0xf022b1392);
    lib::L2CValue::L2CValue(aLStack192,0);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar11,uVar6,uVar10);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    fVar12 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::AttackModule__set_power_up_impl(this->moduleAccessor,fVar12);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar12 = (float)app::lua_bind::AttackModule__power_mul_status_impl(pBVar11);
    lib::L2CValue::L2CValue(aLStack176,fVar12);
    fVar12 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar12);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialSCling_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

