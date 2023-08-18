
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::HammerFall_pre(L2CFighterGamewatch *this,L2CValue *return_value)

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
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  iVar6 = lib::L2CValue::as_integer(this_00);
  bVar1 = app::FighterUtil::is_hammer_status(iVar6);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::operator_(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::operator_(aLStack168,aLStack120);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_FLAG);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_INT);
    lib::L2CValue::operator_(aLStack152,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_HAMMER_FLOAT);
    lib::L2CValue::operator_(aLStack168,aLStack120);
  }
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
  lib::L2CValue::L2CValue(aLStack200,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack216,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack232,true);
  FUN_710000b190(aLStack248,this);
  SVar7 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  uVar8 = lib::L2CValue::as_integer(aLStack200);
  GVar9 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = lib::L2CValue::as_bool(aLStack232);
  iVar10 = lib::L2CValue::as_integer(aLStack136);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  iVar12 = lib::L2CValue::as_integer(aLStack168);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar1 & 1),iVar10,iVar11,iVar12,
             in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,true);
  lib::L2CValue::L2CValue
            (aLStack248,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_HAMMER |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_STATUS_ATTR_INTO_DOOR);
  lib::L2CValue::L2CValue(aLStack280,_FIGHTER_POWER_UP_ATTACK_BIT_ITEM);
  lib::L2CValue::L2CValue(aLStack296,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  bVar3 = lib::L2CValue::as_bool(aLStack200);
  bVar4 = lib::L2CValue::as_bool(aLStack216);
  bVar5 = lib::L2CValue::as_bool(aLStack232);
  uVar14 = lib::L2CValue::as_integer(aLStack248);
  uVar8 = lib::L2CValue::as_integer(aLStack264);
  uVar13 = lib::L2CValue::as_integer(aLStack280);
  lib::L2CValue::as_integer(aLStack296);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

