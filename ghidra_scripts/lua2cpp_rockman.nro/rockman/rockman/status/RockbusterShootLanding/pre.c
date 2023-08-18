
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::RockbusterShootLanding_pre
          (L2CFighterRockman *this,L2CValue *return_value)

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
  uint in_stack_fffffffffffffec4;
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
  
  lib::L2CValue::L2CValue(aLStack136,0);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack168,pLVar13);
  FUN_710000a880(aLStack152,aLStack168);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar14 = lib::L2CValue::operator__(aLStack152,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
    if ((uVar14 & 1) == 0) goto LAB_710001b110;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
  }
  lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_SLOPE);
  lib::L2CValue::operator_(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
LAB_710001b110:
  lib::L2CValue::L2CValue(aLStack152,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack184,FIGHTER_KINETIC_TYPE_MOTION);
  lib::L2CValue::L2CValue(aLStack200,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
  lib::L2CValue::L2CValue(aLStack216,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack232,true);
  lib::L2CValue::L2CValue(aLStack248,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack264,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack280,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_VISIBILITY);
  lib::L2CValue::operator_(aLStack120,aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  SVar5 = lib::L2CValue::as_integer(aLStack152);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  uVar7 = lib::L2CValue::as_integer(aLStack200);
  GVar8 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = lib::L2CValue::as_bool(aLStack232);
  iVar9 = lib::L2CValue::as_integer(aLStack248);
  iVar10 = lib::L2CValue::as_integer(aLStack264);
  iVar11 = lib::L2CValue::as_integer(aLStack280);
  lib::L2CValue::as_integer(aLStack296);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar5,iVar6,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_TREADED_KIND_ENABLE);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_KEEP);
  lib::L2CValue::L2CValue
            (aLStack248,_FIGHTER_STATUS_ATTR_SCALE_KINETIC_ENERGY | _FIGHTER_STATUS_ATTR_INTO_DOOR);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  bVar2 = lib::L2CValue::as_bool(aLStack184);
  bVar3 = lib::L2CValue::as_bool(aLStack200);
  bVar4 = lib::L2CValue::as_bool(aLStack216);
  uVar14 = lib::L2CValue::as_integer(aLStack232);
  uVar7 = lib::L2CValue::as_integer(aLStack248);
  uVar12 = lib::L2CValue::as_integer(aLStack264);
  lib::L2CValue::as_integer(aLStack280);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

