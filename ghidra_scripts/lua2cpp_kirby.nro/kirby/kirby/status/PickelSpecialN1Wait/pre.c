
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1Wait_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  SituationKind SVar5;
  int iVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *pLVar13;
  ulong uVar14;
  uint in_stack_fffffffffffffe94;
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
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
  
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack152,pLVar13);
  FUN_710012d860(aLStack136,aLStack152);
  lib::L2CValue::L2CValue(aLStack120,false);
  uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar14 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
  }
  lib::L2CValue::L2CValue(aLStack136,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack184,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack248,pLVar13);
  FUN_710012d860(aLStack232,aLStack248);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar14 = lib::L2CValue::operator__(aLStack232,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack248);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
    lib::L2CValue::operator_(aLStack216,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::operator_(aLStack216,aLStack232);
    pLVar13 = aLStack232;
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY);
    lib::L2CValue::operator_(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLAG);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_INT);
    lib::L2CValue::operator_(aLStack168,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLOAT);
    lib::L2CValue::operator_(aLStack184,aLStack120);
    pLVar13 = aLStack120;
  }
  lib::L2CValue::_L2CValue(pLVar13);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack264,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack280,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack296,true);
  SVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack232);
  uVar7 = lib::L2CValue::as_integer(aLStack264);
  GVar8 = lib::L2CValue::as_integer(aLStack280);
  bVar1 = lib::L2CValue::as_bool(aLStack296);
  iVar9 = lib::L2CValue::as_integer(aLStack136);
  iVar10 = lib::L2CValue::as_integer(aLStack168);
  iVar11 = lib::L2CValue::as_integer(aLStack184);
  lib::L2CValue::as_integer(aLStack200);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar5,iVar6,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffe94);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack264,false);
  lib::L2CValue::L2CValue(aLStack280,false);
  lib::L2CValue::L2CValue(aLStack296,false);
  lib::L2CValue::L2CValue(aLStack312,_FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT);
  lib::L2CValue::L2CValue(aLStack328,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack344,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack232);
  bVar2 = lib::L2CValue::as_bool(aLStack264);
  bVar3 = lib::L2CValue::as_bool(aLStack280);
  bVar4 = lib::L2CValue::as_bool(aLStack296);
  uVar14 = lib::L2CValue::as_integer(aLStack216);
  uVar7 = lib::L2CValue::as_integer(aLStack312);
  uVar12 = lib::L2CValue::as_integer(aLStack328);
  lib::L2CValue::as_integer(aLStack344);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffe94);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

