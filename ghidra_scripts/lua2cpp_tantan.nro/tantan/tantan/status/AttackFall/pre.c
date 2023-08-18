
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackFall_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  SituationKind SVar9;
  uint uVar10;
  GroundCliffCheckKind GVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  L2CValue *pLVar16;
  ulong uVar17;
  uint in_stack_fffffffffffffe24;
  L2CValue aLStack456 [16];
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
  
  lib::L2CValue::L2CValue(aLStack120,true);
  lib::L2CValue::L2CValue(aLStack136,false);
  lib::L2CValue::L2CValue(aLStack152,true);
  cVar1 = (char)&stack0xfffffffffffffff0;
  lua2cpp::L2CFighterCommon::sub_pre_fall_param
            (this,(L2CValue)(cVar1 + -0x68),(L2CValue)(cVar1 + -0x78),(L2CValue)(cVar1 + 'x'));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack344);
  lib::L2CValue::_L2CValue(aLStack344);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLAG);
    lib::L2CValue::L2CValue(aLStack184,FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_INT);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_STATUS_WORK_KEEP_FLAG_FALL_FLOAT);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    iVar8 = lib::L2CValue::as_integer(pLVar16);
    bVar4 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar8);
    lib::L2CValue::L2CValue(aLStack248,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack344,true);
    uVar17 = lib::L2CValue::operator__(aLStack248,aLStack344);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack248);
    if ((uVar17 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack344,
                 _FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_ATTACK);
      lib::L2CValue::operator_(aLStack216,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
    }
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV)
    ;
    iVar8 = lib::L2CValue::as_integer(aLStack264);
    iVar8 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar8);
    lib::L2CValue::L2CValue(aLStack248,iVar8);
    lib::L2CValue::L2CValue(aLStack344,_FIGHTER_STATUS_KIND_FALL);
    uVar17 = lib::L2CValue::operator__(aLStack248,aLStack344);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    if ((uVar17 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack248,aLStack216);
      FUN_7100070c20(aLStack344,aLStack248);
      lib::L2CValue::operator_(aLStack168,aLStack344);
      lib::L2CValue::operator_(aLStack184,aLStack328);
      lib::L2CValue::operator_(aLStack200,aLStack312);
      lib::L2CValue::operator_(aLStack232,aLStack296);
      lib::L2CValue::operator_(aLStack216,aLStack280);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::_L2CValue(aLStack328);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::_L2CValue(aLStack248);
    }
    lib::L2CValue::L2CValue(aLStack344,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack264,GROUND_CORRECT_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack360,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack376,true);
    SVar9 = lib::L2CValue::as_integer(aLStack344);
    iVar8 = lib::L2CValue::as_integer(aLStack232);
    uVar10 = lib::L2CValue::as_integer(aLStack264);
    GVar11 = lib::L2CValue::as_integer(aLStack360);
    bVar4 = lib::L2CValue::as_bool(aLStack376);
    iVar12 = lib::L2CValue::as_integer(aLStack168);
    iVar13 = lib::L2CValue::as_integer(aLStack184);
    iVar14 = lib::L2CValue::as_integer(aLStack200);
    lib::L2CValue::as_integer(aLStack216);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar9,iVar8,uVar10,GVar11,(bool)(bVar4 & 1),iVar12,iVar13,iVar14
               ,in_stack_fffffffffffffe24);
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
    lib::L2CValue::L2CValue(aLStack424,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE);
    lib::L2CValue::L2CValue(aLStack440,0);
    lib::L2CValue::L2CValue(aLStack456,0);
    bVar4 = lib::L2CValue::as_bool(aLStack344);
    iVar8 = lib::L2CValue::as_integer(aLStack264);
    bVar5 = lib::L2CValue::as_bool(aLStack360);
    bVar6 = lib::L2CValue::as_bool(aLStack376);
    bVar7 = lib::L2CValue::as_bool(aLStack392);
    uVar17 = lib::L2CValue::as_integer(aLStack408);
    uVar10 = lib::L2CValue::as_integer(aLStack424);
    uVar15 = lib::L2CValue::as_integer(aLStack440);
    lib::L2CValue::as_integer(aLStack456);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar4 & 1),iVar8,(bool)(bVar5 & 1),(bool)(bVar6 & 1),
               (bool)(bVar7 & 1),uVar17,uVar10,uVar15,in_stack_fffffffffffffe24);
    lib::L2CValue::_L2CValue(aLStack456);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::_L2CValue(aLStack424);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lVar2 = -0x98;
  }
  else {
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_STATUS_KIND_FALL);
    FUN_7100070de0(this,aLStack168);
    lib::L2CValue::_L2CValue(aLStack168);
    iVar8 = app::lua_bind::StatusModule__status_kind_interrupt_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack184,iVar8);
    pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x19);
    lib::L2CValue::L2CValue(aLStack344,0);
    uVar17 = lib::L2CValue::operator_(aLStack344,pLVar16);
    lib::L2CValue::_L2CValue(aLStack344);
    if ((uVar17 & 1) != 0) {
      pLVar16 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
      uVar17 = lib::L2CValue::operator__(pLVar16,aLStack184);
      if ((uVar17 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack200,aLStack184);
        lua2cpp::L2CFighterBase::sub_pre_status_msc(this,(L2CValue)(cVar1 + 'H'));
        lib::L2CValue::_L2CValue(aLStack344);
        lib::L2CValue::_L2CValue(aLStack200);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    lVar2 = -0xa8;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  return;
}

