
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::AttackAir_main(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  LinkAttribute LVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_GENERIC_RESET);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack96,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
  lib::L2CValue::L2CValue(aLStack112,false);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  LVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::LinkModule__set_attribute_impl(this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack96,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
  lib::L2CValue::L2CValue(aLStack112,false);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  LVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::LinkModule__set_attribute_impl(this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x50000000);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    fVar9 = (float)app::lua_bind::AttackModule__shield_stiff_mul_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::AttackModule__set_shield_stiff_mul_impl(this->moduleAccessor,fVar9);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x10bc5e586a);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::AttackModule__set_power_up_impl(this->moduleAccessor,fVar9);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,AttackAir_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

