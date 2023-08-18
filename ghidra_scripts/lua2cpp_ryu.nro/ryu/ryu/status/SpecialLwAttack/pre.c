
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::SpecialLwAttack_pre(L2CFighterRyu *this,L2CValue *return_value)

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
  ulong uVar15;
  float fVar16;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack136,fVar16);
  lib::L2CValue::operator_(this_00,aLStack136);
  lib::L2CValue::L2CValue(aLStack168,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack184,0xcee0a3848);
  uVar14 = lib::L2CValue::as_integer(aLStack168);
  uVar15 = lib::L2CValue::as_integer(aLStack184);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,uVar14,uVar15);
  lib::L2CValue::L2CValue(aLStack152,fVar16);
  uVar14 = lib::L2CValue::operator__(aLStack120,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  bVar1 = (uVar14 & 1) == 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack184,true);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
    lib::L2CValue::L2CValue(aLStack216,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_INT);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
    lib::L2CValue::L2CValue(aLStack248,0);
    SVar7 = lib::L2CValue::as_integer(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar8 = lib::L2CValue::as_integer(aLStack152);
    GVar9 = lib::L2CValue::as_integer(aLStack168);
    bVar2 = lib::L2CValue::as_bool(aLStack184);
    iVar10 = lib::L2CValue::as_integer(aLStack200);
    iVar11 = lib::L2CValue::as_integer(aLStack216);
    iVar12 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar7,iVar6,uVar8,GVar9,(bool)(bVar2 & 1),iVar10,iVar11,iVar12,
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
    lib::L2CValue::L2CValue(aLStack120,false);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack152,false);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,false);
    lib::L2CValue::L2CValue
              (aLStack200,
               _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW |
               FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack248,0);
    bVar2 = lib::L2CValue::as_bool(aLStack120);
    iVar6 = lib::L2CValue::as_integer(aLStack136);
    bVar3 = lib::L2CValue::as_bool(aLStack152);
    bVar4 = lib::L2CValue::as_bool(aLStack168);
    bVar5 = lib::L2CValue::as_bool(aLStack184);
    uVar14 = lib::L2CValue::as_integer(aLStack200);
    uVar8 = lib::L2CValue::as_integer(aLStack216);
    uVar13 = lib::L2CValue::as_integer(aLStack232);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar2 & 1),iVar6,(bool)(bVar3 & 1),(bool)(bVar4 & 1),
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
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_ATTACK_TURN);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

