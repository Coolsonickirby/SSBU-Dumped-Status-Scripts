
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialS_main(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xbd19fb533);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_FLAG_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_WORK_FLOAT_GROUND_Y);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(this_00);
  uVar3 = app::sv_battle_object::get_founder_id(uVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar5);
  }
  uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xf022b1392);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::AttackModule__set_power_up_impl(this->moduleAccessor,fVar9);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    fVar9 = (float)app::lua_bind::AttackModule__power_mul_status_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar9);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialS_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

