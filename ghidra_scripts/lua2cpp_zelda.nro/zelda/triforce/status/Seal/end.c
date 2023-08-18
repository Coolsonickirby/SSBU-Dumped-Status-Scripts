
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaTriforce::status::Seal_end(L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ZELDA_TRIFORCE_STATUS_WORK_INT_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack96;
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710001d7fc;
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar5);
    }
    lib::L2CValue::L2CValue(aLStack96,aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].moduleAccessor,0x7d8c1ae08);
    lib::L2CValue::L2CValue(aLStack112,pLVar6);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,true);
    FUN_710001fa40(this,aLStack96,aLStack112,aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001d7fc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

