
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialS_pre(L2CFighterMaster *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
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
  uint in_stack_fffffffffffffee4;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack136,false);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x22);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH);
  lib::L2CValue::operator_(this_00,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack120,true);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack136);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_FLICK);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_FLICK);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
  }
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack184,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack200,true);
  lib::L2CValue::L2CValue(aLStack216,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack248,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack264,0);
  SVar7 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  uVar8 = lib::L2CValue::as_integer(aLStack168);
  GVar9 = lib::L2CValue::as_integer(aLStack184);
  bVar2 = lib::L2CValue::as_bool(aLStack200);
  iVar10 = lib::L2CValue::as_integer(aLStack216);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  iVar12 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
             in_stack_fffffffffffffee4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack168,false);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue
            (aLStack216,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack264,0);
  bVar2 = lib::L2CValue::as_bool(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  bVar3 = lib::L2CValue::as_bool(aLStack168);
  bVar4 = lib::L2CValue::as_bool(aLStack184);
  bVar5 = lib::L2CValue::as_bool(aLStack200);
  uVar14 = lib::L2CValue::as_integer(aLStack216);
  uVar8 = lib::L2CValue::as_integer(aLStack232);
  uVar13 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffee4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

