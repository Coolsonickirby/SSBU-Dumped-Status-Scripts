
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN1Walk_pre(L2CFighterPickel *this,L2CValue *return_value)

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
  
  lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack152,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_KINETIC_TYPE_MOTION_LOOP);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack232,pLVar13);
  FUN_7100060960(aLStack216,aLStack232);
  lib::L2CValue::L2CValue(aLStack328,true);
  uVar14 = lib::L2CValue::operator__(aLStack216,aLStack328);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack232);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack328,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
    lib::L2CValue::operator_(aLStack184,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::operator_(aLStack184,aLStack216);
    pLVar13 = aLStack216;
  }
  else {
    lib::L2CValue::L2CValue(aLStack328,_FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY);
    lib::L2CValue::operator_(aLStack168,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::L2CValue(aLStack328,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLAG);
    lib::L2CValue::operator_(aLStack120,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::L2CValue(aLStack328,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_INT);
    lib::L2CValue::operator_(aLStack136,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::L2CValue(aLStack328,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLOAT);
    lib::L2CValue::operator_(aLStack152,aLStack328);
    pLVar13 = aLStack328;
  }
  lib::L2CValue::_L2CValue(pLVar13);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar5 = lib::L2CValue::as_integer(aLStack248);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack216,iVar5);
  lib::L2CValue::L2CValue(aLStack328,FIGHTER_STATUS_KIND_WALK);
  uVar14 = lib::L2CValue::operator__(aLStack216,aLStack328);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack248);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack216,aLStack168);
    FUN_7100069ea0(aLStack328,aLStack216);
    lib::L2CValue::operator_(aLStack120,aLStack328);
    lib::L2CValue::operator_(aLStack136,aLStack312);
    lib::L2CValue::operator_(aLStack152,aLStack296);
    lib::L2CValue::operator_(aLStack200,aLStack280);
    lib::L2CValue::operator_(aLStack168,aLStack264);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack216);
  }
  lib::L2CValue::L2CValue(aLStack328,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack248,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
  lib::L2CValue::L2CValue(aLStack344,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack360,true);
  SVar6 = lib::L2CValue::as_integer(aLStack328);
  iVar5 = lib::L2CValue::as_integer(aLStack200);
  uVar7 = lib::L2CValue::as_integer(aLStack248);
  GVar8 = lib::L2CValue::as_integer(aLStack344);
  bVar1 = lib::L2CValue::as_bool(aLStack360);
  iVar9 = lib::L2CValue::as_integer(aLStack120);
  iVar10 = lib::L2CValue::as_integer(aLStack136);
  iVar11 = lib::L2CValue::as_integer(aLStack152);
  lib::L2CValue::as_integer(aLStack168);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffe44);
  lib::L2CValue::_L2CValue(aLStack360);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::L2CValue(aLStack328,false);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack344,false);
  lib::L2CValue::L2CValue(aLStack360,false);
  lib::L2CValue::L2CValue(aLStack376,false);
  lib::L2CValue::L2CValue
            (aLStack392,
             _FIGHTER_STATUS_ATTR_DISABLE_JUMP_BOARD_EFFECT |
             _FIGHTER_STATUS_ATTR_SCALE_KINETIC_ENERGY);
  lib::L2CValue::L2CValue(aLStack408,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack424,0);
  bVar1 = lib::L2CValue::as_bool(aLStack328);
  iVar5 = lib::L2CValue::as_integer(aLStack248);
  bVar2 = lib::L2CValue::as_bool(aLStack344);
  bVar3 = lib::L2CValue::as_bool(aLStack360);
  bVar4 = lib::L2CValue::as_bool(aLStack376);
  uVar14 = lib::L2CValue::as_integer(aLStack184);
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
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

