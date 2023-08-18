
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::AttackFallAerial_pre(L2CFighterPickel *this,L2CValue *return_value)

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
  uint in_stack_fffffffffffffe54;
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
  
  lua2cpp::L2CFighterCommon::sub_pre_fall(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack312);
  lib::L2CValue::_L2CValue(aLStack312);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLAG);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_INT);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLOAT);
    lib::L2CValue::L2CValue(aLStack168,0);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    lib::L2CValue::L2CValue(aLStack200,0);
    pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    iVar6 = lib::L2CValue::as_integer(pLVar14);
    bVar2 = app::FighterSpecializer_Pickel::is_status_kind_attack(iVar6);
    lib::L2CValue::L2CValue(aLStack216,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack312,true);
    uVar15 = lib::L2CValue::operator__(aLStack216,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar15 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack312,
                 _FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_ATTACK);
      lib::L2CValue::operator_(aLStack168,aLStack312);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::L2CValue(aLStack312,_FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_KEEP);
      lib::L2CValue::operator_(aLStack200,aLStack312);
      lib::L2CValue::_L2CValue(aLStack312);
    }
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV)
    ;
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack216,iVar6);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_STATUS_KIND_FALL_AERIAL);
    uVar15 = lib::L2CValue::operator__(aLStack216,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    if ((uVar15 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack216,aLStack168);
      FUN_7100093b90(aLStack312,aLStack216);
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
      lib::L2CValue::_L2CValue(aLStack216);
    }
    lib::L2CValue::L2CValue(aLStack312,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack232,GROUND_CORRECT_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack328,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack344,true);
    SVar7 = lib::L2CValue::as_integer(aLStack312);
    iVar6 = lib::L2CValue::as_integer(aLStack184);
    uVar8 = lib::L2CValue::as_integer(aLStack232);
    GVar9 = lib::L2CValue::as_integer(aLStack328);
    bVar2 = lib::L2CValue::as_bool(aLStack344);
    iVar10 = lib::L2CValue::as_integer(aLStack120);
    iVar11 = lib::L2CValue::as_integer(aLStack136);
    iVar12 = lib::L2CValue::as_integer(aLStack152);
    lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
               in_stack_fffffffffffffe54);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack312,false);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack328,false);
    lib::L2CValue::L2CValue(aLStack344,false);
    lib::L2CValue::L2CValue(aLStack360,true);
    lib::L2CValue::L2CValue(aLStack376,0);
    lib::L2CValue::L2CValue(aLStack392,FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_AIR);
    lib::L2CValue::L2CValue(aLStack408,0);
    bVar2 = lib::L2CValue::as_bool(aLStack312);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    bVar3 = lib::L2CValue::as_bool(aLStack328);
    bVar4 = lib::L2CValue::as_bool(aLStack344);
    bVar5 = lib::L2CValue::as_bool(aLStack360);
    uVar15 = lib::L2CValue::as_integer(aLStack200);
    uVar8 = lib::L2CValue::as_integer(aLStack376);
    uVar13 = lib::L2CValue::as_integer(aLStack392);
    lib::L2CValue::as_integer(aLStack408);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar15,uVar8,uVar13,in_stack_fffffffffffffe54);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  else {
    iVar6 = app::lua_bind::StatusModule__status_kind_interrupt_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack312,iVar6);
    pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::operator_(pLVar14,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_STATUS_KIND_NONE);
    FUN_7100073ca0(this,aLStack312);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

