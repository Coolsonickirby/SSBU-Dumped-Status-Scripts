
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialS_pre(L2CFighterBayonetta *this,L2CValue *return_value)

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
  L2CValue *this_00;
  ulong uVar13;
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
  
  lib::L2CValue::L2CValue(aLStack136,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  uVar13 = lib::L2CValue::operator__(this_00,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack184,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack200,true);
    lib::L2CValue::L2CValue(aLStack216,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack248,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lib::L2CValue::L2CValue(aLStack264,0);
    SVar6 = lib::L2CValue::as_integer(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    uVar7 = lib::L2CValue::as_integer(aLStack168);
    GVar8 = lib::L2CValue::as_integer(aLStack184);
    bVar1 = lib::L2CValue::as_bool(aLStack200);
    iVar9 = lib::L2CValue::as_integer(aLStack216);
    iVar10 = lib::L2CValue::as_integer(aLStack232);
    iVar11 = lib::L2CValue::as_integer(aLStack248);
    lib::L2CValue::as_integer(aLStack264);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
               in_stack_fffffffffffffee4);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,false);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,false);
    lib::L2CValue::L2CValue(aLStack200,false);
    lib::L2CValue::L2CValue
              (aLStack216,
               _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S |
               FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK |
               FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
    lib::L2CValue::L2CValue(aLStack232,0);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack264,0);
    bVar1 = lib::L2CValue::as_bool(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    bVar2 = lib::L2CValue::as_bool(aLStack168);
    bVar3 = lib::L2CValue::as_bool(aLStack184);
    bVar4 = lib::L2CValue::as_bool(aLStack200);
    uVar13 = lib::L2CValue::as_integer(aLStack216);
    uVar7 = lib::L2CValue::as_integer(aLStack232);
    uVar12 = lib::L2CValue::as_integer(aLStack248);
    lib::L2CValue::as_integer(aLStack264);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
               (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffee4);
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
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_U);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue
              (aLStack168,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_D_ENABLE_FRAME);
    iVar5 = lib::L2CValue::as_integer(aLStack168);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack152,iVar5);
    lib::L2CValue::L2CValue(aLStack120,0);
    uVar13 = lib::L2CValue::operator_(aLStack120,aLStack152);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
    if ((uVar13 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D);
      lib::L2CValue::operator_(aLStack136,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
    }
    iVar5 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

