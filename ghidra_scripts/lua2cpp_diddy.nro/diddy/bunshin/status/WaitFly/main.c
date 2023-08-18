
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyBunshin::status::WaitFly_main(L2CWeaponDiddyBunshin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  BattleObjectModuleAccessor *pBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x8747e56d1);
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
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
  uVar3 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&FIGHTER_STATUS_KIND_CLIFF_WAIT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar8);
  }
  lib::L2CValue::L2CValue(aLStack96,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack160,0x1212ed5e05);
  uVar9 = lib::L2CValue::as_integer(aLStack96);
  uVar10 = lib::L2CValue::as_integer(aLStack160);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(pBVar11,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack176,0x12414b46e1);
  uVar9 = lib::L2CValue::as_integer(aLStack96);
  uVar10 = lib::L2CValue::as_integer(aLStack176);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(pBVar11,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,0x66933a7e6);
  lib::L2CValue::operator_(aLStack160,aLStack144);
  HVar5 = lib::L2CValue::as_hash(aLStack192);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar3 = app::sv_math::rand(HVar5,iVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_WAIT_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf8eef72e2);
  lib::L2CValue::L2CValue(aLStack192,1);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DIDDY_BUNSHIN_STATUS_KIND_FLY);
  uVar9 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_FLAG_INIT_SOUND);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100036d80);
  lua2cpp::L2CFighterBase::shift(this,(L2CValue)0xa0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

