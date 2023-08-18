
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyStone::status::Dummy_main(L2CWeaponKirbyStone *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CTable *this_00;
  L2CValue *pLVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  long lVar7;
  long lVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CTable *)operator_new(0x48);
  lib::L2CTable::L2CTable(this_00,6);
  lib::L2CValue::L2CValue(aLStack160,this_00);
  lib::L2CValue::L2CValue(aLStack64,0x54789754b);
  lib::L2CValue::L2CValue(aLStack80,0x456e52ce7);
  lib::L2CValue::L2CValue(aLStack96,0x56720d620);
  lib::L2CValue::L2CValue(aLStack112,0x4c596269e);
  lib::L2CValue::L2CValue(aLStack128,0x6def58a36);
  lib::L2CValue::L2CValue(aLStack144,0x432f179ff);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,1);
  lib::L2CValue::operator_(pLVar4,aLStack64);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,2);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,3);
  lib::L2CValue::operator_(pLVar4,aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,4);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,5);
  lib::L2CValue::operator_(pLVar4,aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,6);
  lib::L2CValue::operator_(pLVar4,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar2 = lib::L2CValue::as_integer(pLVar4);
  uVar2 = app::sv_battle_object::get_founder_id(uVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar2);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar5);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_PREV_STONE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(pBVar6,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KIRBY_STONE_INSTANCE_WORK_ID_INT_STONE_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xb490c2e4d);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_KIRBY_STONE_INSTANCE_WORK_ID_INT_STONE_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,aLStack128);
  lVar7 = lib::L2CValue::as_integer(aLStack112);
  lVar8 = lib::L2CValue::as_integer(pLVar4);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar7,lVar8);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,Dummy_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

