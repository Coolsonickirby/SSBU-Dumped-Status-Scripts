
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLink::status::SpecialLw_pre(L2CFighterLink *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  SituationKind SVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *pLVar13;
  ulong uVar14;
  void *pvVar15;
  Item *pIVar16;
  BattleObjectModuleAccessor *pBVar17;
  uint in_stack_fffffffffffffef4;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KIND_LINK);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) goto LAB_710001ceec;
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID);
  iVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack136,iVar5);
  lib::L2CValue::_L2CValue(aLStack120);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  pvVar15 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                              (FIGHTER_STATUS_AIR_LASSO_REACH_WORK_FLOAT_CLIFF_POS_Y,uVar6);
  if (pvVar15 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,pvVar15);
  }
  uVar14 = lib::L2CValue::operator__(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar14 & 1) == 0) {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
    pIVar16 = (Item *)lib::L2CValue::as_pointer(aLStack152);
    uVar6 = app::lua_bind::Item__owner_id_impl(pIVar16);
    lib::L2CValue::L2CValue(aLStack168,uVar6);
    uVar14 = lib::L2CValue::operator__(pLVar13,aLStack168);
    if ((uVar14 & 1) == 0) {
LAB_710001ced4:
      pLVar13 = aLStack168;
      goto LAB_710001ced8;
    }
    pIVar16 = (Item *)lib::L2CValue::as_pointer(aLStack152);
    bVar1 = app::lua_bind::Item__is_had_impl(pIVar16,false);
    lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack120,false);
    uVar14 = lib::L2CValue::operator__(aLStack184,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack184);
      goto LAB_710001ced4;
    }
    uVar6 = lib::L2CValue::as_integer(aLStack136);
    pvVar15 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar15 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack216,pvVar15);
    }
    pBVar17 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
    iVar5 = app::lua_bind::StatusModule__status_kind_impl(pBVar17);
    lib::L2CValue::L2CValue(aLStack200,iVar5);
    lib::L2CValue::L2CValue(aLStack120,_ITEM_STATUS_KIND_STANDBY);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_LINK_STATUS_KIND_SPECIAL_LW_BLAST);
      iVar5 = lib::L2CValue::as_integer(aLStack120);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack136);
      return;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,0x50000000);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID);
    iVar5 = lib::L2CValue::as_integer(aLStack120);
    iVar7 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar7);
    lib::L2CValue::_L2CValue(aLStack168);
    pLVar13 = aLStack120;
LAB_710001ced8:
    lib::L2CValue::_L2CValue(pLVar13);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
LAB_710001ceec:
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,true);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,0);
  SVar8 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  uVar6 = lib::L2CValue::as_integer(aLStack152);
  GVar9 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = lib::L2CValue::as_bool(aLStack184);
  iVar7 = lib::L2CValue::as_integer(aLStack200);
  iVar10 = lib::L2CValue::as_integer(aLStack216);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar8,iVar5,uVar6,GVar9,(bool)(bVar1 & 1),iVar7,iVar10,iVar11,
             in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack152,false);
  lib::L2CValue::L2CValue(aLStack168,false);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue
            (aLStack200,_FIGHTER_LOG_MASK_FLAG_SHOOT | _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW
            );
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack248,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack136);
  bVar2 = lib::L2CValue::as_bool(aLStack152);
  bVar3 = lib::L2CValue::as_bool(aLStack168);
  bVar4 = lib::L2CValue::as_bool(aLStack184);
  uVar14 = lib::L2CValue::as_integer(aLStack200);
  uVar6 = lib::L2CValue::as_integer(aLStack216);
  uVar12 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar6,uVar12,in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

