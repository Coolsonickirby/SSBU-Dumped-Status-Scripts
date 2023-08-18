
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponYoshiTamago::status::Spit_end(L2CWeaponYoshiTamago *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectShapeType GVar5;
  ulong uVar6;
  void *pvVar7;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) goto LAB_710002dfa4;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = app::lua_bind::LinkModule__get_parent_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    this_00 = aLStack96;
LAB_710002df98:
    lib::L2CValue::_L2CValue(this_00);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack96,uVar4 & 0xff);
      lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,pvVar7);
        }
        lib::L2CValue::L2CValue
                  (aLStack112,
                   _WEAPON_YOSHI_TAMAGO_STATUS_SPIT_WORK_INT_GROUND_CORRECT_SHAPE_TYPE_BACKUP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
        app::lua_bind::GroundModule__set_shape_kind_impl(pBVar8,GVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        this_00 = aLStack64;
        goto LAB_710002df98;
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710002dfa4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

