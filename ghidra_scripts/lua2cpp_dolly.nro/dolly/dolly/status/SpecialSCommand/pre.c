
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SpecialBCommand_pre(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  L2CValue *pLVar13;
  ulong uVar14;
  float fVar15;
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
  
  this_00 = &this->globalTable;
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack152,_DAT_7100307768);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar14 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_COMMAND);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_DOLLY_INSTANCE_WORK_ID_INT_CAT4_SPECIAL_COMMAND);
      iVar5 = lib::L2CValue::as_integer(aLStack120);
      iVar6 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL2);
      iVar5 = lib::L2CValue::as_integer(aLStack120);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
      goto LAB_710002a264;
    }
  }
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack120,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) != 0) {
    fVar15 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack136,fVar15);
    lib::L2CValue::L2CValue(aLStack120,1.0);
    uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((uVar14 & 1) == 0) {
      iVar5 = app::lua_bind::ControlModule__special_s_turn_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack136,iVar5);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_COMMAND_TURN_LR_RIGHT);
      uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar14 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
        iVar5 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
        goto LAB_710002a264;
      }
    }
    else {
      iVar5 = app::lua_bind::ControlModule__special_s_turn_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack136,iVar5);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_COMMAND_TURN_LR_LEFT);
      uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar14 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
        iVar5 = lib::L2CValue::as_integer(aLStack120);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar5);
LAB_710002a264:
        lib::L2CValue::_L2CValue(aLStack120);
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack136);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
  uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B_COMMAND);
    uVar14 = lib::L2CValue::operator__(pLVar13,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack120,
                 _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_S |
                 FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK |
                 FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON);
      lib::L2CValue::operator_(aLStack136,aLStack120);
      goto LAB_710002a354;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack120,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_COMMAND1 |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  lib::L2CValue::operator_(aLStack136,aLStack120);
LAB_710002a354:
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack184,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack200,true);
  lib::L2CValue::L2CValue(aLStack216,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack248,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack264,0);
  SVar7 = lib::L2CValue::as_integer(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack152);
  uVar8 = lib::L2CValue::as_integer(aLStack168);
  GVar9 = lib::L2CValue::as_integer(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack200);
  iVar6 = lib::L2CValue::as_integer(aLStack216);
  iVar10 = lib::L2CValue::as_integer(aLStack232);
  iVar11 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar7,iVar5,uVar8,GVar9,(bool)(bVar1 & 1),iVar6,iVar10,iVar11,
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
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack248,0);
  bVar1 = lib::L2CValue::as_bool(aLStack120);
  iVar5 = lib::L2CValue::as_integer(aLStack152);
  bVar2 = lib::L2CValue::as_bool(aLStack168);
  bVar3 = lib::L2CValue::as_bool(aLStack184);
  bVar4 = lib::L2CValue::as_bool(aLStack200);
  uVar14 = lib::L2CValue::as_integer(aLStack136);
  uVar8 = lib::L2CValue::as_integer(aLStack216);
  uVar12 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar14,uVar8,uVar12,in_stack_fffffffffffffee4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

