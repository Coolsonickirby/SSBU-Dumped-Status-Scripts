
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKamui::status::SpecialS_pre(L2CFighterKamui *this,L2CValue *return_value)

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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  uVar14 = lib::L2CValue::operator__(this_00,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  bVar1 = (uVar14 & 1) == 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack168,_GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    lib::L2CValue::L2CValue(aLStack184,true);
    lib::L2CValue::L2CValue(aLStack200,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack232,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack248,FS_SUCCEEDS_KEEP_VISIBILITY);
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
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S);
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
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_ATTACK);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)!bVar1);
  return;
}

