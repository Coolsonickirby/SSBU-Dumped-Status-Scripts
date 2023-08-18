
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackLanding_pre(L2CFighterTantan *this,L2CValue *return_value)

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
  L2CValue *this_00;
  ulong uVar14;
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
  
  lua2cpp::L2CFighterCommon::sub_pre_landing(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack136,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack168,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack184,0);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    iVar6 = lib::L2CValue::as_integer(this_00);
    bVar2 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar6);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar14 = lib::L2CValue::operator__(aLStack200,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar14 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack120,
                 _FS_SUCCEEDS_KEEP_HIT | FS_SUCCEEDS_KEEP_VISIBILITY | _FS_SUCCEEDS_KEEP_ATTACK);
      lib::L2CValue::operator_(aLStack184,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
    }
    lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterCommon::sub_pre_landing_kinetic_type(this);
    lib::L2CValue::L2CValue(aLStack216,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
    lib::L2CValue::L2CValue(aLStack232,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack248,true);
    SVar7 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack200);
    uVar8 = lib::L2CValue::as_integer(aLStack216);
    GVar9 = lib::L2CValue::as_integer(aLStack232);
    bVar2 = lib::L2CValue::as_bool(aLStack248);
    iVar10 = lib::L2CValue::as_integer(aLStack136);
    iVar11 = lib::L2CValue::as_integer(aLStack152);
    iVar12 = lib::L2CValue::as_integer(aLStack168);
    lib::L2CValue::as_integer(aLStack184);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
               in_stack_fffffffffffffeb4);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,true);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack216,false);
    lib::L2CValue::L2CValue(aLStack232,false);
    lib::L2CValue::L2CValue(aLStack248,false);
    lib::L2CValue::L2CValue(aLStack264,0);
    lib::L2CValue::L2CValue(aLStack280,FIGHTER_STATUS_ATTR_DISABLE_TURN_DAMAGE);
    lib::L2CValue::L2CValue(aLStack296,0);
    lib::L2CValue::L2CValue(aLStack312,0);
    bVar2 = lib::L2CValue::as_bool(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack200);
    bVar3 = lib::L2CValue::as_bool(aLStack216);
    bVar4 = lib::L2CValue::as_bool(aLStack232);
    bVar5 = lib::L2CValue::as_bool(aLStack248);
    uVar14 = lib::L2CValue::as_integer(aLStack264);
    uVar8 = lib::L2CValue::as_integer(aLStack280);
    uVar13 = lib::L2CValue::as_integer(aLStack296);
    lib::L2CValue::as_integer(aLStack312);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffeb4);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_KIND_LANDING);
    FUN_7100070de0(this,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

