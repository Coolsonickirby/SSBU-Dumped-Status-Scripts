
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialLw_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  SituationKind SVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar14;
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
  
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
  iVar5 = lib::L2CValue::as_integer(aLStack152);
  bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar13 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack184,true);
    lib::L2CValue::L2CValue(aLStack200,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack248,0);
    SVar6 = lib::L2CValue::as_integer(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack136);
    uVar7 = lib::L2CValue::as_integer(aLStack152);
    GVar8 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    iVar9 = lib::L2CValue::as_integer(aLStack200);
    iVar10 = lib::L2CValue::as_integer(aLStack216);
    iVar11 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
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
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack248,0);
    bVar1 = lib::L2CValue::as_bool(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack136);
    bVar2 = lib::L2CValue::as_bool(aLStack152);
    bVar3 = lib::L2CValue::as_bool(aLStack168);
    bVar4 = lib::L2CValue::as_bool(aLStack184);
    uVar13 = lib::L2CValue::as_integer(aLStack200);
    uVar7 = lib::L2CValue::as_integer(aLStack216);
    uVar12 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
               (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffef4);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar5 = 0;
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    bVar1 = app::FighterSpecializer_Pickel::check_material_special_lw_generate_bomb(pBVar14);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar13 = lib::L2CValue::operator__(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((uVar13 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_BOMB_FAILURE);
      iVar5 = lib::L2CValue::as_integer(aLStack120);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_BOMB);
      iVar5 = lib::L2CValue::as_integer(aLStack120);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
    }
    lib::L2CValue::_L2CValue(aLStack120);
    iVar5 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

