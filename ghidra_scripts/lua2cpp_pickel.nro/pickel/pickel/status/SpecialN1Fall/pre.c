
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN1Fall_pre(L2CFighterPickel *this,L2CValue *return_value)

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
  L2CValue *pLVar14;
  ulong uVar15;
  uint in_stack_fffffffffffffe34;
  L2CValue aLStack440 [16];
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
  
  pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack136,pLVar14);
  FUN_7100060960(aLStack120,aLStack136);
  lib::L2CValue::L2CValue(aLStack344,false);
  uVar15 = lib::L2CValue::operator__(aLStack120,aLStack344);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar15 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_status_pre_SpecialNCommon(this);
  }
  lua2cpp::L2CFighterCommon::sub_pre_fall(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack344);
  lib::L2CValue::_L2CValue(aLStack344);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLAG);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_INT);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLOAT);
    lib::L2CValue::L2CValue(aLStack184,0);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack248,pLVar14);
    FUN_7100060960(aLStack232,aLStack248);
    lib::L2CValue::L2CValue(aLStack344,true);
    uVar15 = lib::L2CValue::operator__(aLStack232,aLStack344);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
    if ((uVar15 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack344,FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
      lib::L2CValue::operator_(aLStack200,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::operator_(aLStack200,aLStack232);
      pLVar14 = aLStack232;
    }
    else {
      lib::L2CValue::L2CValue(aLStack344,_FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY);
      lib::L2CValue::operator_(aLStack184,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::L2CValue(aLStack344,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLAG);
      lib::L2CValue::operator_(aLStack120,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::L2CValue(aLStack344,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_INT);
      lib::L2CValue::operator_(aLStack152,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::L2CValue(aLStack344,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N1_FLOAT);
      lib::L2CValue::operator_(aLStack168,aLStack344);
      pLVar14 = aLStack344;
    }
    lib::L2CValue::_L2CValue(pLVar14);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV)
    ;
    iVar6 = lib::L2CValue::as_integer(aLStack264);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack232,iVar6);
    lib::L2CValue::L2CValue(aLStack344,_FIGHTER_STATUS_KIND_FALL);
    uVar15 = lib::L2CValue::operator__(aLStack232,aLStack344);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack264);
    if ((uVar15 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack232,aLStack184);
      FUN_7100069ea0(aLStack344,aLStack232);
      lib::L2CValue::operator_(aLStack120,aLStack344);
      lib::L2CValue::operator_(aLStack152,aLStack328);
      lib::L2CValue::operator_(aLStack168,aLStack312);
      lib::L2CValue::operator_(aLStack216,aLStack296);
      lib::L2CValue::operator_(aLStack184,aLStack280);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::_L2CValue(aLStack328);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::_L2CValue(aLStack232);
    }
    lib::L2CValue::L2CValue(aLStack344,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack264,GROUND_CORRECT_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack360,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack376,true);
    SVar7 = lib::L2CValue::as_integer(aLStack344);
    iVar6 = lib::L2CValue::as_integer(aLStack216);
    uVar8 = lib::L2CValue::as_integer(aLStack264);
    GVar9 = lib::L2CValue::as_integer(aLStack360);
    bVar2 = lib::L2CValue::as_bool(aLStack376);
    iVar10 = lib::L2CValue::as_integer(aLStack120);
    iVar11 = lib::L2CValue::as_integer(aLStack152);
    iVar12 = lib::L2CValue::as_integer(aLStack168);
    lib::L2CValue::as_integer(aLStack184);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
               in_stack_fffffffffffffe34);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::L2CValue(aLStack344,false);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack360,false);
    lib::L2CValue::L2CValue(aLStack376,false);
    lib::L2CValue::L2CValue(aLStack392,true);
    lib::L2CValue::L2CValue(aLStack408,0);
    lib::L2CValue::L2CValue(aLStack424,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack440,0);
    bVar2 = lib::L2CValue::as_bool(aLStack344);
    iVar6 = lib::L2CValue::as_integer(aLStack264);
    bVar3 = lib::L2CValue::as_bool(aLStack360);
    bVar4 = lib::L2CValue::as_bool(aLStack376);
    bVar5 = lib::L2CValue::as_bool(aLStack392);
    uVar15 = lib::L2CValue::as_integer(aLStack200);
    uVar8 = lib::L2CValue::as_integer(aLStack408);
    uVar13 = lib::L2CValue::as_integer(aLStack424);
    lib::L2CValue::as_integer(aLStack440);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar15,uVar8,uVar13,in_stack_fffffffffffffe34);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::_L2CValue(aLStack424);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

