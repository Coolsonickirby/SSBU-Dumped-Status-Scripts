
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3Jump_pre(L2CFighterKirby *this,L2CValue *return_value)

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
  L2CValue *pLVar13;
  ulong uVar14;
  uint in_stack_fffffffffffffe44;
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
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
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLAG);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_INT);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLOAT);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_JUMP);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack216,pLVar13);
  FUN_7100120720(aLStack200,aLStack216);
  lib::L2CValue::L2CValue(aLStack312,true);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack312);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack312,_FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY);
    lib::L2CValue::operator_(aLStack168,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_FLAG);
    lib::L2CValue::operator_(aLStack120,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_INT);
    lib::L2CValue::operator_(aLStack136,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N3_FLOAT);
    lib::L2CValue::operator_(aLStack152,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
  }
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar5 = lib::L2CValue::as_integer(aLStack232);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack200,iVar5);
  lib::L2CValue::L2CValue(aLStack312,_FIGHTER_STATUS_KIND_JUMP);
  uVar14 = lib::L2CValue::operator__(aLStack200,aLStack312);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack232);
  if ((uVar14 & 1) == 0) {
    iVar5 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack312,iVar5);
    uVar14 = lib::L2CValue::operator__(aLStack312,aLStack184);
    lib::L2CValue::_L2CValue(aLStack312);
    if ((uVar14 & 1) == 0) goto LAB_71000ff2e4;
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::operator_(aLStack184,aLStack312);
    pLVar13 = aLStack312;
  }
  else {
    lib::L2CValue::L2CValue(aLStack200,aLStack168);
    FUN_710012a0f0(aLStack312,aLStack200);
    lib::L2CValue::operator_(aLStack120,aLStack312);
    lib::L2CValue::operator_(aLStack136,aLStack296);
    lib::L2CValue::operator_(aLStack152,aLStack280);
    lib::L2CValue::operator_(aLStack184,aLStack264);
    lib::L2CValue::operator_(aLStack168,aLStack248);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack312);
    pLVar13 = aLStack200;
  }
  lib::L2CValue::_L2CValue(pLVar13);
LAB_71000ff2e4:
  lib::L2CValue::L2CValue(aLStack312,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack232,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack328,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack344,true);
  SVar6 = lib::L2CValue::as_integer(aLStack312);
  iVar5 = lib::L2CValue::as_integer(aLStack184);
  uVar7 = lib::L2CValue::as_integer(aLStack232);
  GVar8 = lib::L2CValue::as_integer(aLStack328);
  bVar1 = lib::L2CValue::as_bool(aLStack344);
  iVar9 = lib::L2CValue::as_integer(aLStack120);
  iVar10 = lib::L2CValue::as_integer(aLStack136);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  lib::L2CValue::as_integer(aLStack168);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffe44);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::L2CValue(aLStack312,false);
  lib::L2CValue::L2CValue(aLStack232,FIGHTER_TREADED_KIND_ENABLE);
  lib::L2CValue::L2CValue(aLStack328,false);
  lib::L2CValue::L2CValue(aLStack344,false);
  lib::L2CValue::L2CValue(aLStack360,true);
  lib::L2CValue::L2CValue(aLStack376,0);
  lib::L2CValue::L2CValue(aLStack392,0);
  lib::L2CValue::L2CValue(aLStack408,FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_3);
  lib::L2CValue::L2CValue(aLStack424,0);
  bVar1 = lib::L2CValue::as_bool(aLStack312);
  iVar5 = lib::L2CValue::as_integer(aLStack232);
  bVar2 = lib::L2CValue::as_bool(aLStack328);
  bVar3 = lib::L2CValue::as_bool(aLStack344);
  bVar4 = lib::L2CValue::as_bool(aLStack360);
  uVar14 = lib::L2CValue::as_integer(aLStack376);
  uVar7 = lib::L2CValue::as_integer(aLStack392);
  uVar12 = lib::L2CValue::as_integer(aLStack408);
  lib::L2CValue::as_integer(aLStack424);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffe44);
  lib::L2CValue::_L2CValue(aLStack424);
  lib::L2CValue::_L2CValue(aLStack408);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::_L2CValue(aLStack376);
  lib::L2CValue::_L2CValue(aLStack360);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

