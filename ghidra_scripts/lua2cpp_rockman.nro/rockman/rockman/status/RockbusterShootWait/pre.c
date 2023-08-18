
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::RockbusterShootWait_pre(L2CFighterRockman *this,L2CValue *return_value)

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
  L2CValue *pLVar14;
  uint in_stack_fffffffffffffeb4;
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
  
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP);
  iVar5 = lib::L2CValue::as_integer(aLStack168);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack152,iVar5);
  lib::L2CValue::L2CValue(aLStack120,0);
  uVar13 = lib::L2CValue::operator__(aLStack152,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,0);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue(aLStack152,0);
  pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack184,pLVar14);
  FUN_710000a880(aLStack168,aLStack184);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar13 = lib::L2CValue::operator__(aLStack168,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar13 & 1) == 0) {
    pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar13 = lib::L2CValue::operator__(pLVar14,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    if ((uVar13 & 1) == 0) goto LAB_710001966c;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
  }
  lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_SLOPE);
  lib::L2CValue::operator_(aLStack152,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
LAB_710001966c:
  lib::L2CValue::L2CValue(aLStack168,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack200,FIGHTER_KINETIC_TYPE_MOTION);
  lib::L2CValue::L2CValue(aLStack216,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
  lib::L2CValue::L2CValue(aLStack232,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack248,true);
  lib::L2CValue::L2CValue(aLStack264,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack280,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack296,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_VISIBILITY);
  lib::L2CValue::operator_(aLStack120,aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  SVar6 = lib::L2CValue::as_integer(aLStack168);
  iVar5 = lib::L2CValue::as_integer(aLStack200);
  uVar7 = lib::L2CValue::as_integer(aLStack216);
  GVar8 = lib::L2CValue::as_integer(aLStack232);
  bVar1 = lib::L2CValue::as_bool(aLStack248);
  iVar9 = lib::L2CValue::as_integer(aLStack264);
  iVar10 = lib::L2CValue::as_integer(aLStack280);
  iVar11 = lib::L2CValue::as_integer(aLStack296);
  lib::L2CValue::as_integer(aLStack312);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffeb4);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack168,FIGHTER_TREADED_KIND_ENABLE);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_KEEP);
  lib::L2CValue::L2CValue
            (aLStack264,
             _FIGHTER_STATUS_ATTR_SCALE_KINETIC_ENERGY | _FIGHTER_STATUS_ATTR_INTO_DOOR |
             _FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT);
  lib::L2CValue::L2CValue(aLStack280,FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_1);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack168);
  bVar2 = lib::L2CValue::as_bool(aLStack200);
  bVar3 = lib::L2CValue::as_bool(aLStack216);
  bVar4 = lib::L2CValue::as_bool(aLStack232);
  uVar13 = lib::L2CValue::as_integer(aLStack248);
  uVar7 = lib::L2CValue::as_integer(aLStack264);
  uVar12 = lib::L2CValue::as_integer(aLStack280);
  lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffeb4);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

