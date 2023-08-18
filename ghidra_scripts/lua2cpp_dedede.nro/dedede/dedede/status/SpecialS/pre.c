
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialS_pre(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  L2CValue *this_00;
  ulong uVar14;
  float fVar15;
  uint in_stack_fffffffffffffed4;
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack152);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_DEDEDE_GENERATE_ARTICLE_GORDO);
    iVar6 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack152);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_S_MISS);
      iVar6 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_S_GET);
  uVar14 = lib::L2CValue::operator__(this_00,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_DEDEDE_SPECIAL_S_FLAG);
    lib::L2CValue::operator_(aLStack152,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue(aLStack136,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack184,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack200,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack216,true);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_DEDEDE_SPECIAL_S_INT);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_WORK_KEEP_FLAG_DEDEDE_SPECIAL_S_FLOAT);
  lib::L2CValue::L2CValue(aLStack264,0);
  SVar7 = lib::L2CValue::as_integer(aLStack136);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  uVar8 = lib::L2CValue::as_integer(aLStack184);
  GVar9 = lib::L2CValue::as_integer(aLStack200);
  bVar1 = lib::L2CValue::as_bool(aLStack216);
  iVar10 = lib::L2CValue::as_integer(aLStack152);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  iVar12 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar1 & 1),iVar10,iVar11,iVar12,
             in_stack_fffffffffffffed4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,false);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue
            (aLStack232,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON
             | _FIGHTER_LOG_MASK_FLAG_SHOOT);
  lib::L2CValue::L2CValue(aLStack248,0);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack280,0);
  bVar1 = lib::L2CValue::as_bool(aLStack136);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  bVar3 = lib::L2CValue::as_bool(aLStack184);
  bVar4 = lib::L2CValue::as_bool(aLStack200);
  bVar5 = lib::L2CValue::as_bool(aLStack216);
  uVar14 = lib::L2CValue::as_integer(aLStack232);
  uVar8 = lib::L2CValue::as_integer(aLStack248);
  uVar13 = lib::L2CValue::as_integer(aLStack264);
  lib::L2CValue::as_integer(aLStack280);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffed4);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
  iVar6 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack136,0.0);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_WORK_FLOAT_FRAME);
    fVar15 = (float)lib::L2CValue::as_number(aLStack136);
    iVar6 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack136,28.0);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_WORK_FLOAT_FRAME);
    fVar15 = (float)lib::L2CValue::as_number(aLStack136);
    iVar6 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar6);
  }
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

