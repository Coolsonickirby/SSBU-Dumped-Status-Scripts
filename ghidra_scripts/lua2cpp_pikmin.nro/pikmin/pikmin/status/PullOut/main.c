
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::PullOut_main(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  void *pvVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack176,0xe6a52e002);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar4 = lib::L2CValue::as_hash(aLStack176);
  fVar9 = (float)lib::L2CValue::as_number(aLStack80);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_PULL_OUT_WORK_FLOAT_GROUND_Y);
  fVar9 = (float)lib::L2CValue::as_number(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_X);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_PULL_OUT_WORK_FLOAT_OWNER_X);
  fVar9 = (float)lib::L2CValue::as_number(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(pLVar5);
  uVar3 = app::sv_battle_object::get_founder_id(uVar3);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar6);
  }
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar7 & 1) == 0) {
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    uVar11 = app::lua_bind::PostureModule__pos_2d_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    lib::L2CValue::L2CValue(aLStack96,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_PULL_OUT_WORK_FLOAT_OWNER_X);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack80,PullOut_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

