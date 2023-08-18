
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::LandingFallSpecial_pre(L2CFighterInkling *this,L2CValue *return_value)

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
  ulong uVar14;
  uint in_stack_fffffffffffffef4;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::status_pre_landing_fall_special(this);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterCommon::sub_pre_landing_kinetic_type(this);
    lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack184,true);
    lib::L2CValue::L2CValue(aLStack200,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack248,0);
    SVar7 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar8 = lib::L2CValue::as_integer(aLStack152);
    GVar9 = lib::L2CValue::as_integer(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    iVar10 = lib::L2CValue::as_integer(aLStack200);
    iVar11 = lib::L2CValue::as_integer(aLStack216);
    iVar12 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar1 & 1),iVar10,iVar11,iVar12,
               in_stack_fffffffffffffef4);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,true);
    lib::L2CValue::L2CValue(aLStack136,FIGHTER_TREADED_KIND_ENABLE);
    lib::L2CValue::L2CValue(aLStack152,false);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,false);
    lib::L2CValue::L2CValue
              (aLStack200,
               _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI |
               FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_ATTR_INTO_DOOR);
    lib::L2CValue::L2CValue(aLStack232,0);
    lib::L2CValue::L2CValue(aLStack248,0);
    bVar1 = lib::L2CValue::as_bool(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    bVar3 = lib::L2CValue::as_bool(aLStack152);
    bVar4 = lib::L2CValue::as_bool(aLStack168);
    bVar5 = lib::L2CValue::as_bool(aLStack184);
    uVar14 = lib::L2CValue::as_integer(aLStack200);
    uVar8 = lib::L2CValue::as_integer(aLStack216);
    uVar13 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
               (bool)(bVar5 & 1),uVar14,uVar8,uVar13,in_stack_fffffffffffffef4);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

