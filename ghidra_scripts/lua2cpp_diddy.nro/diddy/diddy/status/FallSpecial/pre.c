
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FallSpecial_pre(L2CFighterDiddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  SituationKind SVar6;
  int iVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  L2CValue *pLVar14;
  ulong uVar15;
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
  
  lua2cpp::L2CFighterCommon::sub_pre_fall(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  lib::L2CValue::L2CValue(aLStack136,0);
  pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_UPPER);
  uVar15 = lib::L2CValue::operator__(pLVar14,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar15 & 1) == 0) {
    pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_FALL_ROLL);
    uVar15 = lib::L2CValue::operator__(pLVar14,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar15 & 1) == 0) goto LAB_7100033858;
  }
  lib::L2CValue::L2CValue(aLStack120,FS_SUCCEEDS_KEEP_VISIBILITY);
  lib::L2CValue::operator_(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
LAB_7100033858:
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack184,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
  lib::L2CValue::L2CValue(aLStack200,true);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_DIDDY_WORK_KEEP_FLAG_FALL_SPECIAL_FLAG);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_DIDDY_WORK_KEEP_FLAG_FALL_SPECIAL_INT);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_DIDDY_WORK_KEEP_FLAG_FALL_SPECIAL_FLOAT);
  SVar6 = lib::L2CValue::as_integer(aLStack120);
  iVar7 = lib::L2CValue::as_integer(aLStack152);
  uVar8 = lib::L2CValue::as_integer(aLStack168);
  GVar9 = lib::L2CValue::as_integer(aLStack184);
  bVar2 = lib::L2CValue::as_bool(aLStack200);
  iVar10 = lib::L2CValue::as_integer(aLStack216);
  iVar11 = lib::L2CValue::as_integer(aLStack232);
  iVar12 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar7,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
             in_stack_fffffffffffffee4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,false);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_TREADED_KIND_ENABLE);
  lib::L2CValue::L2CValue(aLStack168,true);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,true);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_ATTR_INTO_DOOR);
  lib::L2CValue::L2CValue(aLStack248,0);
  lib::L2CValue::L2CValue(aLStack264,0);
  bVar2 = lib::L2CValue::as_bool(aLStack120);
  iVar7 = lib::L2CValue::as_integer(aLStack152);
  bVar3 = lib::L2CValue::as_bool(aLStack168);
  bVar4 = lib::L2CValue::as_bool(aLStack184);
  bVar5 = lib::L2CValue::as_bool(aLStack200);
  uVar15 = lib::L2CValue::as_integer(aLStack216);
  uVar8 = lib::L2CValue::as_integer(aLStack232);
  uVar13 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar2 & 1),iVar7,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
             (bool)(bVar5 & 1),uVar15,uVar8,uVar13,in_stack_fffffffffffffee4);
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

