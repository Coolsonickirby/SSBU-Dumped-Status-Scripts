
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyStone::status::Dummy_main_loop(L2CWeaponKirbyStone *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  L2CValue *this_00;
  void *pvVar3;
  BattleObjectModuleAccessor *pBVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar1 = lib::L2CValue::as_integer(this_00);
  uVar1 = app::sv_battle_object::get_founder_id(uVar1);
  lib::L2CValue::L2CValue(aLStack80,uVar1);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  pvVar3 = (void *)app::sv_battle_object::module_accessor(uVar1);
  if (pvVar3 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar3);
  }
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(pBVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  FUN_7100243af0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

